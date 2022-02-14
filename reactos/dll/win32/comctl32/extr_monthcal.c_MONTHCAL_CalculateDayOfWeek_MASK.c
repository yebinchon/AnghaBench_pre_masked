
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int wDayOfWeek; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int FILETIME ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_3(SYSTEMTIME *VAR_1, BOOL VAR_2)
{
  SYSTEMTIME VAR_3 = VAR_0;
  FILETIME VAR_4;

  FUNC_1(VAR_1, &VAR_3);

  FUNC_2(&VAR_3, &VAR_4);
  FUNC_0(&VAR_4, &VAR_3);

  if (VAR_2) VAR_1->wDayOfWeek = VAR_3.wDayOfWeek;

  return VAR_3.wDayOfWeek;
}
