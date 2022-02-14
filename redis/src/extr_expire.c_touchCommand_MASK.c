
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argc; int * argv; int db; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (int ,int ) ;

void FUNC_2(client *VAR_0) {
    int VAR_1 = 0;
    for (int VAR_2 = 1; VAR_2 < VAR_0->argc; VAR_2++)
        if (FUNC_1(VAR_0->db,VAR_0->argv[VAR_2]) != ((void*)0)) VAR_1++;
    FUNC_0(VAR_0,VAR_1);
}
