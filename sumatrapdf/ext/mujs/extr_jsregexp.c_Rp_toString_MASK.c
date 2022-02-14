
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {char* source; int flags; } ;
typedef TYPE_1__ js_Regexp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_3)
{
 js_Regexp *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_6(VAR_3, 0);

 VAR_5 = FUNC_2(VAR_3, FUNC_10(VAR_4->source) + 6);
 FUNC_9(VAR_5, "/");
 FUNC_8(VAR_5, VAR_4->source);
 FUNC_8(VAR_5, "/");
 if (VAR_4->flags & VAR_0) FUNC_8(VAR_5, "g");
 if (VAR_4->flags & VAR_1) FUNC_8(VAR_5, "i");
 if (VAR_4->flags & VAR_2) FUNC_8(VAR_5, "m");

 if (FUNC_7(VAR_3)) {
  FUNC_1(VAR_3, VAR_5);
  FUNC_5(VAR_3);
 }
 FUNC_3(VAR_3, 0);
 FUNC_4(VAR_3, VAR_5);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_5);
}
