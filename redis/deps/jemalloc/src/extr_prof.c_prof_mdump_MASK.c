
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int,char const*,int) ;
 int FUNC_5 (char*,char,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

bool
FUNC_8(tsd_t *VAR_7, const char *VAR_8) {
 FUNC_1(VAR_1);
 FUNC_0(FUNC_6(VAR_7) == 0);

 if (!VAR_2 || !VAR_4) {
  return 1;
 }
 char VAR_9[VAR_0];
 if (VAR_8 == ((void*)0)) {

  if (VAR_3[0] == '\0') {
   return 1;
  }
  FUNC_2(FUNC_7(VAR_7), &VAR_6);
  FUNC_5(VAR_9, 'm', VAR_5);
  VAR_5++;
  FUNC_3(FUNC_7(VAR_7), &VAR_6);
  VAR_8 = VAR_9;
 }
 return FUNC_4(VAR_7, 1, VAR_8, 0);
}
