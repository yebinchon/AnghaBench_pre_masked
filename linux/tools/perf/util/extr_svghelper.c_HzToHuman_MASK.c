
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,...) ;
 unsigned long long VAR_0 ;

__attribute__((used)) static char *FUNC_2(unsigned long VAR_1)
{
 static char VAR_2[1024];
 unsigned long long VAR_3;

 FUNC_0(VAR_2, 0, 1024);

 VAR_3 = VAR_1;


 FUNC_1(VAR_2, "%9lli", VAR_3);

 if (VAR_3 > 1000)
  FUNC_1(VAR_2, " %6lli Mhz", (VAR_3+500)/1000);

 if (VAR_3 > 1500000)
  FUNC_1(VAR_2, " %6.2f Ghz", (VAR_3+5000.0)/1000000);

 if (VAR_3 == VAR_0)
  FUNC_1(VAR_2, "Turbo");

 return VAR_2;
}
