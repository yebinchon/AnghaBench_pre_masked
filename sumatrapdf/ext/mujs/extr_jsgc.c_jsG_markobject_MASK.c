
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_10__ {TYPE_7__* function; TYPE_8__* scope; } ;
struct TYPE_9__ {TYPE_4__* target; } ;
struct TYPE_11__ {TYPE_2__ f; TYPE_1__ iter; } ;
struct TYPE_12__ {int gcmark; scalar_t__ type; TYPE_3__ u; struct TYPE_12__* prototype; TYPE_5__* properties; } ;
typedef TYPE_4__ js_Object ;
struct TYPE_15__ {int gcmark; } ;
struct TYPE_14__ {int gcmark; } ;
struct TYPE_13__ {scalar_t__ level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,TYPE_8__*) ;
 int FUNC_1 (int *,int,TYPE_7__*) ;
 int FUNC_2 (int *,int,TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_3, int VAR_4, js_Object *VAR_5)
{
 VAR_5->gcmark = VAR_4;
 if (VAR_5->properties->level)
  FUNC_2(VAR_3, VAR_4, VAR_5->properties);
 if (VAR_5->prototype && VAR_5->prototype->gcmark != VAR_4)
  FUNC_3(VAR_3, VAR_4, VAR_5->prototype);
 if (VAR_5->type == VAR_1) {
  FUNC_3(VAR_3, VAR_4, VAR_5->u.iter.target);
 }
 if (VAR_5->type == VAR_0 || VAR_5->type == VAR_2) {
  if (VAR_5->u.f.scope && VAR_5->u.f.scope->gcmark != VAR_4)
   FUNC_0(VAR_3, VAR_4, VAR_5->u.f.scope);
  if (VAR_5->u.f.function && VAR_5->u.f.function->gcmark != VAR_4)
   FUNC_1(VAR_3, VAR_4, VAR_5->u.f.function);
 }
}
