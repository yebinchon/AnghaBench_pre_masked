
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_4__ {int querybuf; int reply; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int clients; } ;


 unsigned long FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 unsigned long FUNC_4 (int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_5(unsigned long *VAR_1,
                          unsigned long *VAR_2) {
    client *VAR_3;
    listNode *VAR_4;
    listIter VAR_5;
    unsigned long VAR_6 = 0, VAR_7 = 0;

    FUNC_3(VAR_0.clients,&VAR_5);
    while ((VAR_4 = FUNC_1(&VAR_5)) != ((void*)0)) {
        VAR_3 = FUNC_2(VAR_4);

        if (FUNC_0(VAR_3->reply) > VAR_6) VAR_6 = FUNC_0(VAR_3->reply);
        if (FUNC_4(VAR_3->querybuf) > VAR_7) VAR_7 = FUNC_4(VAR_3->querybuf);
    }
    *VAR_1 = VAR_6;
    *VAR_2 = VAR_7;
}
