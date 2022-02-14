
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int empty ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ LFN_ENT ;


 int VAR_0 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_2, int VAR_3)
{
    int VAR_4;
    LFN_ENT VAR_5;





    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.id = VAR_0;

    for (VAR_4 = VAR_2; VAR_4 <= VAR_3; ++VAR_4) {
 FUNC_0(VAR_1[VAR_4], sizeof(LFN_ENT), &VAR_5);
    }
}
