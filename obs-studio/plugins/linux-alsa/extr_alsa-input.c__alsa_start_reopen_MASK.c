
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {int device; int reopen_thread; int reopen; } ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ,struct alsa_data*) ;

void FUNC_6(struct alsa_data *VAR_3)
{
 pthread_attr_t VAR_4;
 int VAR_5;

 if (FUNC_1(&VAR_3->reopen))
  return;

 FUNC_3(&VAR_4);
 FUNC_4(&VAR_4, VAR_1);

 VAR_5 = FUNC_5(&VAR_3->reopen_thread, &VAR_4, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_0,
       "Failed to create reopen thread for device '%s'.",
       VAR_3->device);
 }

 FUNC_2(&VAR_4);
}
