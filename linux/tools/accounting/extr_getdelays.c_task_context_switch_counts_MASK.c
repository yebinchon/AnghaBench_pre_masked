
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskstats {scalar_t__ nivcsw; scalar_t__ nvcsw; } ;


 int FUNC_0 (char*,char*,char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct taskstats *VAR_0)
{
 FUNC_0("\n\nTask   %15s%15s\n"
        "       %15llu%15llu\n",
        "voluntary", "nonvoluntary",
        (unsigned long long)VAR_0->nvcsw, (unsigned long long)VAR_0->nivcsw);
}
