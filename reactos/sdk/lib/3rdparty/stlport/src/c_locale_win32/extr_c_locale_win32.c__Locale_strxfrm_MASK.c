
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ lc; int cp; } ;
typedef TYPE_2__ _Locale_collate_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int,char*,int) ;
 int FUNC_1 (char*,size_t,char const*,size_t) ;
 char* FUNC_2 (scalar_t__,scalar_t__,char const*,size_t,size_t*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

size_t FUNC_6(_Locale_collate_t* VAR_2,
                       char* VAR_3, size_t VAR_4,
                       const char* VAR_5, size_t VAR_6) {
  int VAR_7;




  if (VAR_6 > VAR_0) {
    if (VAR_3 != 0) {
      FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
    }
    return VAR_6;
  }
  if (VAR_4 > VAR_0) {

    VAR_4 = VAR_0;
  }

  if (FUNC_3(VAR_2->lc.id) == FUNC_4(VAR_2->cp))
    VAR_7 = FUNC_0(VAR_2->lc.id, VAR_1, VAR_5, (int)VAR_6, VAR_3, (int)VAR_4);
  else {
    char *VAR_8;
    size_t VAR_9;
    VAR_8 = FUNC_2(FUNC_4(VAR_2->cp), FUNC_3(VAR_2->lc.id), VAR_5, VAR_6, &VAR_9);

    VAR_7 = FUNC_0(VAR_2->lc.id, VAR_1, VAR_8, (int)VAR_9, VAR_3, (int)VAR_4);
    FUNC_5(VAR_8);
  }
  return VAR_7 != 0 ? VAR_7 - 1 : 0;
}
