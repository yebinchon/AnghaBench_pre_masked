
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mechswitch {int brand; int variant; int color; } ;



int FUNC_0(struct mechswitch VAR_0) {
  return ((VAR_0.brand << 9) | (VAR_0.variant << 5) | VAR_0.color);
}
