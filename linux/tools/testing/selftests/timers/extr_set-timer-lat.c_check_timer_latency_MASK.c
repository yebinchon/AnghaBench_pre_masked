
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;

int FUNC_2(int VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_3, VAR_4);
 FUNC_1("timer fired early: %7d : ", VAR_2);
 if (!VAR_2) {
  FUNC_1("[OK]\n");
 } else {
  FUNC_1("[FAILED]\n");
  VAR_5 = -1;
 }

 FUNC_0(VAR_3, VAR_4);
 FUNC_1("max latency: %10lld ns : ", VAR_1);

 if (VAR_1 < VAR_0) {
  FUNC_1("[OK]\n");
 } else {
  FUNC_1("[FAILED]\n");
  VAR_5 = -1;
 }
 return VAR_5;
}
