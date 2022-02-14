
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ull; int sll; int ul; int sl; int ui; int si; } ;
struct TYPE_5__ {int type; TYPE_1__ val; } ;
typedef TYPE_2__ cval_t ;
__attribute__((used)) static int FUNC_0(cval_t *VAR_0)
{
 switch(VAR_0->type)
 {
 case 133: return VAR_0->val.si != 0;
 case 130: return VAR_0->val.ui != 0;
 case 131: return VAR_0->val.sl != 0;
 case 128: return VAR_0->val.ul != 0;
 case 132: return VAR_0->val.sll != 0;
 case 129: return VAR_0->val.ull != 0;
 }
 return 0;
}
