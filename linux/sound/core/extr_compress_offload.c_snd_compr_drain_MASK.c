
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {TYPE_2__* runtime; TYPE_1__* ops; } ;
struct TYPE_4__ {int state; int sleep; } ;
struct TYPE_3__ {int (* trigger ) (struct snd_compr_stream*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_compr_stream*) ;
 int FUNC_2 (struct snd_compr_stream*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_compr_stream *VAR_3)
{
 int VAR_4;

 switch (VAR_3->runtime->state) {
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

 VAR_4 = VAR_3->ops->trigger(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_0("SND_COMPR_TRIGGER_DRAIN failed %d\n", VAR_4);
  FUNC_3(&VAR_3->runtime->sleep);
  return VAR_4;
 }

 return FUNC_1(VAR_3);
}
