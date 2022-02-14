
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud {int inp_buf_index; int inp_ctr; int const* inp_buf; int const* inp_sess; } ;



extern const uint8_t*
FUNC_0(const struct ud* VAR_0)
{
  return (VAR_0->inp_buf == ((void*)0)) ?
            VAR_0->inp_sess : VAR_0->inp_buf + (VAR_0->inp_buf_index - VAR_0->inp_ctr);
}
