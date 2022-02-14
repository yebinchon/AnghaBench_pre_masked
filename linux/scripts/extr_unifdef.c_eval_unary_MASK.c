
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ops {int dummy; } ;
typedef scalar_t__ Linetype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct ops const*,...) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int*,char const**) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (char const*,char**,int ) ;
 char** VAR_6 ;

__attribute__((used)) static Linetype
FUNC_10(const struct ops *VAR_7, int *VAR_8, const char **VAR_9)
{
 const char *VAR_10;
 char *VAR_11;
 int VAR_12;
 bool VAR_13;
 Linetype VAR_14;

 VAR_10 = FUNC_6(*VAR_9);
 if (*VAR_10 == '!') {
  FUNC_0("eval%d !", VAR_7 - VAR_5);
  VAR_10++;
  VAR_14 = FUNC_10(VAR_7, VAR_8, &VAR_10);
  if (VAR_14 == VAR_0)
   return (VAR_0);
  if (VAR_14 != VAR_2) {
   *VAR_8 = !*VAR_8;
   VAR_14 = *VAR_8 ? VAR_3 : VAR_1;
  }
 } else if (*VAR_10 == '(') {
  VAR_10++;
  FUNC_0("eval%d (", VAR_7 - VAR_5);
  VAR_14 = FUNC_2(VAR_5, VAR_8, &VAR_10);
  if (VAR_14 == VAR_0)
   return (VAR_0);
  VAR_10 = FUNC_6(VAR_10);
  if (*VAR_10++ != ')')
   return (VAR_0);
 } else if (FUNC_4((unsigned char)*VAR_10)) {
  FUNC_0("eval%d number", VAR_7 - VAR_5);
  *VAR_8 = FUNC_9(VAR_10, &VAR_11, 0);
  if (VAR_11 == VAR_10)
   return (VAR_0);
  VAR_14 = *VAR_8 ? VAR_3 : VAR_1;
  VAR_10 = FUNC_7(VAR_10);
 } else if (FUNC_8(VAR_10, "defined", 7) == 0 && FUNC_1(VAR_10[7])) {
  VAR_10 = FUNC_6(VAR_10+7);
  FUNC_0("eval%d defined", VAR_7 - VAR_5);
  if (*VAR_10 == '(') {
   VAR_10 = FUNC_6(VAR_10+1);
   VAR_13 = 1;
  } else {
   VAR_13 = 0;
  }
  VAR_12 = FUNC_3(VAR_10);
  if (VAR_12 < 0) {
   VAR_14 = VAR_2;
  } else {
   *VAR_8 = (VAR_6[VAR_12] != ((void*)0));
   VAR_14 = *VAR_8 ? VAR_3 : VAR_1;
  }
  VAR_10 = FUNC_7(VAR_10);
  VAR_10 = FUNC_6(VAR_10);
  if (VAR_13 && *VAR_10++ != ')')
   return (VAR_0);
  VAR_4 = 0;
 } else if (!FUNC_1(*VAR_10)) {
  FUNC_0("eval%d symbol", VAR_7 - VAR_5);
  VAR_12 = FUNC_3(VAR_10);
  VAR_10 = FUNC_7(VAR_10);
  if (VAR_12 < 0) {
   VAR_14 = VAR_2;
   VAR_10 = FUNC_5(VAR_10);
  } else if (VAR_6[VAR_12] == ((void*)0)) {
   *VAR_8 = 0;
   VAR_14 = VAR_1;
  } else {
   *VAR_8 = FUNC_9(VAR_6[VAR_12], &VAR_11, 0);
   if (*VAR_11 != '\0' || VAR_11 == VAR_6[VAR_12])
    return (VAR_0);
   VAR_14 = *VAR_8 ? VAR_3 : VAR_1;
   VAR_10 = FUNC_5(VAR_10);
  }
  VAR_4 = 0;
 } else {
  FUNC_0("eval%d bad expr", VAR_7 - VAR_5);
  return (VAR_0);
 }

 *VAR_9 = VAR_10;
 FUNC_0("eval%d = %d", VAR_7 - VAR_5, *VAR_8);
 return (VAR_14);
}
