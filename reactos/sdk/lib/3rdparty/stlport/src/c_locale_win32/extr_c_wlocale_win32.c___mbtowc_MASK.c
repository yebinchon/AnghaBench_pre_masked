
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {scalar_t__ cp; int mbtowc_flags; int cleads; } ;
typedef TYPE_1__ _Locale_codecvt_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,char const*,unsigned int,int *,int) ;
 scalar_t__ FUNC_2 (char const,int ) ;

__attribute__((used)) static int FUNC_3(_Locale_codecvt_t *VAR_2, wchar_t *VAR_3, const char *VAR_4, unsigned int VAR_5) {
  int VAR_6;

  if (VAR_2->cp == VAR_0 || VAR_2->cp == VAR_1) {
    VAR_6 = FUNC_1(VAR_2->cp, VAR_2->mbtowc_flags, VAR_4, VAR_5, VAR_3, 1);
    if (VAR_6 == 0) {
      switch (FUNC_0()) {
        case 128:
          return -2;
        default:
          return -1;
      }
    }
  }
  else {
    if (VAR_5 == 1 && FUNC_2(*VAR_4, VAR_2->cleads)) return (size_t)-2;
    VAR_6 = FUNC_1(VAR_2->cp, VAR_2->mbtowc_flags, VAR_4, VAR_5, VAR_3, 1);
    if (VAR_6 == 0) return -1;
  }

  return VAR_6;
}
