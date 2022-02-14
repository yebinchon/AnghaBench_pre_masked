
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ull; int si; int sll; int ul; int sl; } ;
struct TYPE_5__ {int type; TYPE_1__ val; } ;
typedef TYPE_2__ cval_t ;
__attribute__((used)) static void FUNC_0(cval_t *VAR_0)
{
 switch(VAR_0->type)
 {
 case 133: break;
 case 130: break;
 case 131: VAR_0->val.si = VAR_0->val.sl; break;
 case 128: VAR_0->val.si = VAR_0->val.ul; break;
 case 132: VAR_0->val.si = VAR_0->val.sll; break;
 case 129: VAR_0->val.si = VAR_0->val.ull; break;
 }
 VAR_0->type = 133;
}
