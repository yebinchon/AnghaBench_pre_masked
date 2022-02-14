
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int wMonth; int wYear; } ;
struct TYPE_10__ {int rangeValid; TYPE_1__ minDate; TYPE_1__ maxDate; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static BOOL FUNC_1(const MONTHCAL_INFO *VAR_4,
                                        SYSTEMTIME *VAR_5, BOOL VAR_6)
{
  const SYSTEMTIME *VAR_7 = ((void*)0);

  if(FUNC_0(VAR_5, &VAR_2) == 1) {
     VAR_7 = &VAR_2;
  }
  else if(FUNC_0(VAR_5, &VAR_3) == -1) {
     VAR_7 = &VAR_3;
  }
  else {
     if(VAR_4->rangeValid & VAR_0) {
        if((FUNC_0(VAR_5, &VAR_4->maxDate) == 1)) {
           VAR_7 = &VAR_4->maxDate;
        }
     }

     if(VAR_4->rangeValid & VAR_1) {
        if((FUNC_0(VAR_5, &VAR_4->minDate) == -1)) {
           VAR_7 = &VAR_4->minDate;
        }
     }
  }

  if (VAR_6 && VAR_7) {
    VAR_5->wYear = VAR_7->wYear;
    VAR_5->wMonth = VAR_7->wMonth;
  }

  return !VAR_7;
}
