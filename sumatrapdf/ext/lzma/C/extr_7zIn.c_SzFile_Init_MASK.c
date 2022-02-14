
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HasStream; scalar_t__ MTimeDefined; scalar_t__ CrcDefined; scalar_t__ IsAnti; scalar_t__ IsDir; } ;
typedef TYPE_1__ CSzFileItem ;



void FUNC_0(CSzFileItem *VAR_0)
{
  VAR_0->HasStream = 1;
  VAR_0->IsDir = 0;
  VAR_0->IsAnti = 0;
  VAR_0->CrcDefined = 0;
  VAR_0->MTimeDefined = 0;
}
