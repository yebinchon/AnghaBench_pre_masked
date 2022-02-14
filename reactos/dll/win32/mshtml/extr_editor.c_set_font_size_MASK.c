
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsISelection ;
typedef int nsIDOMRange ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMElement ;
typedef int nsAString ;
typedef scalar_t__ cpp_bool ;
struct TYPE_7__ {int nsdoc; } ;
struct TYPE_6__ {TYPE_5__* doc_node; } ;
typedef int LPCWSTR ;
typedef int LONG ;
typedef TYPE_1__ HTMLDocument ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_5__*,int ,int **) ;
 int VAR_1 ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,scalar_t__*) ;
 int FUNC_12 (int *,int ,int **) ;
 int FUNC_13 (int *,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int ,int *) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_19(HTMLDocument *VAR_3, LPCWSTR VAR_4)
{
    nsISelection *VAR_5;
    cpp_bool VAR_6;
    nsIDOMHTMLElement *VAR_7;
    nsIDOMRange *VAR_8;
    LONG VAR_9 = 0;
    nsAString VAR_10;
    nsAString VAR_11;

    if(!VAR_3->doc_node->nsdoc) {
        FUNC_1("NULL nsdoc\n");
        return;
    }

    VAR_5 = FUNC_3(VAR_3);
    if(!VAR_5)
        return;

    FUNC_13(VAR_5, &VAR_9);
    if(VAR_9 != 1) {
        FUNC_0("range_cnt %d not supprted\n", VAR_9);
        if(!VAR_9) {
            FUNC_14(VAR_5);
            return;
        }
    }

    FUNC_2(VAR_3->doc_node, VAR_1, &VAR_7);

    FUNC_5(&VAR_10, VAR_2);
    FUNC_5(&VAR_11, VAR_4);

    FUNC_7(VAR_7, &VAR_10, &VAR_11);
    FUNC_4(&VAR_11);

    FUNC_12(VAR_5, 0, &VAR_8);
    FUNC_11(VAR_5, &VAR_6);
    FUNC_15(VAR_5);

    FUNC_9(VAR_8, (nsIDOMNode*)VAR_7);

    if(VAR_6) {
        FUNC_10(VAR_5, (nsIDOMNode*)VAR_7, 0);
    }else {

        FUNC_17((nsIDOMElement*)VAR_7, VAR_1, &VAR_10);
        FUNC_16(VAR_5, (nsIDOMNode*)VAR_7);
    }

    FUNC_14(VAR_5);
    FUNC_8(VAR_8);
    FUNC_6(VAR_7);

    FUNC_4(&VAR_10);

    FUNC_18(VAR_3, VAR_0);
}
