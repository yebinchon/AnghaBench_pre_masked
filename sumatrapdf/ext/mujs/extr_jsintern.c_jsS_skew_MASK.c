
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ level; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ js_StringNode ;



__attribute__((used)) static js_StringNode *FUNC_0(js_StringNode *VAR_0)
{
 if (VAR_0->left->level == VAR_0->level) {
  js_StringNode *VAR_1 = VAR_0;
  VAR_0 = VAR_0->left;
  VAR_1->left = VAR_0->right;
  VAR_0->right = VAR_1;
 }
 return VAR_0;
}
