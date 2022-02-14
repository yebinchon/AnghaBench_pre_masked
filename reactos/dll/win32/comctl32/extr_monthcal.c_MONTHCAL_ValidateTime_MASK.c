
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wHour; int wMinute; int wSecond; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const SYSTEMTIME *VAR_2)
{
  if((VAR_2->wHour > 24) || (VAR_2->wMinute > 59) || (VAR_2->wSecond > 59))
    return VAR_0;
  else
    return VAR_1;
}
