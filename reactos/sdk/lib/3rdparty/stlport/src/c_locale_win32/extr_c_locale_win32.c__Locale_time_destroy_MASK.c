
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* long_date_time_format; struct TYPE_4__* date_time_format; struct TYPE_4__* time_format; struct TYPE_4__* long_date_format; struct TYPE_4__* date_format; struct TYPE_4__** abbrev_dayofweek; struct TYPE_4__** dayofweek; struct TYPE_4__** abbrev_month; struct TYPE_4__** month; } ;
typedef TYPE_1__ _Locale_time_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(_Locale_time_t* VAR_0) {
  int VAR_1;
  if (!VAR_0) return;

  for (VAR_1 = 0; VAR_1 < 12; ++VAR_1) {
    if (VAR_0->month[VAR_1]) FUNC_0(VAR_0->month[VAR_1]);
    if (VAR_0->abbrev_month[VAR_1]) FUNC_0(VAR_0->abbrev_month[VAR_1]);
  }

  for (VAR_1 = 0; VAR_1 < 7; ++VAR_1) {
    if (VAR_0->dayofweek[VAR_1]) FUNC_0(VAR_0->dayofweek[VAR_1]);
    if (VAR_0->abbrev_dayofweek[VAR_1]) FUNC_0(VAR_0->abbrev_dayofweek[VAR_1]);
  }

  if (VAR_0->date_format) FUNC_0(VAR_0->date_format);
  if (VAR_0->long_date_format) FUNC_0(VAR_0->long_date_format);
  if (VAR_0->time_format) FUNC_0(VAR_0->time_format);
  if (VAR_0->date_time_format) FUNC_0(VAR_0->date_time_format);
  if (VAR_0->long_date_time_format) FUNC_0(VAR_0->long_date_time_format);

  FUNC_0(VAR_0);
}
