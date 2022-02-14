
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_collate_t ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,scalar_t__,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(_Locale_collate_t* VAR_1,
                               const char* VAR_2, size_t VAR_3,
                               const char* VAR_4, size_t VAR_5) {
  int VAR_6 = VAR_0;
  while (VAR_3 > 0 || VAR_5 > 0) {
    DWORD VAR_7 = FUNC_1(VAR_3);
    DWORD VAR_8 = FUNC_1(VAR_5);
    VAR_6 = FUNC_0(VAR_1->lc.id, 0, VAR_2, VAR_7, VAR_4, VAR_8);
    if (VAR_6 != VAR_0)
      break;
    VAR_3 -= VAR_7;
    VAR_5 -= VAR_8;
  }
  return VAR_6;
}
