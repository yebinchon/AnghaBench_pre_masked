
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int FUNC_0 (struct tep_handle*,int,char*,char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct tep_handle *VAR_2)
{
 FUNC_0(VAR_2, -1,
         "timer", "hrtimer_expire_entry",
         VAR_0, ((void*)0));

 FUNC_0(VAR_2, -1, "timer", "hrtimer_start",
         VAR_1, ((void*)0));
}
