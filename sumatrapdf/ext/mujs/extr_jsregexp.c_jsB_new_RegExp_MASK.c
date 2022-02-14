
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
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char*,...) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_3)
{
 js_Regexp *VAR_4;
 const char *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_3, 1)) {
  if (FUNC_0(VAR_3, 2))
   FUNC_7(VAR_3, "cannot supply flags when creating one RegExp from another");
  VAR_4 = FUNC_5(VAR_3, 1);
  VAR_5 = VAR_4->source;
  VAR_6 = VAR_4->flags;
 } else if (FUNC_2(VAR_3, 1)) {
  VAR_5 = "(?:)";
  VAR_6 = 0;
 } else {
  VAR_5 = FUNC_6(VAR_3, 1);
  VAR_6 = 0;
 }

 if (FUNC_8(VAR_5) == 0)
  VAR_5 = "(?:)";

 if (FUNC_0(VAR_3, 2)) {
  const char *VAR_7 = FUNC_6(VAR_3, 2);
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
  while (*VAR_7) {
   if (*VAR_7 == 'g') ++VAR_8;
   else if (*VAR_7 == 'i') ++VAR_9;
   else if (*VAR_7 == 'm') ++VAR_10;
   else FUNC_4(VAR_3, "invalid regular expression flag: '%c'", *VAR_7);
   ++VAR_7;
  }
  if (VAR_8 > 1) FUNC_4(VAR_3, "invalid regular expression flag: 'g'");
  if (VAR_9 > 1) FUNC_4(VAR_3, "invalid regular expression flag: 'i'");
  if (VAR_10 > 1) FUNC_4(VAR_3, "invalid regular expression flag: 'm'");
  if (VAR_8) VAR_6 |= VAR_0;
  if (VAR_9) VAR_6 |= VAR_1;
  if (VAR_10) VAR_6 |= VAR_2;
 }

 FUNC_3(VAR_3, VAR_5, VAR_6);
}
