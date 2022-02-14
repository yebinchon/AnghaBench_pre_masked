
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sock_t ;
typedef int foo ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (int ,char const*,int,int ) ;

__attribute__((used)) static const char *FUNC_7(void) {
  sock_t VAR_1[2];
  static const char VAR_2[] = "hi there";
  char VAR_3[20];

  FUNC_1(FUNC_4(VAR_1, VAR_0), 1);
  FUNC_0(sizeof(VAR_2) < sizeof(VAR_3));


  FUNC_1(FUNC_6(VAR_1[0], VAR_2, sizeof(VAR_2), 0), sizeof(VAR_2));
  FUNC_1(FUNC_5(VAR_1[1], VAR_3, sizeof(VAR_3), 0), sizeof(VAR_2));
  FUNC_2(VAR_3, "hi there");


  FUNC_1(FUNC_6(VAR_1[1], VAR_2, sizeof(VAR_2), 0), sizeof(VAR_2));
  FUNC_1(FUNC_5(VAR_1[0], VAR_3, sizeof(VAR_3), 0), sizeof(VAR_2));
  FUNC_2(VAR_3, "hi there");

  FUNC_3(VAR_1[0]);
  FUNC_3(VAR_1[1]);

  return ((void*)0);
}
