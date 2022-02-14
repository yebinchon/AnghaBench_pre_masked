
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;
typedef int __le16 ;


 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (short) ;
 short FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0, int VAR_1[],
     int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1[0] == 256 && VAR_1[1] == 256)
  return;

 if (VAR_2 == 4) {
  __le16 *VAR_4, *VAR_5;

  VAR_4 = (__le16 *)VAR_0->transfer_buffer;
  VAR_5 = VAR_4 + VAR_0->transfer_buffer_length / sizeof(*VAR_4);

  for (; VAR_4 < VAR_5; ++VAR_4) {
   short VAR_6 = FUNC_2(*VAR_4);
   int VAR_7 = (VAR_6 * VAR_1[VAR_3 & 1]) >> 8;
   VAR_6 = FUNC_0(VAR_7, -0x8000, 0x7fff);
   *VAR_4 = FUNC_1(VAR_6);
   ++VAR_3;
  }
 } else if (VAR_2 == 6) {
  unsigned char *VAR_8, *VAR_9;

  VAR_8 = (unsigned char *)VAR_0->transfer_buffer;
  VAR_9 = VAR_8 + VAR_0->transfer_buffer_length;

  for (; VAR_8 < VAR_9; VAR_8 += 3) {
   int VAR_10;

   VAR_10 = VAR_8[0] + (VAR_8[1] << 8) + ((signed char)VAR_8[2] << 16);
   VAR_10 = (VAR_10 * VAR_1[VAR_3 & 1]) >> 8;
   VAR_10 = FUNC_0(VAR_10, -0x800000, 0x7fffff);
   VAR_8[0] = VAR_10;
   VAR_8[1] = VAR_10 >> 8;
   VAR_8[2] = VAR_10 >> 16;
   ++VAR_3;
  }
 }
}
