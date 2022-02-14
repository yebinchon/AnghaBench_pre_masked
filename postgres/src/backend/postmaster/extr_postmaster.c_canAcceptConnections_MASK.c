
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAC_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static CAC_state
FUNC_2(int VAR_17)
{
 CAC_state VAR_18 = VAR_2;
 if (VAR_16 != VAR_12 &&
  VAR_17 != VAR_1)
 {
  if (VAR_16 == VAR_14)
   VAR_18 = VAR_7;
  else if (VAR_15 > VAR_9)
   return VAR_4;
  else if (!VAR_8 &&
     (VAR_16 == VAR_13 ||
      VAR_16 == VAR_11))
   return VAR_5;
  else if (!VAR_8 &&
     VAR_16 == VAR_10)
   VAR_18 = VAR_2;
  else
   return VAR_3;
 }
 if (FUNC_0(VAR_0) >= FUNC_1())
  VAR_18 = VAR_6;

 return VAR_18;
}
