
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ lc; int cp; } ;
typedef TYPE_2__ _Locale_collate_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (scalar_t__,scalar_t__,char const*,size_t,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(_Locale_collate_t* VAR_2,
                   const char* VAR_3, size_t VAR_4,
                   const char* VAR_5, size_t VAR_6) {
  int VAR_7;
  if (FUNC_2(VAR_2->lc.id) == FUNC_3(VAR_2->cp)) {
    VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  }
  else {
    char *VAR_8, *VAR_9;
    size_t VAR_10, VAR_11;
    VAR_8 = FUNC_1(FUNC_3(VAR_2->cp), FUNC_2(VAR_2->lc.id), VAR_3, VAR_4, &VAR_10);
    VAR_9 = FUNC_1(FUNC_3(VAR_2->cp), FUNC_2(VAR_2->lc.id), VAR_5, VAR_6, &VAR_11);

    VAR_7 = FUNC_0(VAR_2, VAR_8, VAR_10, VAR_9, VAR_11);
    FUNC_4(VAR_8); FUNC_4(VAR_9);
  }
  return (VAR_7 == VAR_0) ? 0 : (VAR_7 == VAR_1) ? -1 : 1;
}
