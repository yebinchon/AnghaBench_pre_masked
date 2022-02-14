
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CPpmd8 ;
typedef void Byte ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,void*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(CPpmd8 *VAR_0, void *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
  unsigned VAR_4, VAR_5 = FUNC_0(VAR_2) - FUNC_0(VAR_3);
  VAR_1 = (Byte *)VAR_1 + FUNC_2(FUNC_0(VAR_3));
  if (FUNC_0(VAR_4 = FUNC_3(VAR_5)) != VAR_5)
  {
    unsigned VAR_6 = FUNC_0(--VAR_4);
    FUNC_1(VAR_0, ((Byte *)VAR_1) + FUNC_2(VAR_6), VAR_5 - VAR_6 - 1);
  }
  FUNC_1(VAR_0, VAR_1, VAR_4);
}
