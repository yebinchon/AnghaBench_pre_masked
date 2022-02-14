
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG_PTR ;
typedef int UCHAR ;
struct TYPE_10__ {int si; } ;
struct TYPE_9__ {int ds; } ;
struct TYPE_8__ {int ah; int dl; } ;
struct TYPE_11__ {TYPE_3__ w; TYPE_2__ x; TYPE_1__ b; } ;
typedef TYPE_4__ REGS ;
typedef int PVOID ;
typedef int* PUSHORT ;
typedef int* PULONG ;
typedef int* PUCHAR ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__) ;
 int FUNC_2 (int,TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int ,int*,int) ;

BOOLEAN FUNC_5(UCHAR VAR_5, PVOID VAR_6, USHORT VAR_7)
{
    REGS VAR_8, VAR_9;
    PUSHORT VAR_10 = (PUSHORT)(VAR_0);

    FUNC_3("DiskGetExtendedDriveParameters()\n");

    if (!FUNC_0(VAR_5))
        return VAR_3;


    *VAR_10 = VAR_7;
    VAR_8.b.ah = 0x48;
    VAR_8.b.dl = VAR_5;
    VAR_8.x.ds = VAR_2;
    VAR_8.w.si = VAR_1;


    FUNC_2(0x13, &VAR_8, &VAR_9);
    if (!FUNC_1(VAR_9))
        return VAR_3;

    FUNC_4(VAR_6, VAR_10, VAR_7);
    return VAR_4;
}
