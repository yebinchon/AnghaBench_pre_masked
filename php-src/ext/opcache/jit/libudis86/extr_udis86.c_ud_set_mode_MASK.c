
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud {int dis_mode; } ;



extern void
FUNC_0(struct ud* VAR_0, uint8_t VAR_1)
{
  switch(VAR_1) {
  case 16:
  case 32:
  case 64: VAR_0->dis_mode = VAR_1 ; return;
  default: VAR_0->dis_mode = 16; return;
  }
}
