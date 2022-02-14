
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int (*) (),char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

int FUNC_8(int (VAR_5)(void), char *VAR_6)
{
 int VAR_7;

 FUNC_7(VAR_6);
 FUNC_5(VAR_0);

 if (FUNC_2(VAR_3, &VAR_4, ((void*)0))) {
  FUNC_0("sigaction (sigint)");
  FUNC_3(VAR_6);
  return 1;
 }

 if (FUNC_2(VAR_2, &VAR_4, ((void*)0))) {
  FUNC_0("sigaction (sigalrm)");
  FUNC_3(VAR_6);
  return 1;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6);

 if (VAR_7 == VAR_1) {
  FUNC_6(VAR_6);

  VAR_7 = 0;
 } else
  FUNC_4(VAR_6, VAR_7);

 return VAR_7;
}
