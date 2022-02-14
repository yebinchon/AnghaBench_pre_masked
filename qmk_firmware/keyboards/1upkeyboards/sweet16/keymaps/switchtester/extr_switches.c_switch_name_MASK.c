
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mechswitch {int dummy; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct mechswitch) ;
 char* FUNC_1 (struct mechswitch) ;
 int FUNC_2 (char*,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,scalar_t__) ;
 char* FUNC_5 (struct mechswitch) ;

void FUNC_6(struct mechswitch VAR_1, char *VAR_2) {
  const char *VAR_3 = FUNC_5(VAR_1);
  const char *VAR_4 = FUNC_1(VAR_1);

  FUNC_2(VAR_2, VAR_0, "%s", FUNC_0(VAR_1));
  FUNC_4(VAR_2, " ", VAR_0 - FUNC_3(VAR_2));
  if (FUNC_3(VAR_3) > 0) {
    FUNC_4(VAR_2, VAR_3, VAR_0 - FUNC_3(VAR_2));
    FUNC_4(VAR_2, " ", VAR_0 - FUNC_3(VAR_2));
  }
  if (FUNC_3(VAR_4) > 0) {
    FUNC_4(VAR_2, VAR_4, VAR_0 - FUNC_3(VAR_2));
  }
}
