
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_13__ {char* tag; } ;
struct TYPE_12__ {char* source; int flags; } ;
struct TYPE_11__ {char* string; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {int function; } ;
struct TYPE_14__ {TYPE_5__ user; int number; TYPE_4__ r; TYPE_3__ s; int boolean; TYPE_2__ c; TYPE_1__ f; } ;
struct TYPE_15__ {int type; TYPE_6__ u; } ;
typedef TYPE_7__ js_Object ;
typedef int js_Buffer ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int **,int ) ;
 int FUNC_1 (int *,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int **,char) ;
 int FUNC_10 (int *,int **,char*) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 TYPE_7__* FUNC_13 (int *,int) ;
 char* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int **) ;
 int FUNC_16 (int *,int **,int ) ;
 int FUNC_17 (int *,int **,int ) ;
 int FUNC_18 (int *,int **) ;
 int FUNC_19 (int *,int **,char*) ;

__attribute__((used)) static void FUNC_20(js_State *VAR_3, js_Buffer **VAR_4)
{
 if (FUNC_7(VAR_3, -1))
  FUNC_10(VAR_3, VAR_4, "undefined");
 else if (FUNC_3(VAR_3, -1))
  FUNC_10(VAR_3, VAR_4, "null");
 else if (FUNC_2(VAR_3, -1))
  FUNC_10(VAR_3, VAR_4, FUNC_11(VAR_3, -1) ? "true" : "false");
 else if (FUNC_4(VAR_3, -1))
  FUNC_17(VAR_3, VAR_4, FUNC_12(VAR_3, -1));
 else if (FUNC_6(VAR_3, -1))
  FUNC_19(VAR_3, VAR_4, FUNC_14(VAR_3, -1));
 else if (FUNC_5(VAR_3, -1)) {
  js_Object *VAR_5 = FUNC_13(VAR_3, -1);
  switch (VAR_5->type) {
  default:
   FUNC_18(VAR_3, VAR_4);
   break;
  case 141:
   FUNC_15(VAR_3, VAR_4);
   break;
  case 136:
  case 130:
   FUNC_16(VAR_3, VAR_4, VAR_5->u.f.function);
   break;
  case 139:
   FUNC_10(VAR_3, VAR_4, "function ");
   FUNC_10(VAR_3, VAR_4, VAR_5->u.c.name);
   FUNC_10(VAR_3, VAR_4, "() { [native code] }");
   break;
  case 140:
   FUNC_10(VAR_3, VAR_4, "(new Boolean(");
   FUNC_10(VAR_3, VAR_4, VAR_5->u.boolean ? "true" : "false");
   FUNC_10(VAR_3, VAR_4, "))");
   break;
  case 132:
   FUNC_10(VAR_3, VAR_4, "(new Number(");
   FUNC_17(VAR_3, VAR_4, VAR_5->u.number);
   FUNC_10(VAR_3, VAR_4, "))");
   break;
  case 129:
   FUNC_10(VAR_3, VAR_4, "(new String(");
   FUNC_19(VAR_3, VAR_4, VAR_5->u.s.string);
   FUNC_10(VAR_3, VAR_4, "))");
   break;
  case 131:
   FUNC_9(VAR_3, VAR_4, '/');
   FUNC_10(VAR_3, VAR_4, VAR_5->u.r.source);
   FUNC_9(VAR_3, VAR_4, '/');
   if (VAR_5->u.r.flags & VAR_0) FUNC_9(VAR_3, VAR_4, 'g');
   if (VAR_5->u.r.flags & VAR_1) FUNC_9(VAR_3, VAR_4, 'i');
   if (VAR_5->u.r.flags & VAR_2) FUNC_9(VAR_3, VAR_4, 'm');
   break;
  case 138:
   FUNC_10(VAR_3, VAR_4, "(new Date(");
   FUNC_0(VAR_3, VAR_4, VAR_5->u.number);
   FUNC_10(VAR_3, VAR_4, "))");
   break;
  case 137:
   FUNC_10(VAR_3, VAR_4, "(new ");
   FUNC_1(VAR_3, -1, "name");
   FUNC_10(VAR_3, VAR_4, FUNC_14(VAR_3, -1));
   FUNC_8(VAR_3, 1);
   FUNC_9(VAR_3, VAR_4, '(');
   FUNC_1(VAR_3, -1, "message");
   FUNC_19(VAR_3, VAR_4, FUNC_14(VAR_3, -1));
   FUNC_8(VAR_3, 1);
   FUNC_10(VAR_3, VAR_4, "))");
   break;
  case 133:
   FUNC_10(VAR_3, VAR_4, "Math");
   break;
  case 134:
   FUNC_10(VAR_3, VAR_4, "JSON");
   break;
  case 135:
   FUNC_10(VAR_3, VAR_4, "[iterator ");
   break;
  case 128:
   FUNC_10(VAR_3, VAR_4, "[userdata ");
   FUNC_10(VAR_3, VAR_4, VAR_5->u.user.tag);
   FUNC_9(VAR_3, VAR_4, ']');
   break;
  }
 }
}
