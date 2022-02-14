
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_7__ {char* decimal_point; char* thousands_sep; char* grouping; char* curr_symbol; char* negative_sign; char* positive_sign; char* int_curr_symbol; int cp; TYPE_1__ lc; void* int_frac_digits; void* frac_digits; } ;
typedef TYPE_2__ _Locale_monetary_t ;
typedef int _Locale_lcid_t ;


 int FUNC_0 (scalar_t__,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,scalar_t__*,int ,int *) ;
 int FUNC_3 (scalar_t__,int ,int ,char*,int,int *,int) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

_Locale_monetary_t* FUNC_8(const char * VAR_12, _Locale_lcid_t* VAR_13, int *VAR_14) {
  char *VAR_15;
  int VAR_16;
  char VAR_17[3];
  wchar_t VAR_18[6];

  _Locale_monetary_t *VAR_19 = (_Locale_monetary_t*)FUNC_6(sizeof(_Locale_monetary_t));
  if (!VAR_19) { *VAR_14 = VAR_10; return VAR_19; }
  FUNC_7(VAR_19, 0, sizeof(_Locale_monetary_t));

  if (FUNC_2(VAR_12, &VAR_19->lc.id, VAR_19->cp, VAR_13) == -1)
  { FUNC_5(VAR_19); *VAR_14 = VAR_11; return ((void*)0); }

  if (VAR_19->lc.id != VAR_0) {

    FUNC_3(VAR_19->lc.id, VAR_19->cp, VAR_4, VAR_19->decimal_point, 4, VAR_18, 6);
    FUNC_3(VAR_19->lc.id, VAR_19->cp, VAR_9, VAR_19->thousands_sep, 4, VAR_18, 6);

    VAR_16 = FUNC_0(VAR_19->lc.id, VAR_5, ((void*)0), 0);
    VAR_15 = (char*)FUNC_6(VAR_16);
    if (!VAR_15)
    { VAR_19->grouping = ((void*)0); *VAR_14 = VAR_10; return VAR_19; }
    FUNC_0(VAR_19->lc.id, VAR_5, VAR_15, VAR_16);
    FUNC_1(VAR_15);
    VAR_19->grouping = VAR_15;

    FUNC_3(VAR_19->lc.id, VAR_19->cp, VAR_3, VAR_19->curr_symbol, 6, VAR_18, 6);
    FUNC_3(VAR_19->lc.id, VAR_19->cp, VAR_7, VAR_19->negative_sign, 5, VAR_18, 6);
    FUNC_3(VAR_19->lc.id, VAR_19->cp, VAR_8, VAR_19->positive_sign, 5, VAR_18, 6);

    FUNC_0(VAR_19->lc.id, VAR_1, VAR_17, 3);
    VAR_19->frac_digits = FUNC_4(VAR_17);

    FUNC_0(VAR_19->lc.id, VAR_2, VAR_17, 3);
    VAR_19->int_frac_digits = FUNC_4(VAR_17);

    FUNC_3(VAR_19->lc.id, VAR_19->cp, VAR_6, VAR_19->int_curr_symbol, 5, VAR_18, 6);





    if (VAR_19->int_curr_symbol[3] == 0) {
      VAR_19->int_curr_symbol[3] = ' ';
      VAR_19->int_curr_symbol[4] = 0;
    }
  }


  return VAR_19;
}
