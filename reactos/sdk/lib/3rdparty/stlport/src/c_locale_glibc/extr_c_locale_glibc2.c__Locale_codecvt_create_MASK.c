
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Locale_name_hint {int dummy; } ;
struct _Locale_codecvt {int dummy; } ;


 int VAR_0 ;

struct _Locale_codecvt *FUNC_0(const char *VAR_1, struct _Locale_name_hint* VAR_2,
                                               int *VAR_3) {

  if (VAR_1[0] == 'C' && VAR_1[1] == 0)
  { return (struct _Locale_codecvt*)0x01; }
  *VAR_3 = VAR_0; return 0;
}
