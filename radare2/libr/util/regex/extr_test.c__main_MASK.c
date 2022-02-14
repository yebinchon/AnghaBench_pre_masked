
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRegex ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4() {
 RRegex VAR_1;
 int VAR_2 = FUNC_1 (&VAR_1, "^hi", VAR_0);
 if (VAR_2) {
  FUNC_0 ("error\n");

 } else {
  VAR_2 = FUNC_2 (&VAR_1, "patata", 0, 0, 0);
  FUNC_0 ("out = %d\n", VAR_2);

  VAR_2 = FUNC_2 (&VAR_1, "hillow", 0, 0, 0);
  FUNC_0 ("out = %d\n", VAR_2);
 }
 FUNC_3 (&VAR_1);
 return 0;
}
