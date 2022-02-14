
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shift; } ;
struct meta_value {int val; TYPE_1__ hdr; } ;
struct meta_obj {int value; } ;



__attribute__((used)) static void FUNC_0(struct meta_value *VAR_0,
      struct meta_obj *VAR_1)
{
 if (VAR_0->hdr.shift)
  VAR_1->value >>= VAR_0->hdr.shift;

 if (VAR_0->val)
  VAR_1->value &= VAR_0->val;
}
