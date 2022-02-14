
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int WndWidth; int WndHeight; int ForegroundDc; int BackgroundDc; } ;
struct TYPE_5__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PPERF_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,TYPE_1__*,int) ;
 int FUNC_1 (int ,int,int,int *,int *,int *,int *) ;

void
FUNC_2(void *VAR_2, PPERF_INFO VAR_3, unsigned VAR_4)
{
    unsigned VAR_5;
    RECT VAR_6;
    int VAR_7 = 0, VAR_8 = 0, VAR_9 = 1, VAR_10 = 1;

    VAR_6.left = VAR_6.top = 0;
    VAR_6.right = VAR_3->WndWidth;
    VAR_6.bottom = VAR_3->WndHeight;

    FUNC_0(VAR_3->ForegroundDc, L"rosperf", -1, &VAR_6, VAR_0 | VAR_1);

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        FUNC_1((VAR_5 & 0x100) ? VAR_3->BackgroundDc : VAR_3->ForegroundDc,
                     VAR_9, VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        VAR_7 += VAR_9;
        VAR_8 += VAR_10;
        if ((VAR_7 >= VAR_3->WndWidth -50) || VAR_7 == 0) VAR_9 = -VAR_9;
        if ((VAR_8 >= VAR_3->WndHeight -10) || VAR_8 == 0) VAR_10 = -VAR_10;
    }

}
