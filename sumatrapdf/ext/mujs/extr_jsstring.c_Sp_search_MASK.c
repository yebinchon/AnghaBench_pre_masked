
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_7__ {int prog; } ;
typedef TYPE_2__ js_Regexp ;
struct TYPE_8__ {TYPE_1__* sub; } ;
struct TYPE_6__ {int sp; } ;
typedef TYPE_3__ Resub ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char const*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int) ;
 TYPE_2__* FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int) ;
 int FUNC_9 (char const*,int ) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_0)
{
 js_Regexp *VAR_1;
 const char *VAR_2;
 Resub VAR_3;

 VAR_2 = FUNC_0(VAR_0, 0);

 if (FUNC_3(VAR_0, 1))
  FUNC_1(VAR_0, 1);
 else if (FUNC_4(VAR_0, 1))
  FUNC_5(VAR_0, "", 0);
 else
  FUNC_5(VAR_0, FUNC_8(VAR_0, 1), 0);

 VAR_1 = FUNC_7(VAR_0, -1);

 if (!FUNC_2(VAR_0, VAR_1->prog, VAR_2, &VAR_3, 0))
  FUNC_6(VAR_0, FUNC_9(VAR_2, VAR_3.sub[0].sp));
 else
  FUNC_6(VAR_0, -1);
}
