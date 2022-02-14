
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long wchar_t ;
struct utf8_table {long lmask; int shift; long cval; scalar_t__ cmask; } ;
typedef int __u8 ;


 struct utf8_table* VAR_0 ;

int
FUNC_0(__u8 *VAR_1, wchar_t VAR_2, int VAR_3)
{
 long VAR_4;
 int VAR_5, VAR_6;
 struct utf8_table *VAR_7;

 if (VAR_1 == 0)
  return 0;

 VAR_4 = VAR_2;
 VAR_6 = 0;
 for (VAR_7 = VAR_0; VAR_7->cmask && VAR_3; VAR_7++, VAR_3--) {
  VAR_6++;
  if (VAR_4 <= VAR_7->lmask) {
   VAR_5 = VAR_7->shift;
   *VAR_1 = (__u8)(VAR_7->cval | (VAR_4 >> VAR_5));
   while (VAR_5 > 0) {
    VAR_5 -= 6;
    VAR_1++;
    *VAR_1 = 0x80 | (__u8)((VAR_4 >> VAR_5) & 0x3F);
   }
   return VAR_6;
  }
 }
 return -1;
}
