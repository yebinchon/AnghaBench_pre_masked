
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,int) ;

void FUNC_2(const BYTE* VAR_0, ULONG VAR_1, WORD* VAR_2)
{
  WORD VAR_3;

  FUNC_1(&VAR_3, VAR_0+VAR_1, sizeof(WORD));
  *VAR_2 = FUNC_0(VAR_3);
}
