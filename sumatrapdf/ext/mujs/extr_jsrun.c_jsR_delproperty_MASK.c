
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


struct TYPE_20__ {scalar_t__ strict; } ;
typedef TYPE_4__ js_State ;
struct TYPE_21__ {int atts; } ;
typedef TYPE_5__ js_Property ;
struct TYPE_18__ {int data; scalar_t__ (* delete ) (TYPE_4__*,int ,char const*) ;} ;
struct TYPE_17__ {int length; } ;
struct TYPE_19__ {TYPE_2__ user; TYPE_1__ s; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_6__ js_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,TYPE_6__*,char const*) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,TYPE_6__*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char const*,int*) ;
 int FUNC_3 (TYPE_4__*,char*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,char const*) ;

__attribute__((used)) static int FUNC_6(js_State *VAR_5, js_Object *VAR_6, const char *VAR_7)
{
 js_Property *VAR_8;
 int VAR_9;

 if (VAR_6->type == VAR_0) {
  if (!FUNC_4(VAR_7, "length"))
   goto dontconf;
 }

 else if (VAR_6->type == VAR_2) {
  if (!FUNC_4(VAR_7, "length"))
   goto dontconf;
  if (FUNC_2(VAR_5, VAR_7, &VAR_9))
   if (VAR_9 >= 0 && VAR_9 < VAR_6->u.s.length)
    goto dontconf;
 }

 else if (VAR_6->type == VAR_1) {
  if (!FUNC_4(VAR_7, "source")) goto dontconf;
  if (!FUNC_4(VAR_7, "global")) goto dontconf;
  if (!FUNC_4(VAR_7, "ignoreCase")) goto dontconf;
  if (!FUNC_4(VAR_7, "multiline")) goto dontconf;
  if (!FUNC_4(VAR_7, "lastIndex")) goto dontconf;
 }

 else if (VAR_6->type == VAR_3) {
  if (VAR_6->u.user.delete && VAR_6->u.user.delete(VAR_5, VAR_6->u.user.data, VAR_7))
   return 1;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  if (VAR_8->atts & VAR_4)
   goto dontconf;
  FUNC_0(VAR_5, VAR_6, VAR_7);
 }
 return 1;

dontconf:
 if (VAR_5->strict)
  FUNC_3(VAR_5, "'%s' is non-configurable", VAR_7);
 return 0;
}
