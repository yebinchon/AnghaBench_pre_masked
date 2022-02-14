
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef scalar_t__ cmsFormatterDirection ;
struct TYPE_3__ {int Fmt16; int * member_0; } ;
typedef TYPE_1__ cmsFormatter ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static
cmsFormatter FUNC_1(cmsContext VAR_6, cmsUInt32Number VAR_7,
                                  cmsFormatterDirection VAR_8,
                                  cmsUInt32Number VAR_9)
{
    cmsFormatter VAR_10 = { ((void*)0) };
    int VAR_11 = FUNC_0(VAR_7);
    int VAR_12 = (VAR_7 >> 23) & 1;

    if (VAR_12 && !(VAR_9 & VAR_0))
    {
        if (VAR_8 == VAR_5)
        {
            VAR_10.Fmt16 = (VAR_11 == 1) ? VAR_4 : VAR_3;
        }
        else
            VAR_10.Fmt16 = (VAR_11 == 1) ? VAR_2 : VAR_1;
    }

    return VAR_10;
}
