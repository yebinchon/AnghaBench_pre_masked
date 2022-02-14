
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

__attribute__((used)) static char *FUNC_2(MYOBJ *VAR_2)
{
    MYOBJ_EX_DATA* VAR_3 = FUNC_0(&VAR_2->ex_data, VAR_1);

    if (FUNC_1(VAR_3))
        return VAR_3->hello;

    VAR_2->st = VAR_0 = 0;
    return ((void*)0);
}
