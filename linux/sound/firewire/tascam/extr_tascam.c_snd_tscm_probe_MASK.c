
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {int dwork; int hwdep_wait; int lock; int mutex; int unit; } ;
struct ieee1394_device_id {int dummy; } ;
struct fw_unit {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct snd_tscm*) ;
 struct snd_tscm* FUNC_2 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct fw_unit*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fw_unit*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct fw_unit *VAR_3,
      const struct ieee1394_device_id *VAR_4)
{
 struct snd_tscm *VAR_5;


 VAR_5 = FUNC_2(&VAR_3->device, sizeof(struct snd_tscm), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->unit = FUNC_3(VAR_3);
 FUNC_1(&VAR_3->device, VAR_5);

 FUNC_5(&VAR_5->mutex);
 FUNC_7(&VAR_5->lock);
 FUNC_4(&VAR_5->hwdep_wait);


 FUNC_0(&VAR_5->dwork, VAR_2);
 FUNC_6(VAR_3, &VAR_5->dwork);

 return 0;
}
