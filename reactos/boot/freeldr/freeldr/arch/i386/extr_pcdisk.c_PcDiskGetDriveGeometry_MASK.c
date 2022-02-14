
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_15__ {int Size; int Cylinders; int SectorsPerTrack; int BytesPerSector; scalar_t__ Heads; } ;
struct TYPE_14__ {int Cylinders; int Sectors; int BytesPerSector; scalar_t__ Heads; } ;
struct TYPE_12__ {int ah; int cl; scalar_t__ dh; scalar_t__ ch; int dl; } ;
struct TYPE_11__ {int es; int di; } ;
struct TYPE_13__ {TYPE_2__ b; TYPE_1__ w; } ;
typedef TYPE_3__ REGS ;
typedef TYPE_4__* PGEOMETRY ;
typedef int ExtGeometry ;
typedef TYPE_5__ EXTENDED_GEOMETRY ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ,TYPE_5__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

BOOLEAN
FUNC_4(UCHAR VAR_2, PGEOMETRY VAR_3)
{
    EXTENDED_GEOMETRY VAR_4;
    REGS VAR_5, VAR_6;
    ULONG VAR_7;

    FUNC_3("DiskGetDriveGeometry()\n");


    VAR_4.Size = sizeof(VAR_4);
    if (FUNC_0(VAR_2, &VAR_4, VAR_4.Size))
    {
        VAR_3->Cylinders = VAR_4.Cylinders;
        VAR_3->Heads = VAR_4.Heads;
        VAR_3->Sectors = VAR_4.SectorsPerTrack;
        VAR_3->BytesPerSector = VAR_4.BytesPerSector;
        return VAR_1;
    }
    VAR_5.b.ah = 0x08;
    VAR_5.b.dl = VAR_2;
    VAR_5.w.es = 0x0000;
    VAR_5.w.di = 0x0000;


    FUNC_2(0x13, &VAR_5, &VAR_6);
    if (!FUNC_1(VAR_6))
        return VAR_0;

    VAR_7 = (VAR_6.b.cl & 0xC0) << 2;
    VAR_7 += VAR_6.b.ch;
    VAR_7++;
    VAR_3->Cylinders = VAR_7;
    VAR_3->Heads = VAR_6.b.dh + 1;
    VAR_3->Sectors = VAR_6.b.cl & 0x3F;
    VAR_3->BytesPerSector = 512;

    return VAR_1;
}
