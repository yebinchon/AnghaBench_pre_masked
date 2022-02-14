
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
struct TYPE_8__ {int nsub; TYPE_1__* sub; } ;
struct TYPE_6__ {char* sp; char* ep; } ;
typedef TYPE_3__ Resub ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char const*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int) ;
 TYPE_2__* FUNC_9 (int *,int) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_1)
{
 js_Regexp *VAR_2;
 const char *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 const char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 Resub VAR_12;

 VAR_3 = FUNC_0(VAR_1, 0);
 VAR_2 = FUNC_9(VAR_1, 1);
 VAR_4 = FUNC_2(VAR_1, 2) ? FUNC_8(VAR_1, 2) : 1 << 30;

 FUNC_3(VAR_1);
 VAR_5 = 0;

 VAR_11 = VAR_3 + FUNC_10(VAR_3);


 if (VAR_11 == VAR_3) {
  if (FUNC_1(VAR_1, VAR_2->prog, VAR_3, &VAR_12, 0)) {
   if (VAR_5 == VAR_4) return;
   FUNC_4(VAR_1, "");
   FUNC_7(VAR_1, -2, 0);
  }
  return;
 }

 VAR_7 = VAR_8 = VAR_3;
 while (VAR_8 < VAR_11) {
  if (FUNC_1(VAR_1, VAR_2->prog, VAR_8, &VAR_12, VAR_8 > VAR_3 ? VAR_0 : 0))
   break;

  VAR_9 = VAR_12.sub[0].sp;
  VAR_10 = VAR_12.sub[0].ep;


  if (VAR_9 == VAR_7) {
   ++VAR_8;
   continue;
  }

  if (VAR_5 == VAR_4) return;
  FUNC_5(VAR_1, VAR_7, VAR_9 - VAR_7);
  FUNC_7(VAR_1, -2, VAR_5++);

  for (VAR_6 = 1; VAR_6 < VAR_12.nsub; ++VAR_6) {
   if (VAR_5 == VAR_4) return;
   FUNC_5(VAR_1, VAR_12.sub[VAR_6].sp, VAR_12.sub[VAR_6].ep - VAR_12.sub[VAR_6].sp);
   FUNC_7(VAR_1, -2, VAR_5++);
  }

  VAR_8 = VAR_7 = VAR_10;
 }

 if (VAR_5 == VAR_4) return;
 FUNC_6(VAR_1, VAR_7);
 FUNC_7(VAR_1, -2, VAR_5);
}
