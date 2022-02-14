
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* lpTemplateName; int hInstance; } ;
struct TYPE_6__ {int Flags; int hInstance; int lpTemplateName; } ;
struct TYPE_5__ {void* template; scalar_t__ open; TYPE_3__* ofnA; TYPE_2__* ofnW; } ;
typedef TYPE_1__* PFD31_DATA ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef TYPE_2__* LPOPENFILENAMEW ;
typedef TYPE_3__* LPOPENFILENAMEA ;
typedef int HRSRC ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_5(PFD31_DATA VAR_8)
{
    LPOPENFILENAMEW VAR_9 = VAR_8->ofnW;
    LPOPENFILENAMEA VAR_10 = VAR_8->ofnA;
    HANDLE VAR_11;

    if (VAR_9->Flags & VAR_5)
    {
        if (!(VAR_8->template = FUNC_4( VAR_9->hInstance )))
        {
            FUNC_0( VAR_1 );
            return VAR_3;
        }
    }
    else if (VAR_9->Flags & VAR_4)
    {
        HRSRC VAR_12;
        if (VAR_10)
            VAR_12 = FUNC_1( VAR_10->hInstance, VAR_10->lpTemplateName, (LPSTR)VAR_6 );
        else
            VAR_12 = FUNC_2( VAR_9->hInstance, VAR_9->lpTemplateName, (LPWSTR)VAR_6 );
        if (!VAR_12)
        {
            FUNC_0( VAR_0 );
            return VAR_3;
        }
        if (!(VAR_11 = FUNC_3( VAR_9->hInstance, VAR_12 )) ||
            !(VAR_8->template = FUNC_4( VAR_11 )))
        {
            FUNC_0( VAR_1 );
            return VAR_3;
        }
    }
    else
    {
        HRSRC VAR_13;
        if (!(VAR_13 = FUNC_1( VAR_2, VAR_8->open ? "OPEN_FILE" : "SAVE_FILE", (LPSTR)VAR_6 )))
        {
            FUNC_0( VAR_0 );
            return VAR_3;
        }
        if (!(VAR_11 = FUNC_3( VAR_2, VAR_13 )) ||
            !(VAR_8->template = FUNC_4( VAR_11 )))
        {
            FUNC_0( VAR_1 );
            return VAR_3;
        }
    }
    return VAR_7;
}
