
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (int *,int const*,int) ;

int
FUNC_1(wchar_t *VAR_0, const __u8 *VAR_1, int VAR_2)
{
 __u16 *VAR_3;
 const __u8 *VAR_4;
 int VAR_5;

 VAR_3 = VAR_0;
 VAR_4 = VAR_1;
 while (*VAR_4 && VAR_2 > 0) {
  if (*VAR_4 & 0x80) {
   VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
   if (VAR_5 == -1) {

    VAR_4++;
    VAR_2--;
   } else {
    VAR_3 += VAR_5;
    VAR_4 += VAR_5;
    VAR_2 -= VAR_5;
   }
  } else {
   *VAR_3++ = *VAR_4++;
  }
 }
 return (int)(VAR_3 - VAR_0);
}
