
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int js_Value ;
struct TYPE_20__ {scalar_t__ strict; } ;
typedef TYPE_4__ js_State ;
struct TYPE_21__ {int atts; TYPE_6__* setter; TYPE_6__* getter; int value; } ;
typedef TYPE_5__ js_Property ;
struct TYPE_18__ {int data; scalar_t__ (* put ) (TYPE_4__*,int ,char const*) ;} ;
struct TYPE_17__ {int length; } ;
struct TYPE_19__ {TYPE_2__ user; TYPE_1__ s; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_6__ js_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,TYPE_6__*,char const*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char const*,int*) ;
 int FUNC_2 (TYPE_4__*,char*,char const*) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,char const*) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_6, js_Object *VAR_7, const char *VAR_8,
 int VAR_9, js_Value *VAR_10, js_Object *VAR_11, js_Object *VAR_12)
{
 js_Property *VAR_13;
 int VAR_14;

 if (VAR_7->type == VAR_0) {
  if (!FUNC_3(VAR_8, "length"))
   goto readonly;
 }

 else if (VAR_7->type == VAR_2) {
  if (!FUNC_3(VAR_8, "length"))
   goto readonly;
  if (FUNC_1(VAR_6, VAR_8, &VAR_14))
   if (VAR_14 >= 0 && VAR_14 < VAR_7->u.s.length)
    goto readonly;
 }

 else if (VAR_7->type == VAR_1) {
  if (!FUNC_3(VAR_8, "source")) goto readonly;
  if (!FUNC_3(VAR_8, "global")) goto readonly;
  if (!FUNC_3(VAR_8, "ignoreCase")) goto readonly;
  if (!FUNC_3(VAR_8, "multiline")) goto readonly;
  if (!FUNC_3(VAR_8, "lastIndex")) goto readonly;
 }

 else if (VAR_7->type == VAR_3) {
  if (VAR_7->u.user.put && VAR_7->u.user.put(VAR_6, VAR_7->u.user.data, VAR_8))
   return;
 }

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8);
 if (VAR_13) {
  if (VAR_10) {
   if (!(VAR_13->atts & VAR_5))
    VAR_13->value = *VAR_10;
   else if (VAR_6->strict)
    FUNC_2(VAR_6, "'%s' is read-only", VAR_8);
  }
  if (VAR_11) {
   if (!(VAR_13->atts & VAR_4))
    VAR_13->getter = VAR_11;
   else if (VAR_6->strict)
    FUNC_2(VAR_6, "'%s' is non-configurable", VAR_8);
  }
  if (VAR_12) {
   if (!(VAR_13->atts & VAR_4))
    VAR_13->setter = VAR_12;
   else if (VAR_6->strict)
    FUNC_2(VAR_6, "'%s' is non-configurable", VAR_8);
  }
  VAR_13->atts |= VAR_9;
 }

 return;

readonly:
 if (VAR_6->strict)
  FUNC_2(VAR_6, "'%s' is read-only or non-configurable", VAR_8);
}
