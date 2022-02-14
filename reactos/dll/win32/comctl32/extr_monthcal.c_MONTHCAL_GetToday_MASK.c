
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int todaysDate; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_1(const MONTHCAL_INFO *VAR_2, SYSTEMTIME *VAR_3)
{
  FUNC_0("%p\n", VAR_3);

  if(!VAR_3) return VAR_0;
  *VAR_3 = VAR_2->todaysDate;
  return VAR_1;
}
