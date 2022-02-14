
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tjscalingfactor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;

tjscalingfactor *FUNC_1(int *VAR_4)
{
  if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_0,
   "tjGetScalingFactors(): Invalid argument");
  return ((void*)0);
 }

 *VAR_4=VAR_1;
 return (tjscalingfactor *)VAR_3;
}
