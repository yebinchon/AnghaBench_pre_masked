
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int right; int bottom; int left; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_1__ HPDF_Box ;
typedef int * HPDF_Array ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;

HPDF_Array
FUNC_5 (HPDF_MMgr VAR_1,
                     HPDF_Box VAR_2)
{
    HPDF_Array VAR_3;
    HPDF_STATUS VAR_4 = VAR_0;

    FUNC_3((" HPDF_Box_Array_New\n"));

    VAR_3 = FUNC_2 (VAR_1);
    if (!VAR_3)
        return ((void*)0);

    VAR_4 += FUNC_0 (VAR_3, FUNC_4 (VAR_1, VAR_2.left));
    VAR_4 += FUNC_0 (VAR_3, FUNC_4 (VAR_1, VAR_2.bottom));
    VAR_4 += FUNC_0 (VAR_3, FUNC_4 (VAR_1, VAR_2.right));
    VAR_4 += FUNC_0 (VAR_3, FUNC_4 (VAR_1, VAR_2.top));

    if (VAR_4 != VAR_0) {
        FUNC_1 (VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
