
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static const char *FUNC_4(void) {
  char VAR_0[20];

  FUNC_0(FUNC_3("localhost", VAR_0, sizeof(VAR_0)) > 0);
  FUNC_2(VAR_0, "127.0.0.1");

  FUNC_1(FUNC_3("please_dont_name_a_host_like_ths", VAR_0, sizeof(VAR_0)),
            0);
  return ((void*)0);
}
