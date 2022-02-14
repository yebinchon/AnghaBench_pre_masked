
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int MarqueePos; int Self; } ;
typedef int RECT ;
typedef TYPE_1__ PROGRESS_INFO ;
typedef int LONG ;
typedef int HTHEME ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int *) ;

__attribute__((used)) static void FUNC_8 (PROGRESS_INFO *VAR_3)
{
    LONG VAR_4 = FUNC_0 (VAR_3->Self, VAR_0);
    RECT VAR_5;
    int VAR_6, VAR_7;
    HTHEME VAR_8 = FUNC_1 (VAR_3->Self);
    BOOL VAR_9 = (VAR_4 & VAR_1) && !VAR_8;

    FUNC_5 (VAR_3->Self, &VAR_5);

    if (VAR_9)
        VAR_6 = 1;
    else
        VAR_6 = FUNC_7( VAR_3, VAR_4, &VAR_5 ) + FUNC_6( VAR_3 );

    VAR_7 = (FUNC_4( VAR_4, &VAR_5 ) + VAR_6 - 1) /
        VAR_6;


    if (++VAR_3->MarqueePos >= VAR_7)
        VAR_3->MarqueePos = 0;

    FUNC_2(VAR_3->Self, &VAR_5, VAR_2);
    FUNC_3(VAR_3->Self);
}
