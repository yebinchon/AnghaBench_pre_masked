
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_8__ {int flags; int prog; scalar_t__ last; } ;
typedef TYPE_2__ js_Regexp ;
struct TYPE_9__ {TYPE_1__* sub; } ;
struct TYPE_7__ {char* sp; char* ep; } ;
typedef TYPE_3__ Resub ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*,char const*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,char const*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char const*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int ) ;
 TYPE_2__* FUNC_12 (int *,int) ;
 char* FUNC_13 (int *,int) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static void FUNC_15(js_State *VAR_2)
{
 js_Regexp *VAR_3;
 const char *VAR_4;
 int VAR_5;
 const char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 Resub VAR_10;

 VAR_4 = FUNC_0(VAR_2, 0);

 if (FUNC_4(VAR_2, 1))
  FUNC_2(VAR_2, 1);
 else if (FUNC_5(VAR_2, 1))
  FUNC_7(VAR_2, "", 0);
 else
  FUNC_7(VAR_2, FUNC_13(VAR_2, 1), 0);

 VAR_3 = FUNC_12(VAR_2, -1);
 if (!(VAR_3->flags & VAR_0)) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  return;
 }

 VAR_3->last = 0;

 FUNC_6(VAR_2);

 VAR_5 = 0;
 VAR_6 = VAR_4;
 VAR_9 = VAR_4 + FUNC_14(VAR_4);
 while (VAR_6 <= VAR_9) {
  if (FUNC_3(VAR_2, VAR_3->prog, VAR_6, &VAR_10, VAR_6 > VAR_4 ? VAR_1 : 0))
   break;

  VAR_7 = VAR_10.sub[0].sp;
  VAR_8 = VAR_10.sub[0].ep;

  FUNC_9(VAR_2, VAR_7, VAR_8 - VAR_7);
  FUNC_11(VAR_2, -2, VAR_5++);

  VAR_6 = VAR_8;
  if (VAR_8 - VAR_7 == 0)
   ++VAR_6;
 }

 if (VAR_5 == 0) {
  FUNC_8(VAR_2, 1);
  FUNC_10(VAR_2);
 }
}
