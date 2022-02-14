
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_event_data {int manual; int signalled; int mutex; int cond; } ;
typedef struct os_event_data os_event_t ;
typedef enum os_event_type { ____Placeholder_os_event_type } os_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct os_event_data*) ;
 struct os_event_data* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(os_event_t **VAR_1, enum os_event_type VAR_2)
{
 int VAR_3 = 0;

 struct os_event_data *VAR_4 = FUNC_1(sizeof(struct os_event_data));

 if ((VAR_3 = FUNC_4(&VAR_4->mutex, ((void*)0))) < 0) {
  FUNC_0(VAR_4);
  return VAR_3;
 }

 if ((VAR_3 = FUNC_2(&VAR_4->cond, ((void*)0))) < 0) {
  FUNC_3(&VAR_4->mutex);
  FUNC_0(VAR_4);
  return VAR_3;
 }

 VAR_4->manual = (VAR_2 == VAR_0);
 VAR_4->signalled = 0;
 *VAR_1 = VAR_4;

 return 0;
}
