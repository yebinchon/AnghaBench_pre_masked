
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int num_nodes; TYPE_1__** b; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int,...) ;

void FUNC_1(const OPENSSL_LHASH *VAR_0, BIO *VAR_1)
{
    OPENSSL_LH_NODE *VAR_2;
    unsigned long VAR_3;
    unsigned int VAR_4;
    unsigned long VAR_5 = 0, VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_0->num_nodes; VAR_4++) {
        for (VAR_2 = VAR_0->b[VAR_4], VAR_3 = 0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
            VAR_3++;
        if (VAR_3 != 0) {
            VAR_6++;
            VAR_5 += VAR_3;
        }
    }
    FUNC_0(VAR_1, "%lu nodes used out of %u\n", VAR_6, VAR_0->num_nodes);
    FUNC_0(VAR_1, "%lu items\n", VAR_5);
    if (VAR_6 == 0)
        return;
    FUNC_0(VAR_1, "load %d.%02d  actual load %d.%02d\n",
               (int)(VAR_5 / VAR_0->num_nodes),
               (int)((VAR_5 % VAR_0->num_nodes) * 100 / VAR_0->num_nodes),
               (int)(VAR_5 / VAR_6), (int)((VAR_5 % VAR_6) * 100 / VAR_6));
}
