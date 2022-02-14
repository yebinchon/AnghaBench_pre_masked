
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * argv; int db; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,long long) ;
 long long FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ,int ) ;
 long long FUNC_3 () ;

void FUNC_4(client *VAR_1, int VAR_2) {
    long long VAR_3, VAR_4 = -1;


    if (FUNC_2(VAR_1->db,VAR_1->argv[1],VAR_0) == ((void*)0)) {
        FUNC_0(VAR_1,-2);
        return;
    }


    VAR_3 = FUNC_1(VAR_1->db,VAR_1->argv[1]);
    if (VAR_3 != -1) {
        VAR_4 = VAR_3-FUNC_3();
        if (VAR_4 < 0) VAR_4 = 0;
    }
    if (VAR_4 == -1) {
        FUNC_0(VAR_1,-1);
    } else {
        FUNC_0(VAR_1,VAR_2 ? VAR_4 : ((VAR_4+500)/1000));
    }
}
