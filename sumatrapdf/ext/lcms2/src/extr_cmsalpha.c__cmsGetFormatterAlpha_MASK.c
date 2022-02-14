
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int * cmsFormatterAlphaFn ;
typedef int cmsContext ;
struct TYPE_2__ {int member_5; int member_4; int const member_3; int const member_2; int const member_1; int member_0; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
__attribute__((used)) static
cmsFormatterAlphaFn FUNC_2(cmsContext VAR_1, cmsUInt32Number VAR_2, cmsUInt32Number VAR_3)
{
static cmsFormatterAlphaFn VAR_4[6][6] = {

                     { 157, 147, 146, 143, 144, 145 },
                     { 151, 160, 152, 148, 149, 150 },
                     { 156, 152, 160, 153,154, 155 },
                     { 130, 132, 131, 160, 128, 129 },
                     { 135, 137, 136, 133, 159, 134 },
                     { 140, 142, 141, 138, 139, 158 }};

        int VAR_5 = FUNC_0(VAR_2);
        int VAR_6 = FUNC_0(VAR_3);

        if (VAR_5 < 0 || VAR_6 < 0 || VAR_5 > 4 || VAR_6 > 4) {

               FUNC_1(VAR_1, VAR_0, "Unrecognized alpha channel width");
               return ((void*)0);
        }

        return VAR_4[VAR_5][VAR_6];
}
