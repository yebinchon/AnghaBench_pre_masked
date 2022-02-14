
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsresult ;
typedef scalar_t__ VARIANT_BOOL ;
struct TYPE_7__ {TYPE_1__* doc_obj; } ;
struct TYPE_6__ {int editor; } ;
struct TYPE_5__ {scalar_t__ usermode; TYPE_2__* nscontainer; } ;
typedef TYPE_3__ HTMLDocument ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(HTMLDocument *VAR_1, VARIANT_BOOL VAR_2)
{
    nsresult VAR_3;

    if(VAR_1->doc_obj->usermode != VAR_0 || !VAR_1->doc_obj->nscontainer || !VAR_1->doc_obj->nscontainer->editor)
        return;

    if(VAR_2) {
        VAR_3 = FUNC_2(VAR_1->doc_obj->nscontainer->editor, 1);
        if(FUNC_1(VAR_3))
            FUNC_0("IncrementModificationCount failed: %08x\n", VAR_3);
    }else {
        VAR_3 = FUNC_3(VAR_1->doc_obj->nscontainer->editor);
        if(FUNC_1(VAR_3))
            FUNC_0("ResetModificationCount failed: %08x\n", VAR_3);
    }
}
