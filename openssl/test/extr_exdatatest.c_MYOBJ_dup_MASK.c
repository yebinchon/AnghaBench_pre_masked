
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ex_data; int st; } ;
typedef TYPE_1__ MYOBJ ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static MYOBJ *FUNC_2(MYOBJ *VAR_1)
{
    MYOBJ *VAR_2 = FUNC_1();

    VAR_2->st |= FUNC_0(VAR_0, &VAR_2->ex_data,
                                 &VAR_1->ex_data);
    return VAR_2;
}
