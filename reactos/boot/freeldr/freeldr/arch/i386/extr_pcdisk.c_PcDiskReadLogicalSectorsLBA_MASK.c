
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* USHORT ;
typedef int ULONG_PTR ;
typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_14__ {int PacketSize; int LBABlockCount; int TransferBufferOffset; int LBAStartBlock; void* TransferBufferSegment; scalar_t__ Reserved; } ;
struct TYPE_12__ {int ah; int dl; } ;
struct TYPE_11__ {int si; } ;
struct TYPE_10__ {int ds; } ;
struct TYPE_13__ {TYPE_3__ b; TYPE_2__ w; TYPE_1__ x; } ;
typedef TYPE_4__ REGS ;
typedef scalar_t__ PVOID ;
typedef TYPE_5__* PI386_DISK_ADDRESS_PACKET ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ,int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_4__) ;
 int FUNC_6 (int,TYPE_4__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (char*,int ,int ,int,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_9(UCHAR VAR_5, ULONGLONG VAR_6, ULONG VAR_7, PVOID VAR_8)
{
    REGS VAR_9, VAR_10;
    ULONG VAR_11;
    PI386_DISK_ADDRESS_PACKET VAR_12 = (PI386_DISK_ADDRESS_PACKET)(VAR_0);

    FUNC_8("PcDiskReadLogicalSectorsLBA() DriveNumber: 0x%x SectorNumber: %I64d SectorCount: %d Buffer: 0x%x\n", VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_0(((ULONG_PTR)VAR_8) <= 0xFFFFF);


    FUNC_7(VAR_12, sizeof(*VAR_12));
    VAR_12->PacketSize = sizeof(*VAR_12);
    VAR_12->Reserved = 0;
    VAR_12->LBABlockCount = (USHORT)VAR_7;
    FUNC_0(VAR_12->LBABlockCount == VAR_7);
    VAR_12->TransferBufferOffset = ((ULONG_PTR)VAR_8) & 0x0F;
    VAR_12->TransferBufferSegment = (USHORT)(((ULONG_PTR)VAR_8) >> 4);
    VAR_12->LBAStartBlock = VAR_6;
    VAR_9.b.ah = 0x42;
    VAR_9.b.dl = VAR_5;
    VAR_9.x.ds = VAR_2;
    VAR_9.w.si = VAR_1;


    for (VAR_11=0; VAR_11<3; VAR_11++)
    {
        FUNC_6(0x13, &VAR_9, &VAR_10);


        if (FUNC_5(VAR_10))
        {
            return VAR_4;
        }

        else if (VAR_10.b.ah == 0x11)
        {
            return VAR_4;
        }

        else
        {
            FUNC_3(VAR_5);
            continue;
        }
    }


    FUNC_1("Disk Read Failed in LBA mode", VAR_10.b.ah);
    FUNC_4("Disk Read Failed in LBA mode: %x (%s) (DriveNumber: 0x%x SectorNumber: %I64d SectorCount: %d)\n",
        VAR_10.b.ah, FUNC_2(VAR_10.b.ah),
        VAR_5, VAR_6, VAR_7);

    return VAR_3;
}
