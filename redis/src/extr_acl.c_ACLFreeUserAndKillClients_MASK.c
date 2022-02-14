
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int user ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_5__ {scalar_t__ authenticated; int * user; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int clients; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 TYPE_2__ VAR_1 ;

void FUNC_5(user *VAR_2) {
    listIter VAR_3;
    listNode *VAR_4;
    FUNC_4(VAR_1.clients,&VAR_3);
    while ((VAR_4 = FUNC_2(&VAR_3)) != ((void*)0)) {
        client *VAR_5 = FUNC_3(VAR_4);
        if (VAR_5->user == VAR_2) {






            VAR_5->user = VAR_0;
            VAR_5->authenticated = 0;
            FUNC_1(VAR_5);
        }
    }
    FUNC_0(VAR_2);
}
