
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ ERR_STRING_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(const ERR_STRING_DATA *VAR_2)
{
    FUNC_1(VAR_0);
    for (; VAR_2->error; VAR_2++)
        (void)FUNC_2(VAR_1,
                                       (ERR_STRING_DATA *)VAR_2);
    FUNC_0(VAR_0);
    return 1;
}
