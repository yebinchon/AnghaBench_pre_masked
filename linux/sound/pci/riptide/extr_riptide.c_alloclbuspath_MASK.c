
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdif {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (struct cmdif*,unsigned char,unsigned char) ;
 unsigned char VAR_7 ;
 unsigned char** VAR_8 ;
 int FUNC_1 (char*,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_2(struct cmdif *VAR_9, unsigned char VAR_10,
       unsigned char *VAR_11, unsigned char *VAR_12, unsigned char *VAR_13)
{
 while (*VAR_11 != 0xff) {
  unsigned char VAR_14, VAR_15;

  VAR_14 = *VAR_11 & (~VAR_7);
  if (VAR_14 != VAR_1) {
   FUNC_1("alloc path 0x%x->0x%x\n", VAR_10, VAR_14);
   FUNC_0(VAR_9, VAR_10, VAR_14);
   VAR_10 = VAR_8[VAR_14][0];
   VAR_15 = VAR_8[VAR_14][1];
   if (VAR_15 == VAR_2) {
    if (VAR_12)
     *VAR_12 = VAR_14 - VAR_0;
   }
   if (VAR_15 == VAR_4 ||
       VAR_15 == VAR_3 ||
       VAR_15 == VAR_6 ||
       VAR_15 == VAR_5) {
    if (VAR_13) {
     if (VAR_13[0] != 0xff)
      VAR_13[1] = VAR_14;
     else
      VAR_13[0] = VAR_14;
    }
   }
  }
  if (*VAR_11++ & VAR_7) {
   unsigned char *VAR_16 = VAR_11;

   while (*VAR_16 != 0xff)
    VAR_16++;
   FUNC_2(VAR_9, VAR_10 + 1, ++VAR_16, VAR_12, VAR_13);
  }
 }
}
