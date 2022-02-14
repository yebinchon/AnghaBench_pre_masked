
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT_PTR ;
struct TYPE_5__ {int palVersion; int palNumEntries; TYPE_1__* palPalEntry; } ;
struct TYPE_4__ {int peFlags; scalar_t__ peBlue; scalar_t__ peGreen; scalar_t__ peRed; } ;
typedef TYPE_2__ LOGPALETTE ;
typedef scalar_t__ HPALETTE ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int,int *) ;
 int VAR_2 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,char*) ;

void
FUNC_9(void)
{
    LOGPALETTE VAR_3;
    HPALETTE VAR_4;
    WORD VAR_5;

    FUNC_2(&VAR_5, sizeof(WORD), 0x77);
    VAR_3.palVersion = 0x0300;
    VAR_3.palNumEntries = 1;
    VAR_3.palPalEntry[0].peRed = 0;
    VAR_3.palPalEntry[0].peGreen = 0;
    VAR_3.palPalEntry[0].peBlue = 0;
    VAR_3.palPalEntry[0].peFlags = VAR_2;
    VAR_4 = FUNC_0(&VAR_3);
    FUNC_8(VAR_4 != 0, "CreatePalette failed, skipping tests.\n");
    if (!VAR_4) return;

    FUNC_8(FUNC_5((HANDLE)((UINT_PTR)VAR_4 & 0x0000ffff), 0, ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_6((HANDLE)((UINT_PTR)VAR_4 & 0x0000ffff), 0, ((void*)0)) == sizeof(WORD), "\n");

    FUNC_7(VAR_0);
    FUNC_8(FUNC_5((HANDLE)VAR_1, 0, ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_6((HANDLE)VAR_1, 0, ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, sizeof(WORD), ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, 0, ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, 5, ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, -5, ((void*)0)) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, sizeof(WORD), &VAR_5) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, sizeof(WORD)+2, &VAR_5) == sizeof(WORD), "\n");
    FUNC_8(FUNC_4(VAR_4, 0, &VAR_5) == 0, "\n");
    FUNC_8(FUNC_4(VAR_4, 1, &VAR_5) == 0, "\n");
    FUNC_8(FUNC_4(VAR_4, -1, &VAR_5) == sizeof(WORD), "\n");
    FUNC_8(FUNC_3() == VAR_0, "\n");
    FUNC_1(VAR_4);
    FUNC_8(FUNC_6((HANDLE)VAR_1, sizeof(WORD), &VAR_5) == 0, "\n");
    FUNC_8(FUNC_3() == VAR_0, "\n");

}
