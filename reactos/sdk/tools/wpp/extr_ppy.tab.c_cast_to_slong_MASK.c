
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ull; int sl; int sll; int ui; int si; } ;
struct TYPE_5__ {int type; TYPE_1__ val; } ;
typedef TYPE_2__ cval_t ;
__attribute__((used)) static void FUNC_0(cval_t *VAR_0)
{
 switch(VAR_0->type)
 {
 case 133: VAR_0->val.sl = VAR_0->val.si; break;
 case 130: VAR_0->val.sl = VAR_0->val.ui; break;
 case 131: break;
 case 128: break;
 case 132: VAR_0->val.sl = VAR_0->val.sll; break;
 case 129: VAR_0->val.sl = VAR_0->val.ull; break;
 }
 VAR_0->type = 131;
}
