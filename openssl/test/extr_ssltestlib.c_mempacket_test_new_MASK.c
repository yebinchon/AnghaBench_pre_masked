
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int droprec; scalar_t__ dropepoch; struct TYPE_7__* pkts; } ;
typedef TYPE_1__ MEMPACKET_TEST_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static int FUNC_6(BIO *VAR_0)
{
    MEMPACKET_TEST_CTX *VAR_1;

    if (!FUNC_4(VAR_1 = FUNC_3(sizeof(*VAR_1))))
        return 0;
    if (!FUNC_4(VAR_1->pkts = FUNC_5())) {
        FUNC_2(VAR_1);
        return 0;
    }
    VAR_1->dropepoch = 0;
    VAR_1->droprec = -1;
    FUNC_1(VAR_0, 1);
    FUNC_0(VAR_0, VAR_1);
    return 1;
}
