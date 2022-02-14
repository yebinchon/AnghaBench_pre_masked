
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_7__ {char* decimal_point; char* thousands_sep; char* grouping; TYPE_1__ lc; int cp; } ;
typedef TYPE_2__ _Locale_numeric_t ;
typedef int _Locale_lcid_t ;


 int FUNC_0 (scalar_t__,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,scalar_t__*,int ,int *) ;
 int FUNC_3 (scalar_t__,int ,int ,char*,int,int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

_Locale_numeric_t* FUNC_7(const char * VAR_6, _Locale_lcid_t* VAR_7, int *VAR_8) {
  wchar_t VAR_9[4];
  char *VAR_10;
  int VAR_11;

  _Locale_numeric_t *VAR_12 = (_Locale_numeric_t*)FUNC_5(sizeof(_Locale_numeric_t));
  if (!VAR_12) { *VAR_8 = VAR_4; return VAR_12; }
  FUNC_6(VAR_12, 0, sizeof(_Locale_numeric_t));

  if (FUNC_2(VAR_6, &VAR_12->lc.id, VAR_12->cp, VAR_7) == -1)
  { FUNC_4(VAR_12); *VAR_8 = VAR_5; return ((void*)0); }




  FUNC_3(VAR_12->lc.id, VAR_12->cp, VAR_1, VAR_12->decimal_point, 4, VAR_9, 4);
  FUNC_3(VAR_12->lc.id, VAR_12->cp, VAR_3, VAR_12->thousands_sep, 4, VAR_9, 4);






  if (VAR_12->lc.id != VAR_0) {
    VAR_11 = FUNC_0(VAR_12->lc.id, VAR_2, ((void*)0), 0);
    VAR_10 = (char*)FUNC_5(VAR_11);
    if (!VAR_10) { FUNC_4(VAR_12); *VAR_8 = VAR_4; return ((void*)0); }
    FUNC_0(VAR_12->lc.id, VAR_2, VAR_10, VAR_11);
    FUNC_1(VAR_10);
    VAR_12->grouping = VAR_10;
  }
  else {
    VAR_12->grouping = (char*)FUNC_5(1);
    if (!VAR_12->grouping) { FUNC_4(VAR_12); *VAR_8 = VAR_4; return ((void*)0); }
    VAR_12->grouping[0] = 0;
  }

  return VAR_12;
}
