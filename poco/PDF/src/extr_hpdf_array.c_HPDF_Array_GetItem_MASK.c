
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int error; int list; } ;
struct TYPE_6__ {int obj_class; } ;
struct TYPE_5__ {void* obj; } ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Proxy ;
typedef TYPE_2__ HPDF_Obj_Header ;
typedef TYPE_3__* HPDF_Array ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;

void*
FUNC_3 (HPDF_Array VAR_4,
                     HPDF_UINT VAR_5,
                     HPDF_UINT16 VAR_6)
{
    void *VAR_7;
    HPDF_Obj_Header *VAR_8;

    FUNC_1((" HPDF_Array_GetItem\n"));

    VAR_7 = FUNC_0 (VAR_4->list, VAR_5);

    if (!VAR_7) {
        FUNC_2 (VAR_4->error, VAR_0, 0);
        return ((void*)0);
    }

    VAR_8 = (HPDF_Obj_Header *)VAR_7;

    if (VAR_8->obj_class == VAR_3) {
        VAR_7 = ((HPDF_Proxy)VAR_7)->obj;
        VAR_8 = (HPDF_Obj_Header *)VAR_7;
    }

    if ((VAR_8->obj_class & VAR_2) != VAR_6) {
        FUNC_2 (VAR_4->error, VAR_1, 0);

        return ((void*)0);
    }

    return VAR_7;
}
