
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int card; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_6__ {int name; } ;
struct snd_kcontrol {int private_value; TYPE_1__ id; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(vortex_t *VAR_5)
{
 struct snd_kcontrol *VAR_6;
 int VAR_7, VAR_8;

 FUNC_3(VAR_5);

 if ((VAR_6 =
      FUNC_1(&VAR_3, VAR_5)) == ((void*)0))
  return -VAR_0;
 VAR_6->private_value = 0;
 if ((VAR_7 = FUNC_0(VAR_5->card, VAR_6)) < 0)
  return VAR_7;


 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  if ((VAR_6 =
       FUNC_1(&VAR_2, VAR_5)) == ((void*)0))
   return -VAR_0;
  FUNC_2(VAR_6->id.name, sizeof(VAR_6->id.name),
   "%s Playback Volume", VAR_1[VAR_8]);
  VAR_6->private_value = VAR_8;
  if ((VAR_7 = FUNC_0(VAR_5->card, VAR_6)) < 0)
   return VAR_7;

 }

 if ((VAR_6 = FUNC_1(&VAR_4, VAR_5)) == ((void*)0))
  return -VAR_0;
 if ((VAR_7 = FUNC_0(VAR_5->card, VAR_6)) < 0)
  return VAR_7;

 return 0;
}
