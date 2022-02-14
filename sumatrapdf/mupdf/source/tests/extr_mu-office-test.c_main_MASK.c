
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MuOfficeLib ;
typedef int MuError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(int VAR_3, char **VAR_4)
{
 MuOfficeLib *VAR_5;
 MuError VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_5);
 if (VAR_6)
 {
  FUNC_2(VAR_2, "Failed to create lib instance: error=%d\n", VAR_6);
  return VAR_0;
 }

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_5);

 return VAR_1;
}
