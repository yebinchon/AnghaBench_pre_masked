
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int addr_count0; scalar_t__ small_page; } ;



__attribute__((used)) static void FUNC_0(struct ar934x_nfc *VAR_0, int VAR_1,
    int VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_6 = 0;

 if (VAR_1 == -1) {

  VAR_5 = (VAR_2 & 0xffff) << 16;
  VAR_6 = (VAR_2 >> 16) & 0xf;
 } else if (VAR_2 != -1) {



  if (VAR_0->small_page) {
   VAR_5 = VAR_1 & 0xff;
   VAR_5 |= (VAR_2 & 0xff) << 8;
   VAR_5 |= ((VAR_2 >> 8) & 0xff) << 16;
   VAR_5 |= ((VAR_2 >> 16) & 0xff) << 24;
  } else {
   VAR_5 = VAR_1 & 0x0FFF;
   VAR_5 |= (VAR_2 & 0xffff) << 16;

   if (VAR_0->addr_count0 > 4)
    VAR_6 = (VAR_2 >> 16) & 0xf;
  }
 }

 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
}
