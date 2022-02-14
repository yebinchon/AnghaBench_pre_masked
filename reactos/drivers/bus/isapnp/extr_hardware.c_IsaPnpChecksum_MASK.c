
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int* PUCHAR ;
typedef scalar_t__ PISAPNP_IDENTIFIER ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static
USHORT
FUNC_1(PISAPNP_IDENTIFIER VAR_1)
{
  USHORT VAR_2,VAR_3, VAR_4, VAR_5;

  VAR_4 = VAR_0;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  {
    VAR_5 = *(((PUCHAR)VAR_1) + VAR_2);
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    {
      VAR_4 = FUNC_0(VAR_4, VAR_5);
      VAR_5 >>= 1;
    }
  }

  return VAR_4;
}
