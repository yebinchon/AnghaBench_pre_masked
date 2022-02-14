
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int PUCHAR ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
USHORT
FUNC_3(PUCHAR VAR_0)
{
  USHORT VAR_1;

  for (VAR_1 = 0; VAR_1 < 20; VAR_1++)
  {
    if (FUNC_2(VAR_0) & 0x01)
      return FUNC_1(VAR_0);

    FUNC_0();
  }

  return 0xFF;
}
