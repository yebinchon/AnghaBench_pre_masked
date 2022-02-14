
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int mpz_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,unsigned int) ;
 int FUNC_1 (int*,unsigned int) ;
 int* FUNC_2 (unsigned int) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int
FUNC_4(uint32 VAR_1, mpz_t *VAR_2)
{
 unsigned VAR_3 = (VAR_1 + 7) / 8;
 int VAR_4 = VAR_1 & 7;
 uint8 *VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (!FUNC_1(VAR_5, VAR_3))
 {
  FUNC_3(VAR_5);
  return VAR_0;
 }


 if (VAR_4)
 {
  VAR_5[0] >>= 8 - VAR_4;
  VAR_5[0] |= 1 << (VAR_4 - 1);
 }
 else
  VAR_5[0] |= 1 << 7;

 FUNC_0(VAR_2, VAR_5, VAR_3);

 FUNC_3(VAR_5);

 return 0;
}
