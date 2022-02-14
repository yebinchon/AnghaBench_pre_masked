
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_arg {int type; int subtype; int extra; int * ud; } ;
typedef int lua_State ;






 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,double) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(const struct sproto_arg *VAR_0, int VAR_1) {
 lua_State *VAR_2 = VAR_0->ud;
 switch(VAR_0->type) {
 case 130:
  if (VAR_0->extra)
   FUNC_5(VAR_2, 0.0);
  else
   FUNC_3(VAR_2, 0);
  break;
 case 131:
  FUNC_2(VAR_2, 0);
  break;
 case 129:
  FUNC_4(VAR_2, "");
  break;
 case 128:
  if (VAR_1) {
   FUNC_6(VAR_2, FUNC_8(VAR_0->subtype));
  } else {
   FUNC_1(VAR_2, 0, 1);
   FUNC_6(VAR_2, FUNC_8(VAR_0->subtype));
   FUNC_7(VAR_2, -2, "__type");
  }
  break;
 default:
  FUNC_0(VAR_2, "Invalid type %d", VAR_0->type);
  break;
 }
}
