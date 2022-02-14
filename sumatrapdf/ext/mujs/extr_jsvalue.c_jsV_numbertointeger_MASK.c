
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;

int FUNC_2(double VAR_2)
{
 if (VAR_2 == 0) return 0;
 if (FUNC_1(VAR_2)) return 0;
 VAR_2 = (VAR_2 < 0) ? -FUNC_0(-VAR_2) : FUNC_0(VAR_2);
 if (VAR_2 < VAR_1) return VAR_1;
 if (VAR_2 > VAR_0) return VAR_0;
 return (int)VAR_2;
}
