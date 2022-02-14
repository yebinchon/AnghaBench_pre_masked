
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_nodes; TYPE_1__** b; } ;
struct TYPE_4__ {int data; struct TYPE_4__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef int (* OPENSSL_LH_DOALL_FUNCARG ) (int ,void*) ;
typedef int (* OPENSSL_LH_DOALL_FUNC ) (int ) ;
typedef TYPE_2__ OPENSSL_LHASH ;



__attribute__((used)) static void FUNC_0(OPENSSL_LHASH *VAR_0, int VAR_1,
                          OPENSSL_LH_DOALL_FUNC VAR_2,
                          OPENSSL_LH_DOALL_FUNCARG VAR_3, void *VAR_4)
{
    int VAR_5;
    OPENSSL_LH_NODE *VAR_6, *VAR_7;

    if (VAR_0 == ((void*)0))
        return;





    for (VAR_5 = VAR_0->num_nodes - 1; VAR_5 >= 0; VAR_5--) {
        VAR_6 = VAR_0->b[VAR_5];
        while (VAR_6 != ((void*)0)) {
            VAR_7 = VAR_6->next;
            if (VAR_1)
                VAR_3(VAR_6->data, VAR_4);
            else
                VAR_2(VAR_6->data);
            VAR_6 = VAR_7;
        }
    }
}
