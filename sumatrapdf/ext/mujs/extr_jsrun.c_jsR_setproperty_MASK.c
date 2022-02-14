
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int js_Value ;
struct TYPE_36__ {scalar_t__ strict; } ;
typedef TYPE_6__ js_State ;
struct TYPE_37__ {int atts; int value; scalar_t__ getter; TYPE_8__* setter; } ;
typedef TYPE_7__ js_Property ;
struct TYPE_34__ {int data; scalar_t__ (* put ) (TYPE_6__*,int ,char const*) ;} ;
struct TYPE_33__ {int last; } ;
struct TYPE_32__ {int length; } ;
struct TYPE_31__ {int length; } ;
struct TYPE_35__ {TYPE_4__ user; TYPE_3__ r; TYPE_2__ s; TYPE_1__ a; } ;
struct TYPE_38__ {scalar_t__ type; TYPE_5__ u; } ;
typedef TYPE_8__ js_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_7__* FUNC_0 (TYPE_6__*,TYPE_8__*,char const*,int*) ;
 int FUNC_1 (double) ;
 int FUNC_2 (TYPE_6__*,TYPE_8__*,int) ;
 TYPE_7__* FUNC_3 (TYPE_6__*,TYPE_8__*,char const*) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 double FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (TYPE_6__*,int) ;
 scalar_t__ FUNC_7 (TYPE_6__*,char const*,int*) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_6__*,int ) ;
 int FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (TYPE_6__*,char*,char const*) ;
 int * FUNC_13 (TYPE_6__*,int) ;
 int FUNC_14 (char const*,char*) ;
 scalar_t__ FUNC_15 (TYPE_6__*,int ,char const*) ;

__attribute__((used)) static void FUNC_16(js_State *VAR_5, js_Object *VAR_6, const char *VAR_7)
{
 js_Value *VAR_8 = FUNC_13(VAR_5, -1);
 js_Property *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_6->type == VAR_0) {
  if (!FUNC_14(VAR_7, "length")) {
   double VAR_12 = FUNC_5(VAR_5, VAR_8);
   int VAR_13 = FUNC_1(VAR_12);
   if (VAR_13 != VAR_12 || VAR_13 < 0)
    FUNC_11(VAR_5, "invalid array length");
   FUNC_2(VAR_5, VAR_6, VAR_13);
   return;
  }
  if (FUNC_7(VAR_5, VAR_7, &VAR_10))
   if (VAR_10 >= VAR_6->u.a.length)
    VAR_6->u.a.length = VAR_10 + 1;
 }

 else if (VAR_6->type == VAR_2) {
  if (!FUNC_14(VAR_7, "length"))
   goto readonly;
  if (FUNC_7(VAR_5, VAR_7, &VAR_10))
   if (VAR_10 >= 0 && VAR_10 < VAR_6->u.s.length)
    goto readonly;
 }

 else if (VAR_6->type == VAR_1) {
  if (!FUNC_14(VAR_7, "source")) goto readonly;
  if (!FUNC_14(VAR_7, "global")) goto readonly;
  if (!FUNC_14(VAR_7, "ignoreCase")) goto readonly;
  if (!FUNC_14(VAR_7, "multiline")) goto readonly;
  if (!FUNC_14(VAR_7, "lastIndex")) {
   VAR_6->u.r.last = FUNC_4(VAR_5, VAR_8);
   return;
  }
 }

 else if (VAR_6->type == VAR_3) {
  if (VAR_6->u.user.put && VAR_6->u.user.put(VAR_5, VAR_6->u.user.data, VAR_7))
   return;
 }


 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_11);
 if (VAR_9) {
  if (VAR_9->setter) {
   FUNC_9(VAR_5, VAR_9->setter);
   FUNC_9(VAR_5, VAR_6);
   FUNC_10(VAR_5, *VAR_8);
   FUNC_6(VAR_5, 1);
   FUNC_8(VAR_5, 1);
   return;
  } else {
   if (VAR_5->strict)
    if (VAR_9->getter)
     FUNC_12(VAR_5, "setting property '%s' that only has a getter", VAR_7);
  }
 }


 if (!VAR_9 || !VAR_11)
  VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7);

 if (VAR_9) {
  if (!(VAR_9->atts & VAR_4))
   VAR_9->value = *VAR_8;
  else
   goto readonly;
 }

 return;

readonly:
 if (VAR_5->strict)
  FUNC_12(VAR_5, "'%s' is read-only", VAR_7);
}
