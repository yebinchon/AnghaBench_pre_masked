
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int inherit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int * VAR_3 ;
 int FUNC_7 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_8(struct perf_event_attr *VAR_4)
{
 int VAR_5, VAR_6 = 0;




 VAR_4->inherit = 1;


 VAR_5 = FUNC_7(VAR_4, 0, -1, -1, 0);
 if (VAR_5 < 0) {
  FUNC_6("sys_perf_event_open failed\n");
  FUNC_3(0);
 }
 FUNC_0(FUNC_4(VAR_5, VAR_2, VAR_3[0]) == 0);
 FUNC_0(FUNC_4(VAR_5, VAR_1) == 0);

 if (FUNC_2() < 0) {
  VAR_6 = 1;
  goto err;
 }
 FUNC_5();
err:
 FUNC_4(VAR_5, VAR_0);
 FUNC_1(VAR_5);
 if (VAR_6)
  FUNC_3(0);
}
