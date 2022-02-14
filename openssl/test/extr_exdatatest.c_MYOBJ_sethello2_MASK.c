
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ st; int ex_data; } ;
struct TYPE_6__ {char* hello; } ;
typedef TYPE_1__ MYOBJ_EX_DATA ;
typedef TYPE_2__ MYOBJ ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(MYOBJ *VAR_2, char *VAR_3)
{
    MYOBJ_EX_DATA* VAR_4 = FUNC_0(&VAR_2->ex_data, VAR_1);

    if (FUNC_1(VAR_4))
        VAR_4->hello = VAR_3;
    else
        VAR_2->st = VAR_0 = 0;
}
