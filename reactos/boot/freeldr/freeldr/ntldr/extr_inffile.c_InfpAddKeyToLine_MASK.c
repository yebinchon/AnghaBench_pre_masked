
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Key; } ;
typedef int * PVOID ;
typedef TYPE_1__* PINFCACHELINE ;
typedef int PCHAR ;


 int * FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
PVOID
FUNC_3(
    PINFCACHELINE VAR_1,
    PCHAR VAR_2)
{
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    if (VAR_1->Key != ((void*)0))
        return ((void*)0);

    VAR_1->Key = FUNC_0(FUNC_2(VAR_2) + 1, VAR_0);
    if (VAR_1->Key == ((void*)0))
        return ((void*)0);

    FUNC_1(VAR_1->Key, VAR_2);

    return (PVOID)VAR_1->Key;
}
