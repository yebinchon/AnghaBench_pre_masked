
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct urb {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;



__attribute__((used)) static void FUNC_0(struct urb *VAR_0, uint8_t VAR_1,
            uint8_t VAR_2, uint8_t VAR_3,
            uint8_t VAR_4)
{

 uint8_t *VAR_5 =
  (uint8_t *)VAR_0->transfer_buffer + VAR_0->transfer_buffer_length;
 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_2;
 VAR_5[2] = VAR_3;
 VAR_5[3] = VAR_4;
 VAR_0->transfer_buffer_length += 4;
}
