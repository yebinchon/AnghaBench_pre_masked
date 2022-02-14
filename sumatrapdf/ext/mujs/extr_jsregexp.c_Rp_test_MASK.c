
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_7__ {int flags; scalar_t__ last; int prog; } ;
typedef TYPE_2__ js_Regexp ;
struct TYPE_8__ {TYPE_1__* sub; } ;
struct TYPE_6__ {char const* ep; } ;
typedef TYPE_3__ Resub ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char const*,TYPE_3__*,int) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_2)
{
 js_Regexp *VAR_3;
 const char *VAR_4;
 int VAR_5;
 int VAR_6;
 Resub VAR_7;

 VAR_3 = FUNC_3(VAR_2, 0);
 VAR_4 = FUNC_4(VAR_2, 1);

 VAR_6 = 0;
 if (VAR_3->flags & VAR_0) {
  if (VAR_3->last > FUNC_5(VAR_4)) {
   VAR_3->last = 0;
   FUNC_1(VAR_2, 0);
   return;
  }
  if (VAR_3->last > 0) {
   VAR_4 += VAR_3->last;
   VAR_6 |= VAR_1;
  }
 }

 VAR_5 = FUNC_2(VAR_3->prog, VAR_4, &VAR_7, VAR_6);
 if (VAR_5 < 0)
  FUNC_0(VAR_2, "regexec failed");
 if (VAR_5 == 0) {
  if (VAR_3->flags & VAR_0)
   VAR_3->last = VAR_3->last + (VAR_7.sub[0].ep - VAR_4);
  FUNC_1(VAR_2, 1);
  return;
 }

 if (VAR_3->flags & VAR_0)
  VAR_3->last = 0;

 FUNC_1(VAR_2, 0);
}
