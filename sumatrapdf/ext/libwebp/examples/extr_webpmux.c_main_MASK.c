
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char const**) ;
 int FUNC_4 (int,char const**,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

int FUNC_7(int VAR_0, const char* VAR_1[]) {
  Config VAR_2;
  int VAR_3;

  FUNC_3(VAR_0, VAR_1);

  VAR_3 = FUNC_4(VAR_0 - 1, VAR_1 + 1, &VAR_2, FUNC_2());
  if (VAR_3) {
    VAR_3 = FUNC_6(&VAR_2);
  } else {
    FUNC_5();
  }
  FUNC_0(&VAR_2);
  FUNC_1(!VAR_3);
}
