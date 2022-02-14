
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {int dummy; } ;
struct TYPE_2__ {struct table* tbl; int boolean; int string; int n; int d; } ;
struct node {int valuetype; TYPE_1__ v; } ;
struct context {struct table* tbl; } ;
typedef int lua_State ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct context*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int,size_t*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct table*,int ,int) ;
 int FUNC_15 (struct context*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_16(struct context * VAR_7, lua_State *VAR_8, int VAR_9, struct node *VAR_10) {
 int VAR_11 = FUNC_11(VAR_8, VAR_9);
 switch(VAR_11) {
 case 131:
  VAR_10->valuetype = VAR_2;
  break;
 case 130:
  if (FUNC_3(VAR_8, VAR_9)) {
   VAR_10->v.d = FUNC_8(VAR_8, VAR_9);
   VAR_10->valuetype = VAR_1;
  } else {
   VAR_10->v.n = FUNC_10(VAR_8, VAR_9);
   VAR_10->valuetype = VAR_3;
  }
  break;
 case 129: {
  size_t VAR_12 = 0;
  const char * VAR_13 = FUNC_9(VAR_8, VAR_9, &VAR_12);
  VAR_10->v.string = FUNC_15(VAR_7, VAR_13, VAR_12);
  VAR_10->valuetype = VAR_4;
  break;
 }
 case 132:
  VAR_10->v.boolean = FUNC_7(VAR_8, VAR_9);
  VAR_10->valuetype = VAR_0;
  break;
 case 128: {
  struct table *VAR_14 = VAR_7->tbl;
  VAR_7->tbl = (struct table *)FUNC_13(sizeof(struct table));
  if (VAR_7->tbl == ((void*)0)) {
   VAR_7->tbl = VAR_14;
   FUNC_0(VAR_8, "memory error");

  }
  FUNC_14(VAR_7->tbl, 0, sizeof(struct table));
  int VAR_15 = FUNC_1(VAR_8, VAR_9);

  FUNC_4(VAR_8, VAR_6);
  FUNC_6(VAR_8, VAR_15);
  FUNC_5(VAR_8, VAR_7);

  FUNC_2(VAR_8, 2, 0);

  VAR_10->v.tbl = VAR_7->tbl;
  VAR_10->valuetype = VAR_5;

  VAR_7->tbl = VAR_14;

  break;
 }
 default:
  FUNC_0(VAR_8, "Unsupport value type %s", FUNC_12(VAR_8, VAR_11));
  break;
 }
}
