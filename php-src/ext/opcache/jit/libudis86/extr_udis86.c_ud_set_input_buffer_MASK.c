
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud {size_t inp_buf_size; scalar_t__ inp_buf_index; int const* inp_buf; } ;


 int FUNC_0 (struct ud*) ;

void
FUNC_1(register struct ud* VAR_0, const uint8_t* VAR_1, size_t VAR_2)
{
  FUNC_0(VAR_0);
  VAR_0->inp_buf = VAR_1;
  VAR_0->inp_buf_size = VAR_2;
  VAR_0->inp_buf_index = 0;
}
