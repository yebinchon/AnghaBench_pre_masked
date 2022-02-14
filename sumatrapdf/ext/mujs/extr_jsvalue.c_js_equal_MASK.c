
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ number; scalar_t__ boolean; scalar_t__ object; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Value ;
typedef int js_State ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(js_State *VAR_6)
{
 js_Value *VAR_7 = FUNC_4(VAR_6, -2);
 js_Value *VAR_8 = FUNC_4(VAR_6, -1);

retry:
 if (FUNC_0(VAR_7) && FUNC_0(VAR_8))
  return !FUNC_5(FUNC_1(VAR_7), FUNC_1(VAR_8));
 if (VAR_7->type == VAR_8->type) {
  if (VAR_7->type == VAR_5) return 1;
  if (VAR_7->type == VAR_2) return 1;
  if (VAR_7->type == VAR_3) return VAR_7->u.number == VAR_8->u.number;
  if (VAR_7->type == VAR_1) return VAR_7->u.boolean == VAR_8->u.boolean;
  if (VAR_7->type == VAR_4) return VAR_7->u.object == VAR_8->u.object;
  return 0;
 }

 if (VAR_7->type == VAR_2 && VAR_8->type == VAR_5) return 1;
 if (VAR_7->type == VAR_5 && VAR_8->type == VAR_2) return 1;

 if (VAR_7->type == VAR_3 && FUNC_0(VAR_8))
  return VAR_7->u.number == FUNC_2(VAR_6, VAR_8);
 if (FUNC_0(VAR_7) && VAR_8->type == VAR_3)
  return FUNC_2(VAR_6, VAR_7) == VAR_8->u.number;

 if (VAR_7->type == VAR_1) {
  VAR_7->type = VAR_3;
  VAR_7->u.number = VAR_7->u.boolean;
  goto retry;
 }
 if (VAR_8->type == VAR_1) {
  VAR_8->type = VAR_3;
  VAR_8->u.number = VAR_8->u.boolean;
  goto retry;
 }
 if ((FUNC_0(VAR_7) || VAR_7->type == VAR_3) && VAR_8->type == VAR_4) {
  FUNC_3(VAR_6, VAR_8, VAR_0);
  goto retry;
 }
 if (VAR_7->type == VAR_4 && (FUNC_0(VAR_8) || VAR_8->type == VAR_3)) {
  FUNC_3(VAR_6, VAR_7, VAR_0);
  goto retry;
 }

 return 0;
}
