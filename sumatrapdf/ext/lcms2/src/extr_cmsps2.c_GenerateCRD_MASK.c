
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_7__ {int UsedSpace; } ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 int FUNC_0 (int ,TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int,int) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int,int) ;
 int FUNC_3 (int ,TYPE_1__*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
cmsUInt32Number FUNC_5(cmsContext VAR_2,
                             cmsHPROFILE VAR_3,
                             cmsUInt32Number VAR_4, cmsUInt32Number VAR_5,
                             cmsIOHANDLER* VAR_6)
{
    cmsUInt32Number VAR_7;

    if (!(VAR_5 & VAR_0)) {

        FUNC_0(VAR_2, VAR_6, "Color Rendering Dictionary (CRD)", VAR_3);
    }



    if (FUNC_4(VAR_2, VAR_3) == VAR_1) {

        if (!FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5)) {
            return 0;
        }
    }
    else {



        if (!FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5)) {
            return 0;
        }
    }

    if (!(VAR_5 & VAR_0)) {

        FUNC_3(VAR_2, VAR_6, "%%%%EndResource\n");
        FUNC_3(VAR_2, VAR_6, "\n%% CRD End\n");
    }


    VAR_7 = VAR_6 ->UsedSpace;


    return VAR_7;
}
