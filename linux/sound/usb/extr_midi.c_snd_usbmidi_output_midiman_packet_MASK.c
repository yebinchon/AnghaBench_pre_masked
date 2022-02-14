
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct urb {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct urb *VAR_1, uint8_t VAR_2,
           uint8_t VAR_3, uint8_t VAR_4,
           uint8_t VAR_5)
{

 uint8_t *VAR_6 =
  (uint8_t *)VAR_1->transfer_buffer + VAR_1->transfer_buffer_length;
 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_4;
 VAR_6[2] = VAR_5;
 VAR_6[3] = (VAR_2 & 0xf0) | VAR_0[VAR_2 & 0x0f];
 VAR_1->transfer_buffer_length += 4;
}
