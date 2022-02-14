
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
struct TYPE_7__ {int blue; int green; int red; } ;
typedef TYPE_1__ png_color ;
struct TYPE_9__ {int error_no; } ;
struct TYPE_8__ {TYPE_4__* error; int mmgr; } ;
typedef int HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef int HPDF_INT ;
typedef TYPE_2__* HPDF_Dict ;
typedef scalar_t__ HPDF_Binary ;
typedef int HPDF_BYTE ;
typedef scalar_t__ HPDF_Array ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_1__**,int*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_10 (HPDF_Dict VAR_3,
              png_structp VAR_4,
              png_infop VAR_5)
{
    HPDF_INT VAR_6 = 0;
    png_color *VAR_7 = ((void*)0);
    HPDF_BYTE *VAR_8;
    HPDF_BYTE *VAR_9;
    HPDF_UINT VAR_10;
    HPDF_Array VAR_11;




    if (FUNC_9(VAR_4, VAR_5, (png_color**)&VAR_7, &VAR_6) !=
            VAR_2)
        return FUNC_8 (VAR_3->error, VAR_1,
                    VAR_0);



    VAR_8 = FUNC_7 (VAR_3->mmgr, VAR_6 * 3);
    if (!VAR_8)
        return VAR_3->error->error_no;

    VAR_9 = VAR_8;
    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++, VAR_7++) {
        *VAR_9++ = VAR_7->red;
        *VAR_9++ = VAR_7->green;
        *VAR_9++ = VAR_7->blue;
    }

    VAR_11 = FUNC_3 (VAR_3->mmgr);
    if (VAR_11) {
        HPDF_Binary VAR_12;

        FUNC_5 (VAR_3, "ColorSpace", VAR_11);

        FUNC_1 (VAR_11, "Indexed");
        FUNC_1 (VAR_11, "DeviceRGB");
        FUNC_2 (VAR_11, VAR_6 - 1);

        VAR_12 = FUNC_4 (VAR_3->mmgr, VAR_8, VAR_6 * 3);
        if (VAR_12)
            FUNC_0 (VAR_11, VAR_12);
    }

    FUNC_6 (VAR_3->mmgr, VAR_8);

    return VAR_3->error->error_no;
}
