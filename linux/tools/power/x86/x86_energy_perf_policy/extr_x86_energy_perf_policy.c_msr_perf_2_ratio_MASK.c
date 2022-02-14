
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int,double) ;
 int VAR_2 ;

int FUNC_1(int VAR_3)
{
 int VAR_4;
 double VAR_5;

 if (!VAR_0)
  return VAR_3;

 VAR_5 = (double)VAR_3 * (double) VAR_0 / 255.0;
 VAR_5 = VAR_5 + 0.5;
 VAR_4 = (int)VAR_5;

 if (VAR_1)
  FUNC_0(VAR_2, "%d = msr_perf_ratio(%d) {%f}\n", VAR_4, VAR_3, VAR_5);

 return VAR_4;
}
