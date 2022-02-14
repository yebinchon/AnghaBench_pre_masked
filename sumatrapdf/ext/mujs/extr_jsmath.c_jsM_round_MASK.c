
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(double VAR_0)
{
 if (FUNC_2(VAR_0)) return VAR_0;
 if (FUNC_1(VAR_0)) return VAR_0;
 if (VAR_0 == 0) return VAR_0;
 if (VAR_0 > 0 && VAR_0 < 0.5) return 0;
 if (VAR_0 < 0 && VAR_0 >= -0.5) return -0;
 return FUNC_0(VAR_0 + 0.5);
}
