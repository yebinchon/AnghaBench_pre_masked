
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_2__ {int failed_freeze; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(suspend_state_t VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (!FUNC_5(VAR_5))
  return -VAR_0;

 FUNC_3();

 VAR_6 = FUNC_1(VAR_2, -1, &VAR_7);
 if (VAR_6) {
  VAR_7--;
  goto Finish;
 }

 FUNC_7(FUNC_0("freeze_processes"), 0, 1);
 VAR_6 = FUNC_6();
 FUNC_7(FUNC_0("freeze_processes"), 0, 0);
 if (!VAR_6)
  return 0;

 VAR_4.failed_freeze++;
 FUNC_2(VAR_3);
 Finish:
 FUNC_1(VAR_1, VAR_7, ((void*)0));
 FUNC_4();
 return VAR_6;
}
