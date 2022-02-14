
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long long*) ;
 int VAR_3 ;
 int VAR_4 ;
 double* VAR_5 ;

double FUNC_2(void)
{
 unsigned long long VAR_6 = 3;
 unsigned int VAR_7;
 double VAR_8;

 if (FUNC_1(VAR_2, VAR_0, &VAR_6))
  FUNC_0(VAR_3, "SLM BCLK: unknown\n");

 VAR_7 = VAR_6 & 0xf;
 if (VAR_7 >= VAR_1) {
  FUNC_0(VAR_3, "SLM BCLK[%d] invalid\n", VAR_7);
  VAR_7 = 3;
 }
 VAR_8 = VAR_5[VAR_7];

 if (!VAR_4)
  FUNC_0(VAR_3, "SLM BCLK: %.1f Mhz\n", VAR_8);

 return VAR_8;
}
