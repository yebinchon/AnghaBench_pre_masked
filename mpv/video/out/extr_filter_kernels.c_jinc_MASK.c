
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int params ;


 double VAR_0 ;
 int FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(params *VAR_1, double VAR_2)
{
    if (FUNC_0(VAR_2) < 1e-8)
        return 1.0;
    VAR_2 *= VAR_0;
    return 2.0 * FUNC_1(VAR_2) / VAR_2;
}
