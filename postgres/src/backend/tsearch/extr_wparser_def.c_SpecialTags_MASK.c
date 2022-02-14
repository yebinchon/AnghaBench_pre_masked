
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ignore; int token; TYPE_1__* state; } ;
struct TYPE_4__ {int lenchartoken; } ;
typedef TYPE_2__ TParser ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(TParser *VAR_0)
{
 switch (VAR_0->state->lenchartoken)
 {
  case 8:
   if (FUNC_0(VAR_0->token, "</script", 8) == 0)
    VAR_0->ignore = 0;
   break;
  case 7:
   if (FUNC_0(VAR_0->token, "</style", 7) == 0)
    VAR_0->ignore = 0;
   else if (FUNC_0(VAR_0->token, "<script", 7) == 0)
    VAR_0->ignore = 1;
   break;
  case 6:
   if (FUNC_0(VAR_0->token, "<style", 6) == 0)
    VAR_0->ignore = 1;
   break;
  default:
   break;
 }
}
