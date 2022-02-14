
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ clrBk; unsigned int numParts; int Notify; int Self; int * parts; int part0; scalar_t__ simple; scalar_t__ hDefaultFont; scalar_t__ hFont; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int RECT ;
typedef int LRESULT ;
typedef int HTHEME ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef int HBRUSH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int *,unsigned int) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (char*) ;
 int VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_14 (STATUS_INFO *VAR_5, HDC VAR_6)
{
    RECT VAR_7;
    HBRUSH VAR_8;
    HFONT VAR_9;
    HTHEME VAR_10;

    FUNC_13("\n");
    if (!FUNC_8(VAR_5->Self))
        return 0;

    FUNC_11(VAR_5);

    FUNC_4 (VAR_5->Self, &VAR_7);

    if ((VAR_10 = FUNC_7 (VAR_5->Self)))
    {
        FUNC_2(VAR_10, VAR_6, 0, 0, &VAR_7, ((void*)0));
    }
    else
    {
        if (VAR_5->clrBk != VAR_0)
            VAR_8 = FUNC_0 (VAR_5->clrBk);
        else
            VAR_8 = FUNC_5 (VAR_1);
        FUNC_3(VAR_6, &VAR_7, VAR_8);
        if (VAR_5->clrBk != VAR_0)
            FUNC_1 (VAR_8);
    }

    VAR_9 = FUNC_12 (VAR_6, VAR_5->hFont ? VAR_5->hFont : VAR_5->hDefaultFont);

    if (VAR_5->simple) {
 FUNC_10 (VAR_5, VAR_6, &VAR_5->part0, 0);
    } else {
        unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_5->numParts; VAR_11++) {
     FUNC_10 (VAR_5, VAR_6, &VAR_5->parts[VAR_11], VAR_11);
 }
    }

    FUNC_12 (VAR_6, VAR_9);

    if ((FUNC_6 (VAR_5->Self, VAR_2) & VAR_3)
            && !(FUNC_6 (VAR_5->Notify, VAR_2) & VAR_4))
     FUNC_9 (VAR_10, VAR_6, &VAR_7);

    return 0;
}
