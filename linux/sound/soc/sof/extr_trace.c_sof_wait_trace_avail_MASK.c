
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_entry_t ;
struct snd_sof_dev {int dtrace_draining; int trace_sleep; int dtrace_is_enabled; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (struct snd_sof_dev*,int ,size_t) ;

__attribute__((used)) static size_t FUNC_7(struct snd_sof_dev *VAR_3,
       loff_t VAR_4, size_t VAR_5)
{
 wait_queue_entry_t VAR_6;
 size_t VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5);


 if (VAR_7)
  return VAR_7;

 if (!VAR_3->dtrace_is_enabled && VAR_3->dtrace_draining) {




  VAR_3->dtrace_draining = 0;
  return 0;
 }


 FUNC_1(&VAR_6, VAR_2);
 FUNC_4(VAR_1);
 FUNC_0(&VAR_3->trace_sleep, &VAR_6);

 if (!FUNC_5(VAR_2)) {

  FUNC_3(VAR_0);
 }
 FUNC_2(&VAR_3->trace_sleep, &VAR_6);

 return FUNC_6(VAR_3, VAR_4, VAR_5);
}
