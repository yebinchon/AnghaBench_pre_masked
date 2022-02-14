
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int depth; int * indexes; } ;
struct TYPE_7__ {TYPE_4__* head; } ;
struct TYPE_11__ {unsigned int used; TYPE_3__ stack; TYPE_1__ pool; } ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_2__* vals; } ;
struct TYPE_8__ {int dmax; } ;
typedef TYPE_3__ BN_STACK ;
typedef TYPE_4__ BN_POOL_ITEM ;
typedef TYPE_5__ BN_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1(BIO *VAR_1, const char *VAR_2, BN_CTX *VAR_3)
{
    unsigned int VAR_4 = 0, VAR_5 = 0;
    BN_POOL_ITEM *VAR_6 = VAR_3->pool.head;
    BN_STACK *VAR_7 = &VAR_3->stack;

    FUNC_0(VAR_1, "%s\n", VAR_2);
    FUNC_0(VAR_1, "  (%16p): ", (void*)VAR_3);
    while (VAR_4 < VAR_3->used) {
        FUNC_0(VAR_1, "%03x ",
                   VAR_6->vals[VAR_4++ % VAR_0].dmax);
        if (!(VAR_4 % VAR_0))
            VAR_6 = VAR_6->next;
    }
    FUNC_0(VAR_1, "\n");
    VAR_4 = 0;
    FUNC_0(VAR_1, "   %16s : ", "");
    while (VAR_5 < VAR_7->depth) {
        while (VAR_4++ < VAR_7->indexes[VAR_5])
            FUNC_0(VAR_1, "    ");
        FUNC_0(VAR_1, "^^^ ");
        VAR_4++;
        VAR_5++;
    }
    FUNC_0(VAR_1, "\n");
}
