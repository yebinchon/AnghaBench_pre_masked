
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st; int ex_data; } ;
typedef TYPE_1__ MYOBJ ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(MYOBJ *VAR_2, char *VAR_3)
{
    VAR_2->st = FUNC_0(&VAR_2->ex_data, VAR_1, VAR_3);
    if (!FUNC_1(VAR_2->st, 1))
        VAR_0 = 0;
}
