
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static inline char *
FUNC_4(char *VAR_1)
{
 static char *VAR_2 = "gss/";
 char *VAR_3;

 VAR_3 = FUNC_0(FUNC_3(VAR_1) + FUNC_3(VAR_2) + 1, VAR_0);
 if (VAR_3) {
  FUNC_2(VAR_3, VAR_2);
  FUNC_1(VAR_3, VAR_1);
 }
 return VAR_3;
}
