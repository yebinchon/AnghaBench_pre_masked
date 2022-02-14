
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_address {char* x25_addr; } ;


 unsigned int FUNC_0 (char*) ;

int FUNC_1(unsigned char *VAR_0, struct x25_address *VAR_1,
    struct x25_address *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = VAR_1->x25_addr;
 VAR_6 = VAR_2->x25_addr;

 VAR_3 = FUNC_0(VAR_5);
 VAR_4 = FUNC_0(VAR_6);

 *VAR_0++ = (VAR_4 << 4) | (VAR_3 << 0);

 for (VAR_7 = 0; VAR_7 < (VAR_3 + VAR_4); VAR_7++) {
  if (VAR_7 < VAR_3) {
   if (VAR_7 % 2 != 0) {
    *VAR_0 |= (*VAR_5++ - '0') << 0;
    VAR_0++;
   } else {
    *VAR_0 = 0x00;
    *VAR_0 |= (*VAR_5++ - '0') << 4;
   }
  } else {
   if (VAR_7 % 2 != 0) {
    *VAR_0 |= (*VAR_6++ - '0') << 0;
    VAR_0++;
   } else {
    *VAR_0 = 0x00;
    *VAR_0 |= (*VAR_6++ - '0') << 4;
   }
  }
 }

 return 1 + (VAR_3 + VAR_4 + 1) / 2;
}
