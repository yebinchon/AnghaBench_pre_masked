
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*,char*) ;
 int VAR_0 ;

void FUNC_2(void)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0, "<g>\n");
 FUNC_1(0, "Running", "sample");
 FUNC_1(100, "Idle","c1");
 FUNC_1(200, "Deeper Idle", "c3");
 FUNC_1(350, "Deepest Idle", "c6");
 FUNC_1(550, "Sleeping", "process2");
 FUNC_1(650, "Waiting for cpu", "waiting");
 FUNC_1(800, "Blocked on IO", "blocked");
 FUNC_0(VAR_0, "</g>\n");
}
