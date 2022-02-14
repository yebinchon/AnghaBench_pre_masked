
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Address; void* Active; int PrevContent; } ;
typedef int PKTRAP_FRAME ;
typedef int PCHAR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 void* VAR_0 ;
 void* VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(PKTRAP_FRAME VAR_4)
{
  unsigned VAR_5;

  FUNC_0("GspUnloadHwBreakpoints\n");

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
      if (VAR_3[VAR_5].Active)
        {
          VAR_1 = VAR_0;
          FUNC_2((PCHAR) VAR_3[VAR_5].Address,
                          VAR_3[VAR_5].PrevContent);
          VAR_3[VAR_5].Active = VAR_0;
          if (VAR_1)
            {
              FUNC_1("Failed to remove software breakpoint from 0x%p\n",
                      VAR_3[VAR_5].Address);
            }
          else
            {
              FUNC_0("Successfully removed software breakpoint from 0x%p\n",
                     VAR_3[VAR_5].Address);
            }
        }
    }
}
