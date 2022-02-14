
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int es; int bp; } ;
struct TYPE_8__ {int bh; } ;
struct TYPE_7__ {int eax; } ;
struct TYPE_10__ {TYPE_3__ w; TYPE_2__ b; TYPE_1__ d; } ;
typedef TYPE_4__ REGS ;
typedef int* PULONG ;


 int FUNC_0 (int,TYPE_4__*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

VOID
FUNC_1(PULONG VAR_6)
{
    REGS VAR_7;




    VAR_7.d.eax = 0x1130;
    VAR_7.b.bh = VAR_0;
    FUNC_0(0x10, &VAR_7, &VAR_7);
    VAR_6[0] = VAR_7.w.es << 4 | VAR_7.w.bp;

    VAR_7.b.bh = VAR_3;
    FUNC_0(0x10, &VAR_7, &VAR_7);
    VAR_6[1] = VAR_7.w.es << 16 | VAR_7.w.bp;

    VAR_7.b.bh = VAR_2;
    FUNC_0(0x10, &VAR_7, &VAR_7);
    VAR_6[2] = VAR_7.w.es << 16 | VAR_7.w.bp;

    VAR_7.b.bh = VAR_4;
    FUNC_0(0x10, &VAR_7, &VAR_7);
    VAR_6[3] = VAR_7.w.es << 16 | VAR_7.w.bp;

    VAR_7.b.bh = VAR_1;
    FUNC_0(0x10, &VAR_7, &VAR_7);
    VAR_6[4] = VAR_7.w.es << 16 | VAR_7.w.bp;

    VAR_7.b.bh = VAR_5;
    FUNC_0(0x10, &VAR_7, &VAR_7);
    VAR_6[5] = VAR_7.w.es << 16 | VAR_7.w.bp;
}
