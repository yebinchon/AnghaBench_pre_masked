
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* list; } ;
struct TYPE_6__ {int obj_class; } ;
struct TYPE_5__ {scalar_t__ count; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__ HPDF_Obj_Header ;
typedef int HPDF_Dict ;
typedef TYPE_3__* HPDF_Array ;


 void* FUNC_0 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static HPDF_UINT
FUNC_3 (HPDF_Dict VAR_4)
{
    HPDF_UINT VAR_5;
    HPDF_UINT VAR_6 = 0;
    HPDF_Array VAR_7 = (HPDF_Array)FUNC_1 (VAR_4, "Kids",
            VAR_0);

    FUNC_2((" GetPageCount\n"));

    if (!VAR_7)
        return 0;

    for (VAR_5 = 0; VAR_5 < VAR_7->list->count; VAR_5++) {
        void *VAR_8 = FUNC_0 (VAR_7, VAR_5, VAR_1);
        HPDF_Obj_Header *VAR_9 = (HPDF_Obj_Header *)VAR_8;

        if (VAR_9->obj_class == (VAR_1 | VAR_3))
            VAR_6 += FUNC_3 ((HPDF_Dict)VAR_8);
        else if (VAR_9->obj_class == (VAR_1 | VAR_2))
            VAR_6 += 1;
    }

    return VAR_6;
}
