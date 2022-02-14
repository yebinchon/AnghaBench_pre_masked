
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
typedef int listNode ;
typedef int listIter ;
struct TYPE_2__ {int clients; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 TYPE_1__ VAR_2 ;

sds FUNC_9(int VAR_3) {
    listNode *VAR_4;
    listIter VAR_5;
    VAR_1 *VAR_1;
    sds VAR_6 = FUNC_8(VAR_0,200*FUNC_2(VAR_2.clients));
    FUNC_7(VAR_6);
    FUNC_5(VAR_2.clients,&VAR_5);
    while ((VAR_4 = FUNC_3(&VAR_5)) != ((void*)0)) {
        VAR_1 = FUNC_4(VAR_4);
        if (VAR_3 != -1 && FUNC_1(VAR_1) != VAR_3) continue;
        VAR_6 = FUNC_0(VAR_6,VAR_1);
        VAR_6 = FUNC_6(VAR_6,"\n",1);
    }
    return VAR_6;
}
