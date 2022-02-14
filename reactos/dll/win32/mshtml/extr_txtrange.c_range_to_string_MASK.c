
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int len; scalar_t__* buf; scalar_t__ size; } ;
typedef TYPE_1__ wstrbuf_t ;
struct TYPE_18__ {scalar_t__ type; int off; int node; } ;
typedef TYPE_2__ rangepoint_t ;
typedef int nsIDOMNode ;
typedef int nsAString ;
typedef scalar_t__ cpp_bool ;
typedef scalar_t__ WCHAR ;
struct TYPE_19__ {int nsrange; } ;
typedef int PRUnichar ;
typedef TYPE_3__ HTMLTxtRange ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int ,int *,int const**) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__* FUNC_12 (scalar_t__*,char) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (TYPE_1__*,int *,int ) ;
 int FUNC_15 (TYPE_1__*,int const*,int) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_17(HTMLTxtRange *VAR_2, wstrbuf_t *VAR_3)
{
    rangepoint_t VAR_4, VAR_5;
    cpp_bool VAR_6;

    FUNC_9(VAR_2->nsrange, &VAR_6);
    if(VAR_6) {
        FUNC_16(VAR_3);
        VAR_3->buf = ((void*)0);
        VAR_3->size = 0;
        return;
    }

    FUNC_3(VAR_2, &VAR_4);
    FUNC_4(VAR_2, &VAR_5);

    do {
        if(VAR_5.type == VAR_0) {
            const PRUnichar *VAR_7;
            nsAString VAR_8;

            FUNC_5(VAR_5.node, &VAR_8, &VAR_7);

            if(VAR_5.node == VAR_4.node) {
                FUNC_15(VAR_3, VAR_7+VAR_5.off, VAR_4.off-VAR_5.off);
                FUNC_7(&VAR_8);
                break;
            }

            FUNC_15(VAR_3, VAR_7+VAR_5.off, FUNC_13(VAR_7+VAR_5.off));
            FUNC_7(&VAR_8);
        }else {
            nsIDOMNode *VAR_9;

            VAR_9 = FUNC_2(VAR_5.node, VAR_5.off);
            if(VAR_9) {
                FUNC_14(VAR_3, VAR_9, VAR_1);
                FUNC_8(VAR_9);
            }
        }

        if(!FUNC_11(&VAR_5)) {
            FUNC_0("End of document?\n");
            break;
        }
    }while(!FUNC_10(&VAR_5, &VAR_4));

    FUNC_1(&VAR_5);
    FUNC_1(&VAR_4);

    if(VAR_3->len) {
        WCHAR *VAR_10;

        for(VAR_10 = VAR_3->buf+VAR_3->len-1; VAR_10 >= VAR_3->buf && FUNC_6(*VAR_10); VAR_10--);

        VAR_10 = FUNC_12(VAR_10, '\r');
        if(VAR_10)
            *VAR_10 = 0;
    }
}
