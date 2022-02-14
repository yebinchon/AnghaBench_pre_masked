
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* ULONG_PTR ;
typedef int ULONG ;
struct TYPE_3__ {int Dr7; void* Dr3; void* Dr2; void* Dr1; void* Dr0; } ;
typedef TYPE_1__* PKTRAP_FRAME ;


 int FUNC_0 (char*,void*,...) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void
FUNC_4(PKTRAP_FRAME VAR_0,
                    unsigned VAR_1,
                    ULONG_PTR VAR_2,
                    ULONG VAR_3,
                    ULONG VAR_4)
{
  FUNC_0("GspLoadHwBreakpoint(0x%p, %d, 0x%p, %d)\n", VAR_0, VAR_1,
         VAR_2, VAR_4);


  VAR_0->Dr7 |= FUNC_1(VAR_1) |
                    FUNC_2(VAR_1, VAR_3) |
                    FUNC_3(VAR_1, VAR_4);

  switch (VAR_1)
    {
    case 0:
      FUNC_0("Setting DR0 to 0x%p\n", VAR_2);
      VAR_0->Dr0 = VAR_2;
      break;

    case 1:
      FUNC_0("Setting DR1 to 0x%p\n", VAR_2);
      VAR_0->Dr1 = VAR_2;
      break;

    case 2:
      FUNC_0("Setting DR2 to 0x%p\n", VAR_2);
      VAR_0->Dr2 = VAR_2;
      break;

    case 3:
      FUNC_0("Setting DR3 to 0x%p\n", VAR_2);
      VAR_0->Dr3 = VAR_2;
      break;
    }
}
