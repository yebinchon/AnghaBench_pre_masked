
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int* VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,int,int) ;
 int VAR_4 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9[VAR_6], VAR_10[VAR_6];

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_2(VAR_5)) {
   FUNC_1(VAR_4, "%s", VAR_1);
   return 1;
  }
  FUNC_4("prog #%d: map ids %d %d\n", VAR_7, VAR_3[0], VAR_3[1]);
  VAR_9[VAR_7] = VAR_3[0];
  VAR_10[VAR_7] = VAR_3[1];
 }







 VAR_8 = FUNC_3(VAR_5, VAR_0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "open failed: %s\n", FUNC_5(VAR_2));
  return 1;
 }
 FUNC_0(VAR_8);


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_6(VAR_9[VAR_7]);
  FUNC_6(VAR_10[VAR_7]);
 }

 return 0;
}
