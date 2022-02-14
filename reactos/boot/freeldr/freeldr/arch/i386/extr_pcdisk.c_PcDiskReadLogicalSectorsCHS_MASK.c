
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef int ULONG_PTR ;
typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_12__ {int Sectors; int Heads; int Cylinders; int BytesPerSector; } ;
struct TYPE_10__ {int ah; int al; int ch; int cl; int dh; int dl; } ;
struct TYPE_9__ {int bx; scalar_t__ es; } ;
struct TYPE_11__ {TYPE_2__ b; TYPE_1__ w; } ;
typedef TYPE_3__ REGS ;
typedef scalar_t__ PVOID ;
typedef TYPE_4__ GEOMETRY ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_3__) ;
 int FUNC_5 (int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (int,TYPE_4__*) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOLEAN FUNC_8(UCHAR VAR_2, ULONGLONG VAR_3, ULONG VAR_4, PVOID VAR_5)
{
    UCHAR VAR_6;
    UCHAR VAR_7;
    ULONG VAR_8;
    GEOMETRY VAR_9;
    ULONG VAR_10;
    REGS VAR_11, VAR_12;
    ULONG VAR_13;

    FUNC_7("PcDiskReadLogicalSectorsCHS()\n");





    if (!FUNC_6(VAR_2, &VAR_9) ||
        VAR_9.Sectors == 0 || VAR_9.Heads == 0)
    {
        return VAR_0;
    }

    while (VAR_4)
    {




        VAR_6 = 1 + (UCHAR)(VAR_3 % VAR_9.Sectors);
        VAR_7 = (UCHAR)((VAR_3 / VAR_9.Sectors) % VAR_9.Heads);
        VAR_8 = (ULONG)((VAR_3 / VAR_9.Sectors) / VAR_9.Heads);


        if (VAR_6 > 1)
        {
            if (VAR_4 >= (VAR_9.Sectors - (VAR_6 - 1)))
                VAR_10 = (VAR_9.Sectors - (VAR_6 - 1));
            else
                VAR_10 = VAR_4;
        }
        else
        {
            if (VAR_4 >= VAR_9.Sectors)
                VAR_10 = VAR_9.Sectors;
            else
                VAR_10 = VAR_4;
        }


        if ((VAR_7 >= VAR_9.Heads) ||
            (VAR_8 >= VAR_9.Cylinders) ||
            ((VAR_10 + VAR_6) > (VAR_9.Sectors + 1)) ||
            (VAR_6 > VAR_9.Sectors))
        {
            FUNC_0("Disk read exceeds drive geometry limits.", 0);
            return VAR_0;
        }
        VAR_11.b.ah = 0x02;
        VAR_11.b.al = (UCHAR)VAR_10;
        VAR_11.b.ch = (VAR_8 & 0xFF);
        VAR_11.b.cl = (UCHAR)(VAR_6 + ((VAR_8 & 0x300) >> 2));
        VAR_11.b.dh = VAR_7;
        VAR_11.b.dl = VAR_2;
        VAR_11.w.es = (USHORT)(((ULONG_PTR)VAR_5) >> 4);
        VAR_11.w.bx = ((ULONG_PTR)VAR_5) & 0x0F;


        for (VAR_13=0; VAR_13<3; VAR_13++)
        {
            FUNC_5(0x13, &VAR_11, &VAR_12);


            if (FUNC_4(VAR_12))
            {
                break;
            }

            else if (VAR_12.b.ah == 0x11)
            {
                break;
            }

            else
            {
                FUNC_2(VAR_2);
                continue;
            }
        }


        if (VAR_13 >= 3)
        {
            FUNC_0("Disk Read Failed in CHS mode, after retrying 3 times", VAR_12.b.ah);
            FUNC_3("Disk Read Failed in CHS mode, after retrying 3 times: %x (%s) (DriveNumber: 0x%x SectorNumber: %I64d SectorCount: %d)\n",
                VAR_12.b.ah, FUNC_1(VAR_12.b.ah),
                VAR_2, VAR_3, VAR_4);
            return VAR_0;
        }







        VAR_5 = (PVOID)((ULONG_PTR)VAR_5 + (VAR_10 * VAR_9.BytesPerSector));
        VAR_4 -= VAR_10;
        VAR_3 += VAR_10;
    }

    return VAR_1;
}
