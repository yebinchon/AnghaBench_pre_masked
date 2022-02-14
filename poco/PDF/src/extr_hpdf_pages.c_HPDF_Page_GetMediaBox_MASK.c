
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int top; int right; int bottom; int left; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_9__ {int value; } ;
typedef TYPE_1__* HPDF_Real ;
typedef TYPE_2__* HPDF_Page ;
typedef TYPE_3__ HPDF_Box ;
typedef scalar_t__ HPDF_Array ;


 TYPE_1__* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;

HPDF_Box
FUNC_6 (HPDF_Page VAR_3)
{
    HPDF_Box VAR_4 = {0, 0, 0, 0};

    FUNC_2((" HPDF_Page_GetMediaBox\n"));

    if (FUNC_4 (VAR_3)) {
        HPDF_Array VAR_5 = FUNC_3 (VAR_3, "MediaBox",
                        VAR_0);

        if (VAR_5) {
            HPDF_Real VAR_6;

            VAR_6 = FUNC_0 (VAR_5, 0, VAR_1);
            if (VAR_6)
                VAR_4.left = VAR_6->value;

            VAR_6 = FUNC_0 (VAR_5, 1, VAR_1);
            if (VAR_6)
                VAR_4.bottom = VAR_6->value;

            VAR_6 = FUNC_0 (VAR_5, 2, VAR_1);
            if (VAR_6)
                VAR_4.right = VAR_6->value;

            VAR_6 = FUNC_0 (VAR_5, 3, VAR_1);
            if (VAR_6)
                VAR_4.top = VAR_6->value;

            FUNC_1 (VAR_3->error);
        } else FUNC_5 (VAR_3->error, VAR_2, 0);
    }

    return VAR_4;
}
