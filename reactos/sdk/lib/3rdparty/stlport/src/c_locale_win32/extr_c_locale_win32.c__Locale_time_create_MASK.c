
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {char** month; char** abbrev_month; char** dayofweek; char** abbrev_dayofweek; char* date_format; char* long_date_format; char* time_format; char* date_time_format; char* long_date_time_format; char* am; char* pm; int cp; TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_time_t ;
typedef int _Locale_lcid_t ;


 int FUNC_0 (int,int,int *,int ) ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*,size_t,char*) ;
 int FUNC_3 (char*,size_t,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char const*,int*,int ,int *) ;
 int FUNC_7 (int,int ,int,char*,int,int *,int) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (size_t) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (char*) ;

_Locale_time_t* FUNC_12(const char * VAR_16, _Locale_lcid_t* VAR_17, int *VAR_18) {
  int VAR_19, VAR_20, VAR_21;
  size_t VAR_22;
  char VAR_23[80];
  wchar_t VAR_24[80];

  _Locale_time_t *VAR_25 = (_Locale_time_t*)FUNC_9(sizeof(_Locale_time_t));

  if (!VAR_25) { *VAR_18 = VAR_14; return VAR_25; }
  FUNC_10(VAR_25, 0, sizeof(_Locale_time_t));

  if (FUNC_6(VAR_16, &VAR_25->lc.id, VAR_25->cp, VAR_17) == -1)
  { FUNC_8(VAR_25); *VAR_18 = VAR_15; return ((void*)0); }






  for (VAR_20 = VAR_10; VAR_20 <= VAR_11; ++VAR_20) {
    VAR_19 = FUNC_0(VAR_25->lc.id, VAR_20, ((void*)0), 0);
    VAR_25->month[VAR_20 - VAR_10] = (char*)FUNC_9(VAR_19);
    if (!VAR_25->month[VAR_20 - VAR_10])
    { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
    FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_20, VAR_25->month[VAR_20 - VAR_10], VAR_19, VAR_24, 80);
  }

  for (VAR_20 = VAR_5; VAR_20 <= VAR_6; ++VAR_20) {
    VAR_19 = FUNC_0(VAR_25->lc.id, VAR_20, ((void*)0), 0);
    VAR_25->abbrev_month[VAR_20 - VAR_5] = (char*)FUNC_9(VAR_19);
    if (!VAR_25->abbrev_month[VAR_20 - VAR_5])
    { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
    FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_20, VAR_25->abbrev_month[VAR_20 - VAR_5], VAR_19, VAR_24, 80);
  }

  for (VAR_21 = VAR_7; VAR_21 <= VAR_8; ++VAR_21) {
    int VAR_26 = ( VAR_21 != VAR_8 ) ? VAR_21 - VAR_7 + 1 : 0;
    VAR_19 = FUNC_0(VAR_25->lc.id, VAR_21, ((void*)0), 0);
    VAR_25->dayofweek[VAR_26] = (char*)FUNC_9(VAR_19);
    if (!VAR_25->dayofweek[VAR_26])
    { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
    FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_21, VAR_25->dayofweek[VAR_26], VAR_19, VAR_24, 80);
  }

  for (VAR_21 = VAR_3; VAR_21 <= VAR_4; ++VAR_21) {
    int VAR_27 = ( VAR_21 != VAR_4 ) ? VAR_21 - VAR_3 + 1 : 0;
    VAR_19 = FUNC_0(VAR_25->lc.id, VAR_21, ((void*)0), 0);
    VAR_25->abbrev_dayofweek[VAR_27] = (char*)FUNC_9(VAR_19);
    if (!VAR_25->abbrev_dayofweek[VAR_27])
    { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
    FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_21, VAR_25->abbrev_dayofweek[VAR_27], VAR_19, VAR_24, 80);
  }

  FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_12, VAR_23, 80, VAR_24, 80);
  VAR_19 = FUNC_4(VAR_23, ((void*)0), 0);
  VAR_25->date_format = (char*)FUNC_9(VAR_19);
  if (!VAR_25->date_format)
  { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
  FUNC_4(VAR_23, VAR_25->date_format, VAR_19);

  FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_9, VAR_23, 80, VAR_24, 80);
  VAR_19 = FUNC_4(VAR_23, ((void*)0), 0);
  VAR_25->long_date_format = (char*)FUNC_9(VAR_19);
  if (!VAR_25->long_date_format)
  { FUNC_1(VAR_25);*VAR_18 = VAR_14; return ((void*)0); }
  FUNC_4(VAR_23, VAR_25->long_date_format, VAR_19);

  FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_13, VAR_23, 80, VAR_24, 80);
  VAR_19 = FUNC_5(VAR_23, ((void*)0), 0);
  VAR_25->time_format = (char*)FUNC_9(VAR_19);
  if (!VAR_25->time_format)
  { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
  FUNC_5(VAR_23, VAR_25->time_format, VAR_19);


  VAR_22 = FUNC_11(VAR_25->date_format) + FUNC_11(VAR_25->time_format) + 1 + 1 ;
  VAR_25->date_time_format = (char*)FUNC_9(VAR_22);
  if (!VAR_25->date_time_format)
  { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
  FUNC_3(VAR_25->date_time_format, VAR_22, VAR_25->date_format);
  FUNC_2(VAR_25->date_time_format, VAR_22, " ");
  FUNC_2(VAR_25->date_time_format, VAR_22, VAR_25->time_format);


  VAR_22 = FUNC_11(VAR_25->long_date_format) + FUNC_11(VAR_25->time_format) + 1 + 1 ;
  VAR_25->long_date_time_format = (char*)FUNC_9(VAR_22);
  if (!VAR_25->long_date_time_format)
  { FUNC_1(VAR_25); *VAR_18 = VAR_14; return ((void*)0); }
  FUNC_3(VAR_25->long_date_time_format, VAR_22, VAR_25->long_date_format);
  FUNC_2(VAR_25->long_date_time_format, VAR_22, " ");
  FUNC_2(VAR_25->long_date_time_format, VAR_22, VAR_25->time_format);

  FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_1, VAR_25->am, 9, VAR_24, 80);
  FUNC_7(VAR_25->lc.id, VAR_25->cp, VAR_2, VAR_25->pm, 9, VAR_24, 80);

  return VAR_25;
}
