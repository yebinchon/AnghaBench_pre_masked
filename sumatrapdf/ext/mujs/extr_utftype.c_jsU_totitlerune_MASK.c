
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const Rune ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (scalar_t__ const,int ,int,int) ;
 int FUNC_1 (int ) ;

Rune
FUNC_2(Rune VAR_1)
{
 const Rune *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0, FUNC_1(VAR_0)/2, 2);
 if(VAR_2 && VAR_1 == VAR_2[0])
  return VAR_1 + VAR_2[1] - 500;
 return VAR_1;
}
