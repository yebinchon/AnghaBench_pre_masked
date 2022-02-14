
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt8Number ;


 double FUNC_0 (scalar_t__) ;
 double FUNC_1 (double) ;

__attribute__((used)) static
double FUNC_2(cmsUInt8Number VAR_0[3], cmsUInt8Number VAR_1[3])
{
       double VAR_2, VAR_3, VAR_4;

       VAR_2 = FUNC_0((double) VAR_1[0] - VAR_0[0]);
       VAR_3 = FUNC_0((double) VAR_1[1] - VAR_0[1]);
       VAR_4 = FUNC_0((double) VAR_1[2] - VAR_0[2]);

       return (FUNC_1((VAR_2*VAR_2 + VAR_3*VAR_3 + VAR_4*VAR_4)));
}
