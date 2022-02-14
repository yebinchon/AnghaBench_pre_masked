
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {scalar_t__ direction; int next_track; TYPE_2__* runtime; TYPE_1__* ops; } ;
struct TYPE_4__ {int state; int sleep; } ;
struct TYPE_3__ {int (* trigger ) (struct snd_compr_stream*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_compr_stream*) ;
 int FUNC_2 (struct snd_compr_stream*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_compr_stream *VAR_4)
{
 int VAR_5;

 switch (VAR_4->runtime->state) {
 case 132:
 case 129:
 case 130:
 case 131:
  return -VAR_0;
 case 128:
  return -VAR_1;
 default:
  break;
 }


 if (VAR_4->direction == VAR_2)
  return -VAR_0;


 if (VAR_4->next_track == 0)
  return -VAR_0;

 VAR_5 = VAR_4->ops->trigger(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_0("Partial drain returned failure\n");
  FUNC_3(&VAR_4->runtime->sleep);
  return VAR_5;
 }

 VAR_4->next_track = 0;
 return FUNC_1(VAR_4);
}
