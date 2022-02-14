
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,size_t,int) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;
 int FUNC_6 (char*,int,size_t) ;
 scalar_t__ FUNC_7 (char*,int) ;
 size_t FUNC_8 (char*,size_t) ;

__attribute__((used)) static void FUNC_9(char *VAR_1, size_t VAR_2, size_t VAR_3,
     size_t VAR_4, int VAR_5, const char *VAR_6)
{
 size_t VAR_7;
 int VAR_8;

 FUNC_6(VAR_1, 1, VAR_2);

 VAR_8 = FUNC_4(VAR_1, VAR_3, 1);
 FUNC_1(VAR_8, VAR_5);

 VAR_7 = FUNC_8(VAR_1, VAR_2);
 if (VAR_7 == VAR_2) {
  FUNC_2("verifier did not NULL terminate the log\n");
  FUNC_3(1);
 }
 if (VAR_4 && VAR_7 != VAR_4) {
  FUNC_2("incorrect log length expected:%zd have:%zd\n",
      VAR_4, VAR_7);
  FUNC_3(1);
 }

 if (FUNC_7(VAR_1, 1)) {
  FUNC_2("verifier leaked a byte through\n");
  FUNC_3(1);
 }

 FUNC_0(VAR_1 + VAR_7 + 1, VAR_2 - VAR_7 - 1,
     "verifier wrote bytes past NULL termination\n");

 if (FUNC_5(VAR_6, VAR_1, VAR_0)) {
  FUNC_2("log did not match expected output\n");
  FUNC_3(1);
 }
}
