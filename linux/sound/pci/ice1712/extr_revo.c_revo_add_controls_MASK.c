
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int subvendor; } ;
struct snd_ice1712 {TYPE_2__* pcm; struct revo51_spec* spec; TYPE_3__ eeprom; } ;
struct revo51_spec {int ak4114; int pt2258; } ;
struct TYPE_5__ {TYPE_1__* streams; } ;
struct TYPE_4__ {int substream; } ;


 size_t VAR_0 ;



 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_1)
{
 struct revo51_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 switch (VAR_1->eeprom.subvendor) {
 case 128:
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2 = VAR_1->spec;
  VAR_3 = FUNC_2(VAR_2->pt2258);
  if (VAR_3 < 0)
   return VAR_3;
  break;
 case 130:
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_0(VAR_2->ak4114, ((void*)0),
     VAR_1->pcm->streams[VAR_0].substream);
  if (VAR_3 < 0)
   return VAR_3;
  break;
 }
 return 0;
}
