
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int bits_in_buf; int bit_buf; int len_compressed_output; int out_arg; int (* put_bytes ) (int ,int,int*) ;} ;
typedef TYPE_1__ lzx_data ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int*) ;

__attribute__((used)) static void FUNC_2(lzx_data *VAR_1, int VAR_2, uint32_t VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6;
  uint16_t VAR_7;




  VAR_4 = VAR_1->bits_in_buf;
  while ((VAR_4 + VAR_2) >= 16) {
    VAR_5 = 16 - VAR_4;
    VAR_6 = VAR_2 - VAR_5;
    if (VAR_5 == 16) {
      VAR_1->bit_buf = (VAR_3>>VAR_6) & 0xFFFF;
    }
    else {
      VAR_7 = (1U << VAR_5) - 1;
      VAR_1->bit_buf <<= VAR_5;
      VAR_1->bit_buf |= (VAR_3>>VAR_6) & VAR_7;
    }






    VAR_1->put_bytes(VAR_1->out_arg, sizeof(VAR_1->bit_buf), &VAR_1->bit_buf);
    VAR_1->len_compressed_output += sizeof(VAR_1->bit_buf);
    VAR_1->bit_buf = 0;
    VAR_2 -= VAR_5;
    VAR_4 = 0;
  }


  VAR_5 = VAR_2;
  VAR_7 = (1U << VAR_5) - 1;
  VAR_1->bit_buf <<= VAR_5;
  VAR_1->bit_buf |= VAR_3 & VAR_7;
  VAR_4 += VAR_2;




  VAR_1->bits_in_buf = VAR_4;
}
