
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_4__ {int ref; } ;
typedef TYPE_1__* PCRegKeySecurity ;
typedef int LONG ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static __inline ULONG
FUNC_3(PCRegKeySecurity VAR_0)
{
    ULONG VAR_1;

    VAR_1 = (ULONG)FUNC_2((LONG*)&VAR_0->ref);
    if (VAR_1 == 0)
    {
        FUNC_1(FUNC_0(),
                 0,
                 VAR_0);
    }

    return VAR_1;
}
