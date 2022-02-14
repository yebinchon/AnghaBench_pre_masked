
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARTYPE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static BOOL FUNC_0(VARTYPE VAR_11, VARTYPE VAR_12)
{
  BOOL VAR_13 = VAR_0;


  if ((VAR_11 <= VAR_6 || VAR_11 == VAR_8 || VAR_11 == VAR_4) &&
      VAR_11 != (VARTYPE)15 &&
      (VAR_11 < (VARTYPE)24 || VAR_11 > (VARTYPE)31) &&
      (!(VAR_12 & (VAR_3|VAR_2)) || VAR_11 > VAR_7) &&
      (VAR_12 == 0 || VAR_12 == VAR_3 || VAR_12 == VAR_2 ||
       VAR_12 == (VAR_2|VAR_3)))
    VAR_13 = VAR_1;

  if (!VAR_10 && (VAR_11 == VAR_5 || VAR_11 == VAR_9))
    VAR_13 = VAR_0;
  return VAR_13;
}
