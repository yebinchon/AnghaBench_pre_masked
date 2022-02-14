
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int is_console; int dwork; int hwdep_wait; int lock; int mutex; int unit; } ;
struct ieee1394_device_id {scalar_t__ model_id; } ;
struct fw_unit {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,struct snd_dg00x*) ;
 struct snd_dg00x* FUNC_2 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct fw_unit*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fw_unit*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct fw_unit *VAR_4,
      const struct ieee1394_device_id *VAR_5)
{
 struct snd_dg00x *VAR_6;


 VAR_6 = FUNC_2(&VAR_4->device, sizeof(struct snd_dg00x),
        VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->unit = FUNC_3(VAR_4);
 FUNC_1(&VAR_4->device, VAR_6);

 FUNC_5(&VAR_6->mutex);
 FUNC_7(&VAR_6->lock);
 FUNC_4(&VAR_6->hwdep_wait);

 VAR_6->is_console = VAR_5->model_id == VAR_2;


 FUNC_0(&VAR_6->dwork, VAR_3);
 FUNC_6(VAR_4, &VAR_6->dwork);

 return 0;
}
