
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int PVOID ;
typedef int * PUCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;

VOID
FUNC_1(PVOID VAR_5)
{
  PUCHAR VAR_6 = (PUCHAR) VAR_5;
  ULONG VAR_7, VAR_8;

  for (VAR_8 = 0; VAR_8 < (VAR_2 - 2 * VAR_4) / VAR_0; VAR_8++)
    {
      for (VAR_7 = 0; VAR_7 < VAR_3 / VAR_1; VAR_7++)
        {
          FUNC_0(VAR_6[0], VAR_6[1], VAR_7, VAR_8);
          VAR_6 += 2;
        }
    }
}
