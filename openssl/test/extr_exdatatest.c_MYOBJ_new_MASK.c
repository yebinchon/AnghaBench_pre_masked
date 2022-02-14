
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int ex_data; int st; } ;
typedef TYPE_1__ MYOBJ ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static MYOBJ *FUNC_2(void)
{
    static int VAR_1 = 0;
    MYOBJ *VAR_2 = FUNC_1(sizeof(*VAR_2));

    VAR_2->id = ++VAR_1;
    VAR_2->st = FUNC_0(VAR_0, VAR_2, &VAR_2->ex_data);
    return VAR_2;
}
