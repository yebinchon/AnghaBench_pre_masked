
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char const**) ;
 char* VAR_2 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_3 ;

void FUNC_6(int VAR_4, const char *VAR_5[])
{
 char VAR_6[VAR_0];

 if (VAR_4 < 2)
  VAR_4++, VAR_5[1] = VAR_2;
 if (VAR_4 != 2) {
  FUNC_5("usage:%s local-directory\n", VAR_5[0]);
  (void) FUNC_1(VAR_3);
  VAR_1 = -1;
  return;
 }
 if (!FUNC_3(&VAR_5[1])) {
  VAR_1 = -1;
  return;
 }
 if (FUNC_0(VAR_5[1]) < 0) {
  FUNC_4(VAR_5[1]);
  VAR_1 = -1;
  return;
 }
 FUNC_5("Local directory now %s\n", FUNC_2(VAR_6,sizeof(VAR_6)));
 (void) FUNC_1(VAR_3);
 VAR_1 = 0;
}
