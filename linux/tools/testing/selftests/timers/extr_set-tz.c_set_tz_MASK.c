
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int tz_minuteswest; int tz_dsttime; } ;


 int FUNC_0 (int ,struct timezone*) ;

int FUNC_1(int VAR_0, int VAR_1)
{
 struct timezone VAR_2;

 VAR_2.tz_minuteswest = VAR_0;
 VAR_2.tz_dsttime = VAR_1;

 return FUNC_0(0, &VAR_2);
}
