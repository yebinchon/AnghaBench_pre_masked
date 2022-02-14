
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int GE; } ;
typedef TYPE_1__ js_State ;
typedef int js_Function ;
struct TYPE_21__ {int * s; } ;
typedef TYPE_2__ js_Buffer ;
typedef int js_Ast ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,char*,int *,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__**,char) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__**,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 char* FUNC_11 (TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(js_State *VAR_0)
{
 int VAR_1, VAR_2 = FUNC_5(VAR_0);
 js_Buffer *VAR_3 = ((void*)0);
 const char *VAR_4;
 js_Ast *VAR_5;
 js_Function *VAR_6;

 if (FUNC_12(VAR_0)) {
  FUNC_4(VAR_0, VAR_3);
  FUNC_1(VAR_0);
  FUNC_10(VAR_0);
 }


 if (VAR_2 > 2) {
  for (VAR_1 = 1; VAR_1 < VAR_2 - 1; ++VAR_1) {
   if (VAR_1 > 1)
    FUNC_8(VAR_0, &VAR_3, ',');
   FUNC_9(VAR_0, &VAR_3, FUNC_11(VAR_0, VAR_1));
  }
  FUNC_8(VAR_0, &VAR_3, ')');
  FUNC_8(VAR_0, &VAR_3, 0);
 }


 VAR_4 = FUNC_6(VAR_0, VAR_2 - 1) ? FUNC_11(VAR_0, VAR_2 - 1) : "";

 VAR_5 = FUNC_2(VAR_0, "[string]", VAR_3 ? VAR_3->s : ((void*)0), VAR_4);
 VAR_6 = FUNC_0(VAR_0, VAR_5);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0, VAR_3);
 FUNC_1(VAR_0);

 FUNC_7(VAR_0, VAR_6, VAR_0->GE);
}
