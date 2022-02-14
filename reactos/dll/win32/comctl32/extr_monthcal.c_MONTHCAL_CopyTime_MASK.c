
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wSecond; int wMinute; int wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;



__attribute__((used)) static void FUNC_0(const SYSTEMTIME *VAR_0, SYSTEMTIME *VAR_1)
{
  VAR_1->wHour = VAR_0->wHour;
  VAR_1->wMinute = VAR_0->wMinute;
  VAR_1->wSecond = VAR_0->wSecond;
}
