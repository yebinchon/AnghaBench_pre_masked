
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Locale_collate {int dummy; } ;


 int FUNC_0 (char*,size_t,char const*,size_t) ;

size_t FUNC_1(struct _Locale_collate* VAR_0,
                       char* VAR_1, size_t VAR_2,
                       const char* VAR_3, size_t VAR_4) {
  if (VAR_1 != 0) {
    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_2 - 1); VAR_1[VAR_2 - 1] = 0;
  }
  return VAR_4;
}
