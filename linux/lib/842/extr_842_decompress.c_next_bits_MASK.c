
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sw842_param {int* in; int bit; int ilen; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sw842_param*,int*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct sw842_param *VAR_2, u64 *VAR_3, u8 VAR_4)
{
 u8 *VAR_5 = VAR_2->in, VAR_6 = VAR_2->bit, VAR_7 = VAR_6 + VAR_4;

 if (VAR_4 > 64) {
  FUNC_7("next_bits invalid n %u\n", VAR_4);
  return -VAR_0;
 }




 if (VAR_7 > 64)
  return FUNC_2(VAR_2, VAR_3, VAR_4, 32);
 else if (VAR_2->ilen < 8 && VAR_7 > 32 && VAR_7 <= 56)
  return FUNC_2(VAR_2, VAR_3, VAR_4, 16);
 else if (VAR_2->ilen < 4 && VAR_7 > 16 && VAR_7 <= 24)
  return FUNC_2(VAR_2, VAR_3, VAR_4, 8);

 if (FUNC_0(VAR_7, 8) > VAR_2->ilen)
  return -VAR_1;

 if (VAR_7 <= 8)
  *VAR_3 = *VAR_5 >> (8 - VAR_7);
 else if (VAR_7 <= 16)
  *VAR_3 = FUNC_3(FUNC_6((__be16 *)VAR_5)) >> (16 - VAR_7);
 else if (VAR_7 <= 32)
  *VAR_3 = FUNC_4(FUNC_6((__be32 *)VAR_5)) >> (32 - VAR_7);
 else
  *VAR_3 = FUNC_5(FUNC_6((__be64 *)VAR_5)) >> (64 - VAR_7);

 *VAR_3 &= FUNC_1(VAR_4 - 1, 0);

 VAR_2->bit += VAR_4;

 if (VAR_2->bit > 7) {
  VAR_2->in += VAR_2->bit / 8;
  VAR_2->ilen -= VAR_2->bit / 8;
  VAR_2->bit %= 8;
 }

 return 0;
}
