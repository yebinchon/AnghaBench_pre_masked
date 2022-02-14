
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int **,int *) ;
 int FUNC_2 (char*,int,int) ;

int
FUNC_3(PullFilter *VAR_1, int VAR_2, uint8 *VAR_3)
{
 int VAR_4;
 uint8 *VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 != VAR_2)
 {
  FUNC_2("pullf_read_fixed: need=%d got=%d", VAR_2, VAR_4);
  return VAR_0;
 }
 if (VAR_5 != VAR_3)
  FUNC_0(VAR_3, VAR_5, VAR_2);
 return 0;
}
