
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ PVOID ;
typedef int * PCHAR ;
typedef int CHAR ;


 int FUNC_0 (int ) ;

__attribute__((used)) static CHAR
FUNC_1(PVOID VAR_0, ULONG VAR_1)
{
    return (CHAR)((FUNC_0(*((PCHAR)VAR_0 + 2 * VAR_1)) << 4) +
                   FUNC_0(*((PCHAR)VAR_0 + 2 * VAR_1 + 1)));
}
