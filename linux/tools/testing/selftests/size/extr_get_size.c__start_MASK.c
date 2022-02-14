
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {unsigned long totalram; unsigned long freeram; unsigned long bufferram; int mem_unit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,unsigned long,int ) ;
 int FUNC_3 (struct sysinfo*) ;

void FUNC_4(void)
{
 int VAR_0;
 struct sysinfo VAR_1;
 unsigned long VAR_2;
 static const char *VAR_3 = " get runtime memory use\n";

 FUNC_1("TAP version 13\n");
 FUNC_1("# Testing system size.\n");

 VAR_0 = FUNC_3(&VAR_1);
 if (VAR_0 < 0) {
  FUNC_1("not ok 1");
  FUNC_1(VAR_3);
  FUNC_1(" ---\n reason: \"could not get sysinfo\"\n ...\n");
  FUNC_0(VAR_0);
 }
 FUNC_1("ok 1");
 FUNC_1(VAR_3);


 VAR_2 = VAR_1.totalram - VAR_1.freeram - VAR_1.bufferram;
 FUNC_1("# System runtime memory report (units in Kilobytes):\n");
 FUNC_1(" ---\n");
 FUNC_2(" Total:  ", VAR_1.totalram, VAR_1.mem_unit);
 FUNC_2(" Free:   ", VAR_1.freeram, VAR_1.mem_unit);
 FUNC_2(" Buffer: ", VAR_1.bufferram, VAR_1.mem_unit);
 FUNC_2(" In use: ", VAR_2, VAR_1.mem_unit);
 FUNC_1(" ...\n");
 FUNC_1("1..1\n");

 FUNC_0(0);
}
