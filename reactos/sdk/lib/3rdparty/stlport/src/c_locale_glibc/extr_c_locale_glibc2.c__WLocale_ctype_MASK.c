
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
struct _Locale_ctype {int dummy; } ;
typedef int locale_t ;
typedef int _Locale_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

_Locale_mask_t FUNC_9( struct _Locale_ctype *VAR_9, wint_t VAR_10, _Locale_mask_t VAR_11 )
{
  _Locale_mask_t VAR_12 = 0;
  if ((VAR_11 & VAR_0) != 0 && FUNC_0(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_0;

  if ((VAR_11 & VAR_1) != 0 && FUNC_1(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_1;

  if ((VAR_11 & VAR_2) != 0 && FUNC_2(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_2;

  if ((VAR_11 & VAR_4) != 0 && FUNC_4(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_4;

  if ((VAR_11 & VAR_5) != 0 && FUNC_5(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_5;

  if ((VAR_11 & VAR_6) != 0 && FUNC_6(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_6;

  if ((VAR_11 & VAR_8) != 0 && FUNC_8(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_8;

  if ((VAR_11 & VAR_7) != 0 && FUNC_7(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_7;

  if ((VAR_11 & VAR_3) != 0 && FUNC_3(VAR_10, (locale_t)VAR_9))
    VAR_12 |= VAR_3;

  return VAR_12;
}
