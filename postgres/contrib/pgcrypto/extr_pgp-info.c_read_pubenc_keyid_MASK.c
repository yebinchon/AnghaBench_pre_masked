
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int*) ;

__attribute__((used)) static int
FUNC_3(PullFilter *VAR_0, uint8 *VAR_1)
{
 uint8 VAR_2;
 int VAR_3;

 FUNC_0(VAR_0, VAR_2);
 if (VAR_2 != 3)
  return -1;

 VAR_3 = FUNC_2(VAR_0, 8, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_0);
}
