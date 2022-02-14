
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {TYPE_2__* runtime; TYPE_1__* ops; int direction; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int (* trigger ) (struct snd_compr_stream*,int ) ;} ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_compr_stream*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_compr_stream *VAR_4)
{
 int VAR_5;

 switch (VAR_4->runtime->state) {
 case 128:
  if (VAR_4->direction != VAR_3)
   return -VAR_0;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = VAR_4->ops->trigger(VAR_4, VAR_2);
 if (!VAR_5)
  VAR_4->runtime->state = VAR_1;
 return VAR_5;
}
