
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int _Locale_lcid_t ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ lc; int cp; } ;
typedef TYPE_2__ _Locale_collate_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int*,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

_Locale_collate_t* FUNC_4(const char * VAR_3, _Locale_lcid_t* VAR_4, int *VAR_5) {
  _Locale_collate_t *VAR_6 = (_Locale_collate_t*)FUNC_2(sizeof(_Locale_collate_t));
  if (!VAR_6) { *VAR_5 = VAR_1; return VAR_6; }
  FUNC_3(VAR_6, 0, sizeof(_Locale_collate_t));

  if (FUNC_0(VAR_3, &VAR_6->lc.id, VAR_6->cp, VAR_4) == -1)
  { FUNC_1(VAR_6); *VAR_5 = VAR_2; return ((void*)0); }






  return VAR_6;
}
