
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_20__ {int actx; int alloc; } ;
typedef TYPE_5__ js_State ;
struct TYPE_18__ {int data; int (* finalize ) (TYPE_5__*,int ) ;} ;
struct TYPE_17__ {int head; } ;
struct TYPE_16__ {int prog; TYPE_6__* source; } ;
struct TYPE_19__ {TYPE_3__ user; TYPE_2__ iter; TYPE_1__ r; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_4__ u; TYPE_11__* properties; } ;
typedef TYPE_6__ js_Object ;
struct TYPE_15__ {scalar_t__ level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_11__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_3, js_Object *VAR_4)
{
 if (VAR_4->properties->level)
  FUNC_1(VAR_3, VAR_4->properties);
 if (VAR_4->type == VAR_1) {
  FUNC_2(VAR_3, VAR_4->u.r.source);
  FUNC_3(VAR_3->alloc, VAR_3->actx, VAR_4->u.r.prog);
 }
 if (VAR_4->type == VAR_0)
  FUNC_0(VAR_3, VAR_4->u.iter.head);
 if (VAR_4->type == VAR_2 && VAR_4->u.user.finalize)
  VAR_4->u.user.finalize(VAR_3, VAR_4->u.user.data);
 FUNC_2(VAR_3, VAR_4);
}
