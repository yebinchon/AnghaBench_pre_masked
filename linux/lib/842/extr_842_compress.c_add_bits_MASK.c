
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sw842_param {int bit; int* out; int olen; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sw842_param*,int,int,int) ;
 int* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,unsigned char,unsigned long) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct sw842_param *VAR_3, u64 VAR_4, u8 VAR_5)
{
 int VAR_6 = VAR_3->bit, VAR_7 = VAR_6 + VAR_5, VAR_8 = FUNC_7(VAR_7, 8) - VAR_7;
 u64 VAR_9;
 u8 *VAR_10 = VAR_3->out;

 FUNC_5("add %u bits %lx\n", (unsigned char)VAR_5, (unsigned long)VAR_4);

 if (VAR_5 > 64)
  return -VAR_0;




 if (VAR_7 > 64)
  return FUNC_1(VAR_3, VAR_4, VAR_5, 32);
 else if (VAR_3->olen < 8 && VAR_7 > 32 && VAR_7 <= 56)
  return FUNC_1(VAR_3, VAR_4, VAR_5, 16);
 else if (VAR_3->olen < 4 && VAR_7 > 16 && VAR_7 <= 24)
  return FUNC_1(VAR_3, VAR_4, VAR_5, 8);

 if (FUNC_0(VAR_7, 8) > VAR_3->olen)
  return -VAR_1;

 VAR_9 = *VAR_10 & VAR_2[VAR_6];
 VAR_4 <<= VAR_8;

 if (VAR_7 <= 8)
  *VAR_10 = VAR_9 | VAR_4;
 else if (VAR_7 <= 16)
  FUNC_6(FUNC_2(VAR_9 << 8 | VAR_4), (__be16 *)VAR_10);
 else if (VAR_7 <= 24)
  FUNC_6(FUNC_3(VAR_9 << 24 | VAR_4 << 8), (__be32 *)VAR_10);
 else if (VAR_7 <= 32)
  FUNC_6(FUNC_3(VAR_9 << 24 | VAR_4), (__be32 *)VAR_10);
 else if (VAR_7 <= 40)
  FUNC_6(FUNC_4(VAR_9 << 56 | VAR_4 << 24), (__be64 *)VAR_10);
 else if (VAR_7 <= 48)
  FUNC_6(FUNC_4(VAR_9 << 56 | VAR_4 << 16), (__be64 *)VAR_10);
 else if (VAR_7 <= 56)
  FUNC_6(FUNC_4(VAR_9 << 56 | VAR_4 << 8), (__be64 *)VAR_10);
 else
  FUNC_6(FUNC_4(VAR_9 << 56 | VAR_4), (__be64 *)VAR_10);

 VAR_3->bit += VAR_5;

 if (VAR_3->bit > 7) {
  VAR_3->out += VAR_3->bit / 8;
  VAR_3->olen -= VAR_3->bit / 8;
  VAR_3->bit %= 8;
 }

 return 0;
}
