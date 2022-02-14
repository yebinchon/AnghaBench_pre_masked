
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_4__ {int BasePage; scalar_t__ MemoryType; int PageCount; } ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PFREELDR_MEMORY_DESCRIPTOR ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__,int ,char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int,int ) ;

ULONG
FUNC_6(
    PFREELDR_MEMORY_DESCRIPTOR VAR_13)
{
    ULONG VAR_14;


    FUNC_3(VAR_13, 0x1000, VAR_12 - 0x1000, VAR_4, "BIOS area");
    FUNC_3(VAR_13, VAR_12, VAR_11 - VAR_12, VAR_7, "FreeLdr stack");
    FUNC_3(VAR_13, VAR_2, VAR_3, VAR_6, "FreeLdr image");


    VAR_0 = (PUCHAR)FUNC_0(VAR_2 + VAR_3, VAR_9);
    VAR_1 = VAR_9;


    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
    {
        if ((VAR_13[VAR_14].BasePage > (VAR_2 / VAR_9)) &&
            (VAR_13[VAR_14].MemoryType == VAR_5))
        {

            VAR_0 = (PVOID)(VAR_13[VAR_14].BasePage * VAR_9);
            VAR_1 = FUNC_5(VAR_13[VAR_14].PageCount * VAR_9,
                                     VAR_8);
            break;
        }
    }

    FUNC_4("DiskReadBuffer=0x%p, DiskReadBufferSize=0x%lx\n",
          VAR_0, VAR_1);

    FUNC_1(VAR_1 > 0);


    FUNC_3(VAR_13,
                  (ULONG_PTR)VAR_0,
                  VAR_1,
                  VAR_4,
                  "Disk read buffer");

    FUNC_4("Dumping resulting memory map:\n");
    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
    {
        FUNC_4("BasePage=0x%lx, PageCount=0x%lx, Type=%s\n",
              VAR_13[VAR_14].BasePage,
              VAR_13[VAR_14].PageCount,
              FUNC_2(VAR_13[VAR_14].MemoryType));
    }
    return VAR_10;
}
