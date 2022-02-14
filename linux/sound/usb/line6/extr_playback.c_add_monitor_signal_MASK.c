
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;
typedef int __le16 ;


 short FUNC_0 (int,int,int) ;
 int FUNC_1 (short) ;
 short FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0, unsigned char *VAR_1,
          int VAR_2, int VAR_3)
{
 if (VAR_2 == 0)
  return;

 if (VAR_3 == 4) {
  __le16 *VAR_4, *VAR_5, *VAR_6;

  VAR_4 = (__le16 *)VAR_1;
  VAR_5 = (__le16 *)VAR_0->transfer_buffer;
  VAR_6 = VAR_5 + VAR_0->transfer_buffer_length / sizeof(*VAR_5);

  for (; VAR_5 < VAR_6; ++VAR_4, ++VAR_5) {
   short VAR_7 = FUNC_2(*VAR_5);
   short VAR_8 = FUNC_2(*VAR_4);
   int VAR_9 = VAR_7 + ((VAR_8 * VAR_2) >> 8);
   VAR_7 = FUNC_0(VAR_9, -0x8000, 0x7fff);
   *VAR_5 = FUNC_1(VAR_7);
  }
 }





}
