
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rangeValid; int minDate; int maxDate; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;


 int FUNC_0 (char*,int *) ;

__attribute__((used)) static LRESULT
FUNC_1(const MONTHCAL_INFO *VAR_0, SYSTEMTIME *VAR_1)
{
  FUNC_0("%p\n", VAR_1);

  if (!VAR_1) return 0;

  VAR_1[1] = VAR_0->maxDate;
  VAR_1[0] = VAR_0->minDate;

  return VAR_0->rangeValid;
}
