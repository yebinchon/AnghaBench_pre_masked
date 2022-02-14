
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RList ;
typedef int DsoJsonObj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;

int FUNC_9 (DsoJsonObj *VAR_1, DsoJsonObj *VAR_2, DsoJsonObj *VAR_3) {
 int VAR_4 = 0;
 RList* VAR_5 = FUNC_4 (VAR_1);
 if (!VAR_5) return 0;
 if (FUNC_7 (VAR_2) != VAR_0) return 0;
 if (!VAR_3) VAR_3 = FUNC_5 ();
 if (VAR_3 && VAR_2 && !FUNC_0 (VAR_1, VAR_2)) {
  DsoJsonObj *VAR_6 = FUNC_1 (VAR_2, VAR_3);
  FUNC_8 (VAR_5, VAR_6);
  VAR_4 = 1;

 } else if (VAR_3 && VAR_2 && !FUNC_3 (VAR_1, VAR_2)) {
  DsoJsonObj *VAR_7 = FUNC_1 (VAR_2, VAR_3);
  FUNC_8 (VAR_5, VAR_7);
  VAR_4 = 1;
 } else {
  FUNC_6 (VAR_3);
  FUNC_2 (VAR_3);
 }
 return VAR_4;
}
