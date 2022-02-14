
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1, size_t VAR_2, char *VAR_3, size_t VAR_4, char VAR_5)
{
 unsigned char *VAR_6, *VAR_7;
 unsigned short VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_6 = (unsigned char *)VAR_1;
 VAR_7 = (unsigned char *)VAR_1 + VAR_2;

 VAR_8 = 0;
 VAR_10 = 0;
 VAR_9 = (1 << VAR_5) - 1;

 while (VAR_4--) {
  if (VAR_10 < VAR_5) {
   if (VAR_6 < VAR_7) {
    VAR_8 |= *VAR_6++ << VAR_10;
    VAR_10 += 8;
   } else {

    FUNC_0(0);
    break;
   }
  }


  *VAR_3++ = VAR_0[VAR_8 & VAR_9];
  VAR_8 >>= VAR_5;
  VAR_10 -= VAR_5;
 }

 *VAR_3 = '\0';
}
