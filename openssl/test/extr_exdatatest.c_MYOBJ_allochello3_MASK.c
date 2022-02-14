
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ st; int ex_data; } ;
struct TYPE_8__ {char* hello; } ;
typedef TYPE_1__ MYOBJ_EX_DATA ;
typedef TYPE_2__ MYOBJ ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(MYOBJ *VAR_3, char *VAR_4)
{
    MYOBJ_EX_DATA* VAR_5 = ((void*)0);

    if (FUNC_3(VAR_5 = FUNC_1(&VAR_3->ex_data, VAR_2))
        && FUNC_4(FUNC_0(VAR_0, VAR_3,
                                          &VAR_3->ex_data, VAR_2))
        && FUNC_2(VAR_5 = FUNC_1(&VAR_3->ex_data, VAR_2)))
        VAR_5->hello = VAR_4;
    else
        VAR_3->st = VAR_1 = 0;
}
