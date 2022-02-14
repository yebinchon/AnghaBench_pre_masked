
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wDayOfWeek; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;



__attribute__((used)) static void FUNC_0(const SYSTEMTIME *VAR_0, SYSTEMTIME *VAR_1)
{
  VAR_1->wYear = VAR_0->wYear;
  VAR_1->wMonth = VAR_0->wMonth;
  VAR_1->wDay = VAR_0->wDay;
  VAR_1->wDayOfWeek = VAR_0->wDayOfWeek;
}
