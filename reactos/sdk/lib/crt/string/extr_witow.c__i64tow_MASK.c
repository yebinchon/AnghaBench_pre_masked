
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef unsigned int __int64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

wchar_t* FUNC_2(__int64 VAR_1, wchar_t* VAR_2, int VAR_3)
{
  wchar_t VAR_4[65];
  wchar_t* VAR_5 = VAR_4;
  int VAR_6;
  unsigned VAR_7;
  int VAR_8;
  wchar_t* VAR_9;

  if (VAR_3 > 36 || VAR_3 <= 1) {
    FUNC_0(VAR_0);
    return 0;
  }

  VAR_8 = (VAR_3 == 10 && VAR_1 < 0);
  if (VAR_8)
    VAR_7 = -VAR_1;
  else
    VAR_7 = (unsigned)VAR_1;
  while (VAR_7 || VAR_5 == VAR_4) {
    VAR_6 = VAR_7 % VAR_3;
    VAR_7 = VAR_7 / VAR_3;
    if (VAR_6 < 10)
      *VAR_5++ = VAR_6+L'0';
    else
      *VAR_5++ = VAR_6 + L'a' - 10;
  }

  if (VAR_2 == 0)
    VAR_2 = (wchar_t*)FUNC_1(((VAR_5-VAR_4)+VAR_8+1)*sizeof(wchar_t));
  VAR_9 = VAR_2;

  if (VAR_8)
    *VAR_9++ = L'-';
  while (VAR_5 > VAR_4)
    *VAR_9++ = *--VAR_5;
  *VAR_9 = 0;
  return VAR_2;
}
