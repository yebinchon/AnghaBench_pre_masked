
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_8__ {int atts; struct TYPE_8__* left; int name; struct TYPE_8__* right; } ;
typedef TYPE_1__ js_Property ;
typedef int js_Object ;
struct TYPE_9__ {struct TYPE_9__* next; int name; } ;
typedef TYPE_2__ js_Iterator ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static js_Iterator *FUNC_2(js_State *VAR_2, js_Iterator *VAR_3, js_Property *VAR_4, js_Object *VAR_5)
{
 if (VAR_4->right != &VAR_1)
  VAR_3 = FUNC_2(VAR_2, VAR_3, VAR_4->right, VAR_5);
 if (!(VAR_4->atts & VAR_0)) {
  if (!VAR_5 || !FUNC_0(VAR_2, VAR_5, VAR_4->name)) {
   js_Iterator *VAR_6 = FUNC_1(VAR_2, sizeof *VAR_6);
   VAR_6->name = VAR_4->name;
   VAR_6->next = VAR_3;
   VAR_3 = VAR_6;
  }
 }
 if (VAR_4->left != &VAR_1)
  VAR_3 = FUNC_2(VAR_2, VAR_3, VAR_4->left, VAR_5);
 return VAR_3;
}
