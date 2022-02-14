
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_id {int name; void* iface; } ;
struct snd_card {int dev; } ;
struct snd_ac97 {int private_data; } ;
typedef int elem ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct snd_ctl_elem_id*,int ,int) ;
 int * VAR_4 ;
 int FUNC_7 (struct snd_ac97*,int ) ;
 int FUNC_8 (struct snd_card*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_11 (int ,char*,int) ;

int FUNC_12(struct snd_card *VAR_5, struct snd_ac97 *VAR_6)
{
 struct snd_ctl_elem_id VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_5())
  return 0;

 if (FUNC_4(VAR_2, VAR_0)) {
  FUNC_1(VAR_5->dev, "unable to allocate MIC GPIO\n");
  return -VAR_1;
 }
 FUNC_2(VAR_2, 0);


 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.iface = VAR_3;
 FUNC_11(VAR_7.name, "High Pass Filter Enable", sizeof(VAR_7.name));
 FUNC_10(VAR_5, &VAR_7);


 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.iface = VAR_3;
 FUNC_11(VAR_7.name, "V_REFOUT Enable", sizeof(VAR_7.name));
 FUNC_10(VAR_5, &VAR_7);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_9 = FUNC_8(VAR_5, FUNC_9(&VAR_4[VAR_8],
    VAR_6->private_data));
  if (VAR_9 < 0) {
   FUNC_3(VAR_2);
   return VAR_9;
  }
 }


 FUNC_7(VAR_6, 0);
 return 0;
}
