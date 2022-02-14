
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_8__ {TYPE_6__* object; TYPE_1__* memstr; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_6__* setter; TYPE_6__* getter; TYPE_3__ value; struct TYPE_10__* right; scalar_t__ level; struct TYPE_10__* left; } ;
typedef TYPE_4__ js_Property ;
struct TYPE_11__ {int gcmark; } ;
struct TYPE_7__ {int gcmark; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,TYPE_6__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_2, int VAR_3, js_Property *VAR_4)
{
 if (VAR_4->left->level) FUNC_1(VAR_2, VAR_3, VAR_4->left);
 if (VAR_4->right->level) FUNC_1(VAR_2, VAR_3, VAR_4->right);

 if (VAR_4->value.type == VAR_0 && VAR_4->value.u.memstr->gcmark != VAR_3)
  VAR_4->value.u.memstr->gcmark = VAR_3;
 if (VAR_4->value.type == VAR_1 && VAR_4->value.u.object->gcmark != VAR_3)
  FUNC_0(VAR_2, VAR_3, VAR_4->value.u.object);
 if (VAR_4->getter && VAR_4->getter->gcmark != VAR_3)
  FUNC_0(VAR_2, VAR_3, VAR_4->getter);
 if (VAR_4->setter && VAR_4->setter->gcmark != VAR_3)
  FUNC_0(VAR_2, VAR_3, VAR_4->setter);
}
