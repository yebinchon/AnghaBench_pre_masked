
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;

bool
FUNC_2(int VAR_2, double *VAR_3)
{
 double VAR_4 = 0.0;
 int VAR_5;





 VAR_2 = FUNC_1(FUNC_0(VAR_2, 0), VAR_1);
 for (VAR_5 = 1; VAR_5 <= VAR_2; VAR_5++)
  VAR_4 += (double) VAR_2 / (double) VAR_5;

 *VAR_3 = VAR_4;


 return (VAR_4 >= 0.0 && VAR_4 < (double) VAR_0);
}
