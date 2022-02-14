
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_13__ {int QuadPart; } ;
struct TYPE_12__ {int QuadPart; } ;
struct TYPE_14__ {int ulVal; int lVal; int uiVal; int iVal; TYPE_2__ hVal; TYPE_1__ uhVal; } ;
struct TYPE_15__ {int vt; TYPE_3__ u; } ;
typedef int SHORT ;
typedef TYPE_4__ PROPVARIANT ;
typedef int LONGLONG ;
typedef int LONG ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int*) ;
 int FUNC_4 (TYPE_4__*,int*) ;
 int FUNC_5 (TYPE_4__*,int*) ;
 int FUNC_6 (TYPE_4__*,int*) ;
 int FUNC_7 (TYPE_4__*,int*) ;
 int FUNC_8 (TYPE_4__*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(void)
{
    PROPVARIANT VAR_8;
    SHORT VAR_9;
    USHORT VAR_10;
    LONG VAR_11;
    ULONG VAR_12;
    LONGLONG VAR_13;
    ULONGLONG VAR_14;
    HRESULT VAR_15;

    VAR_8.vt = 0xdead;
    VAR_15 = FUNC_2(&VAR_8);
    FUNC_9 (FUNC_0(VAR_15), "PropVariantClear fails on invalid vt.\n");

    VAR_8.vt = VAR_4;
    FUNC_2(&VAR_8);

    VAR_8.vt = VAR_4;
    VAR_8.u.hVal.QuadPart = (ULONGLONG)1 << 63;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == (ULONGLONG)1 << 63, "got wrong value %s\n", FUNC_10(VAR_13));

    VAR_15 = FUNC_8(&VAR_8, &VAR_14);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_15 = FUNC_4(&VAR_8, &VAR_11);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_15 = FUNC_7(&VAR_8, &VAR_12);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_15 = FUNC_3(&VAR_8, &VAR_9);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_15 = FUNC_6(&VAR_8, &VAR_10);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_8.vt = VAR_7;
    VAR_8.u.uhVal.QuadPart = 5;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == 5, "got wrong value %s\n", FUNC_10(VAR_13));

    VAR_15 = FUNC_8(&VAR_8, &VAR_14);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_14 == 5, "got wrong value %s\n", FUNC_10(VAR_14));

    VAR_15 = FUNC_4(&VAR_8, &VAR_11);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_11 == 5, "got wrong value %d\n", VAR_11);

    VAR_15 = FUNC_7(&VAR_8, &VAR_12);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_12 == 5, "got wrong value %d\n", VAR_12);

    VAR_15 = FUNC_3(&VAR_8, &VAR_9);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_9 == 5, "got wrong value %d\n", VAR_9);

    VAR_15 = FUNC_6(&VAR_8, &VAR_10);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_10 == 5, "got wrong value %d\n", VAR_10);

    VAR_8.vt = VAR_4;
    VAR_8.u.hVal.QuadPart = -5;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == -5, "got wrong value %s\n", FUNC_10(VAR_13));

    VAR_15 = FUNC_8(&VAR_8, &VAR_14);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_15 = FUNC_4(&VAR_8, &VAR_11);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_11 == -5, "got wrong value %d\n", VAR_11);

    VAR_15 = FUNC_7(&VAR_8, &VAR_12);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_15 = FUNC_3(&VAR_8, &VAR_9);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_9 == -5, "got wrong value %d\n", VAR_9);

    VAR_15 = FUNC_6(&VAR_8, &VAR_10);
    FUNC_9(VAR_15 == FUNC_1(VAR_0), "hr=%x\n", VAR_15);

    VAR_8.vt = VAR_6;
    VAR_8.u.ulVal = 6;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == 6, "got wrong value %s\n", FUNC_10(VAR_13));

    VAR_8.vt = VAR_3;
    VAR_8.u.lVal = -6;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == -6, "got wrong value %s\n", FUNC_10(VAR_13));

    VAR_8.vt = VAR_5;
    VAR_8.u.uiVal = 7;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == 7, "got wrong value %s\n", FUNC_10(VAR_13));

    VAR_8.vt = VAR_2;
    VAR_8.u.iVal = -7;

    VAR_15 = FUNC_5(&VAR_8, &VAR_13);
    FUNC_9(VAR_15 == VAR_1, "hr=%x\n", VAR_15);
    FUNC_9(VAR_13 == -7, "got wrong value %s\n", FUNC_10(VAR_13));
}
