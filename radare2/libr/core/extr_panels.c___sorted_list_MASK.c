
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RList ;
typedef int RCore ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;

RList *FUNC_3(RCore *VAR_1, char *VAR_2[], int VAR_3) {
 RList *VAR_4 = FUNC_1 ();
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_2[VAR_5]) {
   (void)FUNC_0 (VAR_4, VAR_2[VAR_5]);
  }
 }
 FUNC_2 (VAR_4, VAR_0);
 return VAR_4;
}
