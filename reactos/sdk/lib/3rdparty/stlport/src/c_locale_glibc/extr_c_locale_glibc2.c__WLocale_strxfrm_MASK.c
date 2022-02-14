
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct _Locale_collate {int dummy; } ;
typedef int locale_t ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,size_t) ;
 size_t FUNC_3 (scalar_t__*,scalar_t__ const*,size_t,int ) ;

size_t FUNC_4( struct _Locale_collate *VAR_0,
                        wchar_t *VAR_1, size_t VAR_2,
                        const wchar_t *VAR_3, size_t VAR_4 )
{
  const wchar_t *VAR_5;
  wchar_t *VAR_6 = ((void*)0);
  size_t VAR_7;

  if (VAR_4 == 0)
  {
    if (VAR_1 != ((void*)0)) VAR_1[0] = 0;
    return 0;
  }
  if (VAR_3[VAR_4] != 0) {
    VAR_6 = FUNC_1((VAR_4 + 1) * sizeof(wchar_t));
    FUNC_2(VAR_6, VAR_3, VAR_4);
    VAR_6[VAR_4] = 0;
    VAR_5 = VAR_6;
  }
  else
    VAR_5 = VAR_3;
  VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_2, (locale_t)VAR_0);
  if (VAR_6 != ((void*)0)) FUNC_0(VAR_6);
  return VAR_7;
}
