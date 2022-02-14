
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ lc; int cp; } ;
typedef TYPE_2__ _Locale_codecvt_t ;


 int VAR_0 ;
 char const* FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;

char const* FUNC_2(const _Locale_codecvt_t* VAR_1, char* VAR_2) {
  char VAR_3[VAR_0 + 1];
  FUNC_1(VAR_1->cp, VAR_3);
  return FUNC_0(VAR_1->lc.id, VAR_3, VAR_2);
}
