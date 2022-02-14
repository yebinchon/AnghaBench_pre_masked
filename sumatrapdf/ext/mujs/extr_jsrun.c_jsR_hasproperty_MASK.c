
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_17__ {int value; TYPE_7__* getter; } ;
typedef TYPE_6__ js_Property ;
struct TYPE_15__ {int data; scalar_t__ (* has ) (int *,int ,char const*) ;} ;
struct TYPE_14__ {int flags; int last; int source; } ;
struct TYPE_13__ {int length; int string; } ;
struct TYPE_12__ {int length; } ;
struct TYPE_16__ {TYPE_4__ user; TYPE_3__ r; TYPE_2__ s; TYPE_1__ a; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_5__ u; } ;
typedef TYPE_7__ js_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_0 (int *,TYPE_7__*,char const*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char const*,int*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,TYPE_7__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (int *,int ,char const*) ;

__attribute__((used)) static int FUNC_12(js_State *VAR_7, js_Object *VAR_8, const char *VAR_9)
{
 js_Property *VAR_10;
 int VAR_11;

 if (VAR_8->type == VAR_0) {
  if (!FUNC_10(VAR_9, "length")) {
   FUNC_5(VAR_7, VAR_8->u.a.length);
   return 1;
  }
 }

 else if (VAR_8->type == VAR_2) {
  if (!FUNC_10(VAR_9, "length")) {
   FUNC_5(VAR_7, VAR_8->u.s.length);
   return 1;
  }
  if (FUNC_2(VAR_7, VAR_9, &VAR_11)) {
   if (VAR_11 >= 0 && VAR_11 < VAR_8->u.s.length) {
    FUNC_7(VAR_7, FUNC_9(VAR_7, VAR_8->u.s.string, VAR_11));
    return 1;
   }
  }
 }

 else if (VAR_8->type == VAR_1) {
  if (!FUNC_10(VAR_9, "source")) {
   FUNC_4(VAR_7, VAR_8->u.r.source);
   return 1;
  }
  if (!FUNC_10(VAR_9, "global")) {
   FUNC_3(VAR_7, VAR_8->u.r.flags & VAR_4);
   return 1;
  }
  if (!FUNC_10(VAR_9, "ignoreCase")) {
   FUNC_3(VAR_7, VAR_8->u.r.flags & VAR_5);
   return 1;
  }
  if (!FUNC_10(VAR_9, "multiline")) {
   FUNC_3(VAR_7, VAR_8->u.r.flags & VAR_6);
   return 1;
  }
  if (!FUNC_10(VAR_9, "lastIndex")) {
   FUNC_5(VAR_7, VAR_8->u.r.last);
   return 1;
  }
 }

 else if (VAR_8->type == VAR_3) {
  if (VAR_8->u.user.has && VAR_8->u.user.has(VAR_7, VAR_8->u.user.data, VAR_9))
   return 1;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9);
 if (VAR_10) {
  if (VAR_10->getter) {
   FUNC_6(VAR_7, VAR_10->getter);
   FUNC_6(VAR_7, VAR_8);
   FUNC_1(VAR_7, 0);
  } else {
   FUNC_8(VAR_7, VAR_10->value);
  }
  return 1;
 }

 return 0;
}
