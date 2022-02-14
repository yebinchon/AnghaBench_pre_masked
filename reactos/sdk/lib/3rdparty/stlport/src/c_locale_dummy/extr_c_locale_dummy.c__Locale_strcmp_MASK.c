
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Locale_collate {int dummy; } ;


 int FUNC_0 (char*,int,char const*,size_t) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(struct _Locale_collate* VAR_0,
                    const char* VAR_1, size_t VAR_2, const char* VAR_3, size_t VAR_4) {
  int VAR_5 = 0;
  char VAR_6[64], VAR_7[64];
  while (VAR_2 > 0 || VAR_4 > 0) {
    size_t VAR_8 = VAR_2 < 63 ? VAR_2 : 63;
    size_t VAR_9 = VAR_4 < 63 ? VAR_4 : 63;
    FUNC_0(VAR_6, 64, VAR_1, VAR_8); VAR_6[VAR_8] = 0;
    FUNC_0(VAR_7, 64, VAR_3, VAR_9); VAR_7[VAR_9] = 0;

    VAR_5 = FUNC_1(VAR_6, VAR_7);
    if (VAR_5 != 0) return VAR_5 < 0 ? -1 : 1;
    VAR_1 += VAR_8; VAR_2 -= VAR_8;
    VAR_3 += VAR_9; VAR_4 -= VAR_9;
  }
  return VAR_5 == 0 ? 0 : (VAR_5 < 0 ? -1 : 1);
}
