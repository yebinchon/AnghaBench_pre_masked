
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ) ;

int FUNC_4(void) {
 int VAR_2, VAR_3;
 int VAR_4 = 0;
 char VAR_5[10];
 char *VAR_6 = "\033[6n";

 FUNC_0(VAR_5, 0, sizeof(VAR_5));

 VAR_3 = FUNC_3(VAR_1, VAR_6, FUNC_2(VAR_6));

 VAR_3 = FUNC_1(VAR_0, VAR_5, sizeof(VAR_5));

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  if (VAR_5[VAR_2] == 27 || VAR_5[VAR_2] == '[') {
   continue;
  }

  if (VAR_5[VAR_2] >= '0' && VAR_5[VAR_2] <= '9') {
   VAR_4 = (VAR_4 * 10) + (VAR_5[VAR_2] - '0');
  }

  if (VAR_5[VAR_2] == ';' || VAR_5[VAR_2] == 'R' || VAR_5[VAR_2] == 0) {
   break;
  }
 }

 return VAR_4;
}
