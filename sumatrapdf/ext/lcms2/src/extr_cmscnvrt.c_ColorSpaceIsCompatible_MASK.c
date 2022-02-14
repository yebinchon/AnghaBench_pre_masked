
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsColorSpaceSignature ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static
cmsBool FUNC_0(cmsColorSpaceSignature VAR_6, cmsColorSpaceSignature VAR_7)
{

    if (VAR_6 == VAR_7) return VAR_1;


    if ((VAR_6 == VAR_2) && (VAR_7 == VAR_3)) return VAR_1;
    if ((VAR_6 == VAR_3) && (VAR_7 == VAR_2)) return VAR_1;


    if ((VAR_6 == VAR_5) && (VAR_7 == VAR_4)) return VAR_1;
    if ((VAR_6 == VAR_4) && (VAR_7 == VAR_5)) return VAR_1;

    return VAR_0;
}
