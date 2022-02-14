
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; void** obj; int block_siz; int mmgr; int error; } ;
typedef int HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_List ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void**) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_5 (HPDF_List VAR_2,
         HPDF_UINT VAR_3)
{
    void **VAR_4;

    FUNC_4((" HPDF_List_Resize\n"));

    if (VAR_2->count >= VAR_3) {
        if (VAR_2->count == VAR_3)
            return VAR_1;
        else
            return VAR_0;
    }

    VAR_4 = (void **)FUNC_2 (VAR_2->mmgr, VAR_3 * sizeof(void *));

    if (!VAR_4)
        return FUNC_0 (VAR_2->error);

    if (VAR_2->obj)
        FUNC_3 ((HPDF_BYTE *)VAR_4, (HPDF_BYTE *)VAR_2->obj,
                VAR_2->block_siz * sizeof(void *));

    VAR_2->block_siz = VAR_3;
    if (VAR_2->obj)
        FUNC_1 (VAR_2->mmgr, VAR_2->obj);
    VAR_2->obj = VAR_4;

    return VAR_1;
}
