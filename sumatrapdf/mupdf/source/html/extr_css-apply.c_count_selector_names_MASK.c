
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; struct TYPE_3__* right; struct TYPE_3__* left; int cond; } ;
typedef TYPE_1__ fz_css_selector ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(fz_css_selector *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->cond);
 if (VAR_0->left && VAR_0->right)
 {
  VAR_1 += FUNC_1(VAR_0->left);
  VAR_1 += FUNC_1(VAR_0->right);
 }
 else if (VAR_0->name)
 {
  VAR_1 ++;
 }
 return VAR_1;
}
