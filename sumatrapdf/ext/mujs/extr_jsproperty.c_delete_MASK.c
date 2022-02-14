
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_8__ {char* name; int level; struct TYPE_8__* right; struct TYPE_8__* left; int value; int atts; } ;
typedef TYPE_1__ js_Property ;
typedef int js_Object ;


 int FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static js_Property *FUNC_4(js_State *VAR_1, js_Object *VAR_2, js_Property *VAR_3, const char *VAR_4)
{
 js_Property *VAR_5, *VAR_6;

 if (VAR_3 != &VAR_0) {
  int VAR_7 = FUNC_3(VAR_4, VAR_3->name);
  if (VAR_7 < 0) {
   VAR_3->left = FUNC_4(VAR_1, VAR_2, VAR_3->left, VAR_4);
  } else if (VAR_7 > 0) {
   VAR_3->right = FUNC_4(VAR_1, VAR_2, VAR_3->right, VAR_4);
  } else {
   if (VAR_3->left == &VAR_0) {
    VAR_5 = VAR_3;
    VAR_3 = VAR_3->right;
    FUNC_0(VAR_1, VAR_2, VAR_5);
   } else if (VAR_3->right == &VAR_0) {
    VAR_5 = VAR_3;
    VAR_3 = VAR_3->left;
    FUNC_0(VAR_1, VAR_2, VAR_5);
   } else {
    VAR_6 = VAR_3->right;
    while (VAR_6->left != &VAR_0)
     VAR_6 = VAR_6->left;
    VAR_3->name = VAR_6->name;
    VAR_3->atts = VAR_6->atts;
    VAR_3->value = VAR_6->value;
    VAR_3->right = FUNC_4(VAR_1, VAR_2, VAR_3->right, VAR_6->name);
   }
  }

  if (VAR_3->left->level < VAR_3->level - 1 ||
   VAR_3->right->level < VAR_3->level - 1)
  {
   if (VAR_3->right->level > --VAR_3->level)
    VAR_3->right->level = VAR_3->level;
   VAR_3 = FUNC_1(VAR_3);
   VAR_3->right = FUNC_1(VAR_3->right);
   VAR_3->right->right = FUNC_1(VAR_3->right->right);
   VAR_3 = FUNC_2(VAR_3);
   VAR_3->right = FUNC_2(VAR_3->right);
  }
 }
 return VAR_3;
}
