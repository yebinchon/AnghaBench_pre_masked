
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {int object; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;
struct TYPE_7__ {int atts; struct TYPE_7__* right; scalar_t__ level; TYPE_2__ value; int name; struct TYPE_7__* left; } ;
typedef TYPE_3__ js_Property ;
typedef int js_Object ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(js_State *VAR_2, js_Object *VAR_3, js_Property *VAR_4)
{
 if (VAR_4->left->level)
  FUNC_2(VAR_2, VAR_3, VAR_4->left);
 if (!(VAR_4->atts & VAR_0)) {
  if (VAR_4->value.type != VAR_1)
   FUNC_1(VAR_2, "not an object");
  FUNC_0(VAR_2, VAR_3, VAR_4->name, VAR_4->value.u.object);
 }
 if (VAR_4->right->level)
  FUNC_2(VAR_2, VAR_3, VAR_4->right);
}
