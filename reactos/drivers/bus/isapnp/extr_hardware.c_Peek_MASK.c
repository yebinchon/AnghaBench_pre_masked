
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ***** USHORT ;
typedef int ***** ULONG ;
typedef scalar_t__ PVOID ;
typedef int PUCHAR ;


 int ***** FUNC_0 (int) ;

__attribute__((used)) static
VOID
FUNC_1(PUCHAR VAR_0, PVOID VAR_1, ULONG VAR_2)
{
  USHORT VAR_3, VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
    VAR_4 = FUNC_0(VAR_0);
    if (VAR_1)
       *((PUCHAR)VAR_1 + VAR_3) = *VAR_4;
  }
}
