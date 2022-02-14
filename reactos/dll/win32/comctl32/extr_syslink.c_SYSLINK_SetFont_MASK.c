
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int lfUnderline; } ;
struct TYPE_10__ {int Self; int BreakChar; int * LinkFont; int Font; } ;
struct TYPE_9__ {int tmBreakChar; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ SYSLINK_INFO ;
typedef int RECT ;
typedef TYPE_3__ LOGFONTW ;
typedef int HFONT ;
typedef int * HDC ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,int *,int *,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_2__*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static HFONT FUNC_10 (SYSLINK_INFO *VAR_3, HFONT VAR_4, BOOL VAR_5)
{
    HDC VAR_6;
    LOGFONTW VAR_7;
    TEXTMETRICW VAR_8;
    RECT VAR_9;
    HFONT VAR_10 = VAR_3->Font;
    VAR_3->Font = VAR_4;


    if(VAR_3->LinkFont != ((void*)0))
    {
        FUNC_1(VAR_3->LinkFont);
        VAR_3->LinkFont = ((void*)0);
    }


    if (FUNC_3(VAR_3->Self, &VAR_9))
    {
        VAR_6 = FUNC_4(VAR_3->Self);
        if(VAR_6 != ((void*)0))
        {

            if(FUNC_6(VAR_6, &VAR_8) &&
               FUNC_5(VAR_3->Font, sizeof(LOGFONTW), &VAR_7))
            {
                VAR_7.lfUnderline = VAR_2;
                VAR_3->LinkFont = FUNC_0(&VAR_7);
                VAR_3->BreakChar = VAR_8.tmBreakChar;
            }
            else
            {
                FUNC_2("Failed to create link font!\n");
            }

            FUNC_9(VAR_3, VAR_6, &VAR_9);
            FUNC_8(VAR_3->Self, VAR_6);
        }
    }

    if(VAR_5)
    {
        FUNC_7(VAR_3->Self, ((void*)0), ((void*)0), VAR_0 | VAR_1);
    }

    return VAR_10;
}
