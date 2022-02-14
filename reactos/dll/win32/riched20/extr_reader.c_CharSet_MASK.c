
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ansiCodePage; int rtfMinor; } ;
typedef TYPE_1__ RTF_Info ;


 scalar_t__ VAR_0 ;





__attribute__((used)) static void
FUNC_0(RTF_Info *VAR_1)
{
 if (VAR_1->ansiCodePage == VAR_0)
  return;

        switch (VAR_1->rtfMinor)
        {
        case 131:
                VAR_1->ansiCodePage = 1252;
                break;
        case 130:
                VAR_1->ansiCodePage = 10000;
                break;
        case 129:
                VAR_1->ansiCodePage = 437;
                break;
        case 128:
                VAR_1->ansiCodePage = 850;
                break;
        }
}
