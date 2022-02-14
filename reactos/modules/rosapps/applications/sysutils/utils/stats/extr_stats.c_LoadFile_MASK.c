
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef scalar_t__ LONG ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

BOOL
FUNC_3(LPTSTR VAR_7)
{
  LONG VAR_8;

  VAR_2 = FUNC_1 (VAR_7,
    VAR_3,
    0,
    ((void*)0),
    VAR_5,
    VAR_1,
    ((void*)0));
  if (VAR_2 == VAR_4)
    return VAR_0;

  VAR_8 = FUNC_2 (VAR_2, ((void*)0));
  if (VAR_8 <= 0)
  {
    FUNC_0 (VAR_2);
    return VAR_0;
  }

  return VAR_6;
}
