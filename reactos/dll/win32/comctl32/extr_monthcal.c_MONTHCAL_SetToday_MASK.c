
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int todaySet; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;


 scalar_t__ FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (char*,int const*) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_2(MONTHCAL_INFO *VAR_1, const SYSTEMTIME *VAR_2)
{
  FUNC_1("%p\n", VAR_2);

  if (VAR_2)
  {

    if (FUNC_0(VAR_1, VAR_2)) VAR_1->todaySet = VAR_0;
  }

  return 0;
}
