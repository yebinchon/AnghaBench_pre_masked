
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct _Locale_collate {int dummy; } ;
typedef int locale_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,size_t) ;

int FUNC_2(struct _Locale_collate *VAR_0,
                    const wchar_t *VAR_1, size_t VAR_2,
                    const wchar_t *VAR_3, size_t VAR_4) {
  int VAR_5 = 0;
  wchar_t VAR_6[64], VAR_7[64];
  while (VAR_2 > 0 || VAR_4 > 0) {
    size_t VAR_8 = VAR_2 < 63 ? VAR_2 : 63;
    size_t VAR_9 = VAR_4 < 63 ? VAR_4 : 63;
    FUNC_1(VAR_6, VAR_1, VAR_8); VAR_6[VAR_8] = 0;
    FUNC_1(VAR_7, VAR_3, VAR_9); VAR_7[VAR_9] = 0;

    VAR_5 = FUNC_0(VAR_6, VAR_7, (locale_t)VAR_0);
    if (VAR_5 != 0) return VAR_5;
    VAR_1 += VAR_8; VAR_2 -= VAR_8;
    VAR_3 += VAR_9; VAR_4 -= VAR_9;
  }
  return VAR_5;
}
