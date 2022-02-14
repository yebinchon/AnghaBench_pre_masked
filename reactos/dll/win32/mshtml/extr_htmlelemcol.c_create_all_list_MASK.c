
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
typedef int elem_vector_t ;
typedef scalar_t__ UINT32 ;
struct TYPE_5__ {int nsnode; } ;
typedef int HTMLDocumentNode ;
typedef TYPE_1__ HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int ,TYPE_1__**) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (int *,scalar_t__,int **) ;
 int FUNC_10 (int ,int **) ;

__attribute__((used)) static void FUNC_11(HTMLDocumentNode *VAR_1, HTMLDOMNode *VAR_2, elem_vector_t *VAR_3)
{
    nsIDOMNodeList *VAR_4;
    nsIDOMNode *VAR_5;
    UINT32 VAR_6 = 0, VAR_7;
    nsresult VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_10(VAR_2->nsnode, &VAR_4);
    if(FUNC_3(VAR_8)) {
        FUNC_0("GetChildNodes failed: %08x\n", VAR_8);
        return;
    }

    FUNC_8(VAR_4, &VAR_6);
    if(!VAR_6)
        return;

    for(VAR_7=0; VAR_7<VAR_6; VAR_7++) {
        VAR_8 = FUNC_9(VAR_4, VAR_7, &VAR_5);
        if(FUNC_3(VAR_8)) {
            FUNC_0("Item failed: %08x\n", VAR_8);
            continue;
        }

        if(FUNC_7(VAR_5)) {
            HTMLDOMNode *VAR_10;

            VAR_9 = FUNC_6(VAR_1, VAR_5, VAR_0, &VAR_10);
            if(FUNC_1(VAR_9)) {
                FUNC_2("get_node failed: %08x\n", VAR_9);
                continue;
            }

            FUNC_5(VAR_3, FUNC_4(VAR_10));
            FUNC_11(VAR_1, VAR_10, VAR_3);
        }
    }
}
