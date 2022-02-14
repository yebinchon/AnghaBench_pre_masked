
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int **) ;
 int FUNC_2 (int *,int ,int) ;

int
FUNC_3(PullFilter *VAR_0, int VAR_1, uint8 **VAR_2, uint8 *VAR_3)
{
 int VAR_4,
    VAR_5;
 uint8 *VAR_6;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4 <= 0 || VAR_4 == VAR_1)
  return VAR_4;


 FUNC_0(VAR_3, *VAR_2, VAR_4);
 *VAR_2 = VAR_3;
 VAR_1 -= VAR_4;
 VAR_5 = VAR_4;

 while (VAR_1 > 0)
 {
  VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_6);
  if (VAR_4 < 0)
  {

   FUNC_2(VAR_3, 0, VAR_5);
   return VAR_4;
  }
  if (VAR_4 == 0)
   break;
  FUNC_0(VAR_3 + VAR_5, VAR_6, VAR_4);
  VAR_5 += VAR_4;
  VAR_1 -= VAR_4;
 }
 return VAR_5;
}
