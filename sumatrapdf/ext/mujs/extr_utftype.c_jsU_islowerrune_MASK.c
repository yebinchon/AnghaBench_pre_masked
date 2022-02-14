
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const Rune ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (scalar_t__ const,int ,int,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(Rune VAR_2)
{
 const Rune *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, FUNC_1(VAR_1)/3, 3);
 if(VAR_3 && VAR_2 >= VAR_3[0] && VAR_2 <= VAR_3[1])
  return 1;
 VAR_3 = FUNC_0(VAR_2, VAR_0, FUNC_1(VAR_0)/2, 2);
 if(VAR_3 && VAR_2 == VAR_3[0])
  return 1;
 return 0;
}
