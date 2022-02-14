
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {TYPE_2__* runtime; TYPE_1__* ops; } ;
struct TYPE_4__ {int state; scalar_t__ total_bytes_transferred; scalar_t__ total_bytes_available; } ;
struct TYPE_3__ {int (* trigger ) (struct snd_compr_stream*,int ) ;} ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct snd_compr_stream*) ;
 int FUNC_1 (struct snd_compr_stream*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_2)
{
 int VAR_3;

 switch (VAR_2->runtime->state) {
 case 130:
 case 128:
 case 129:
  return -VAR_0;
 default:
  break;
 }

 VAR_3 = VAR_2->ops->trigger(VAR_2, VAR_1);
 if (!VAR_3) {
  FUNC_0(VAR_2);
  VAR_2->runtime->total_bytes_available = 0;
  VAR_2->runtime->total_bytes_transferred = 0;
 }
 return VAR_3;
}
