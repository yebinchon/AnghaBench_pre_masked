
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int Type; int Address; scalar_t__ Length; } ;
struct TYPE_7__ {int Address; int Active; int PrevContent; } ;
struct TYPE_6__ {int Dr7; } ;
typedef TYPE_1__* PKTRAP_FRAME ;
typedef int PCHAR ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;



 unsigned int VAR_17 ;
 TYPE_5__* VAR_18 ;
 int FUNC_3 (TYPE_1__*,unsigned int,int,scalar_t__,int ) ;
 void* VAR_19 ;
 int FUNC_4 (int ) ;
 unsigned int VAR_20 ;
 TYPE_2__* VAR_21 ;
 int FUNC_5 (int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;

__attribute__((used)) static void
FUNC_6(PKTRAP_FRAME VAR_27)
{
  unsigned VAR_28;
  ULONG VAR_29;

  FUNC_1("GspLoadBreakpoints\n");
  FUNC_1("DR7 on entry: 0x%08x\n", VAR_27->Dr7);

  VAR_27->Dr7 &= ~(VAR_4 | VAR_5 | VAR_6 | VAR_7 |
                      VAR_0 | VAR_1 | VAR_2 | VAR_3 |
                      VAR_12 | VAR_8 |
                      VAR_13 | VAR_9 |
                      VAR_14 | VAR_10 |
                      VAR_15 | VAR_11);

  for (VAR_28 = 0; VAR_28 < VAR_17; VAR_28++)
    {
      switch(VAR_18[VAR_28].Type)
        {
        case 129:
          VAR_29 = VAR_24;
          break;
        case 128:
          VAR_29 = VAR_23;
          break;
        case 130:
          VAR_29 = VAR_22;
          break;
        default:
          FUNC_0(VAR_16);
          VAR_29 = VAR_24;
          break;
        }

      FUNC_3(VAR_27, VAR_28, VAR_18[VAR_28].Address,
                          VAR_18[VAR_28].Length - 1, VAR_29);
    }

  for (VAR_28 = 0; VAR_28 < VAR_20; VAR_28++)
    {
      if (VAR_17 + VAR_28 < VAR_26)
        {
          FUNC_1("Implementing software interrupt using hardware register\n");
          FUNC_3(VAR_27, VAR_17 + VAR_28,
                              VAR_21[VAR_28].Address, 0,
                              VAR_24);
          VAR_21[VAR_28].Active = VAR_16;
        }
      else
        {
          FUNC_1("Using real software breakpoint\n");
          VAR_19 = VAR_16;
          VAR_21[VAR_28].PrevContent = FUNC_4((PCHAR) VAR_21[VAR_28].Address);
          if (! VAR_19)
            {
              FUNC_5((PCHAR) VAR_21[VAR_28].Address, VAR_25);
            }
          VAR_21[VAR_28].Active = ! VAR_19;
          if (VAR_19)
            {
              FUNC_2("Failed to set software breakpoint at 0x%p\n",
                      VAR_21[VAR_28].Address);
            }
          else
            {
              FUNC_1("Successfully set software breakpoint at 0x%p\n",
                     VAR_21[VAR_28].Address);
    FUNC_2("Successfully set software breakpoint at 0x%p\n", VAR_21[VAR_28].Address);
            }
        }
    }

  FUNC_1("Final DR7 value 0x%08x\n", VAR_27->Dr7);
}
