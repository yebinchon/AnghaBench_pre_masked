
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_event_t ;
typedef enum os_event_type { ____Placeholder_os_event_type } os_event_type ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(os_event_t **VAR_2, enum os_event_type VAR_3)
{
 HANDLE VAR_4;

 VAR_4 = FUNC_0(((void*)0), (VAR_3 == VAR_1), VAR_0, ((void*)0));
 if (!VAR_4)
  return -1;

 *VAR_2 = (os_event_t *)VAR_4;
 return 0;
}
