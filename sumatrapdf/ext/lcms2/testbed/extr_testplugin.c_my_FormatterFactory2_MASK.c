
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsFormatterDirection ;
struct TYPE_3__ {int Fmt16; int * member_0; } ;
typedef TYPE_1__ cmsFormatter ;
typedef int cmsContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

cmsFormatter FUNC_0(cmsContext VAR_4, cmsUInt32Number VAR_5,
                                  cmsFormatterDirection VAR_6,
                                  cmsUInt32Number VAR_7)
{
    cmsFormatter VAR_8 = { ((void*)0) };

    if ((VAR_5 == VAR_1) &&
        !(VAR_7 & VAR_0) &&
        (VAR_6 == VAR_2)) {
            VAR_8.Fmt16 = VAR_3;
    }
    return VAR_8;
}
