
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ USHORT ;
typedef scalar_t__ ULONG ;
typedef int * PVOID ;
typedef int PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static
BOOLEAN
FUNC_6(PUCHAR VAR_3, USHORT VAR_4, PVOID VAR_5, ULONG VAR_6)
{
  USHORT VAR_7, VAR_8;

  do
  {
    VAR_7 = FUNC_5(VAR_3);
    if (FUNC_0(VAR_7))
    {
      VAR_8 = FUNC_2(VAR_7);
      VAR_7 = FUNC_3(VAR_7);
    }
    else
    {
      VAR_8 = FUNC_5(VAR_3) + (FUNC_5(VAR_3) << 8);
      VAR_7 = FUNC_1(VAR_7);
    }

    if (VAR_7 == VAR_4)
    {
      if (VAR_6 > VAR_8)
          VAR_6 = VAR_8;

      FUNC_4(VAR_3, VAR_5, VAR_6);

      return VAR_2;
    }
    else
    {
      FUNC_4(VAR_3, ((void*)0), VAR_6);
    }
  } while (VAR_7 != VAR_1);

  return VAR_0;
}
