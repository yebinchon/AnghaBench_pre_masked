
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,char const*,int) ;

void FUNC_3(int VAR_5, const char *VAR_6[])
{
 if (VAR_5 == 1) {
  VAR_1 = 0;
  FUNC_1("Ntrans off.\n");
  (void) FUNC_0(VAR_4);
  VAR_0 = VAR_1;
  return;
 }
 VAR_1++;
 VAR_0 = VAR_1;
 (void) FUNC_2(VAR_2, VAR_6[1], 16);
 VAR_2[16] = '\0';
 if (VAR_5 == 2) {
  VAR_3[0] = '\0';
  return;
 }
 (void) FUNC_2(VAR_3, VAR_6[2], 16);
 VAR_3[16] = '\0';
}
