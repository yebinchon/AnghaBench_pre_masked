
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 int * FUNC_3 (int const*,unsigned int,int ) ;
 unsigned int FUNC_4 (int const) ;

__attribute__((used)) static int FUNC_5(u8 **VAR_4, u16 *VAR_5,
        const __be32 **VAR_6, unsigned int *VAR_7)
{
 const __be32 *VAR_8 = *VAR_6;
 unsigned int VAR_9 = *VAR_7, VAR_10, VAR_11;


 if (VAR_9 <= 4)
  return -VAR_1;

 FUNC_1(",{%x},%u", FUNC_4(VAR_8[0]), VAR_9);

 VAR_10 = FUNC_4(*VAR_8++);
 VAR_9 -= 4;
 if (VAR_10 > VAR_0)
  return -VAR_1;
 VAR_11 = (VAR_10 + 3) & ~3;
 if (VAR_11 > VAR_9)
  return -VAR_1;
 *VAR_5 = VAR_10;

 FUNC_0("ticket len %u", VAR_10);

 if (VAR_10 > 0) {
  *VAR_4 = FUNC_3(VAR_8, VAR_10, VAR_3);
  if (!*VAR_4)
   return -VAR_2;
  VAR_9 -= VAR_11;
  VAR_8 += VAR_11 >> 2;
 }

 *VAR_6 = VAR_8;
 *VAR_7 = VAR_9;
 FUNC_2(" = 0 [toklen=%u]", VAR_9);
 return 0;
}
