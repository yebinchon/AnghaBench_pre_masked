
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int q; } ;
typedef TYPE_1__ record_pqueue ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ pitem ;
typedef int SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;

int FUNC_4(SSL *VAR_0, record_pqueue *VAR_1)
{
    pitem *VAR_2;

    VAR_2 = FUNC_3(VAR_1->q);
    if (VAR_2) {
        FUNC_1(VAR_0, VAR_2);

        FUNC_0(VAR_2->data);
        FUNC_2(VAR_2);

        return 1;
    }

    return 0;
}
