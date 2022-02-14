
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int style; TYPE_2__* text; } ;
struct TYPE_6__ {unsigned int numParts; int style; int Self; scalar_t__ hwndToolTip; scalar_t__ hDefaultFont; struct TYPE_6__* parts; TYPE_1__ part0; struct TYPE_6__* text; } ;
typedef TYPE_2__ STATUS_INFO ;
typedef int LRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static LRESULT
FUNC_7 (STATUS_INFO *VAR_1)
{
    unsigned int VAR_2;

    FUNC_6("\n");
    for (VAR_2 = 0; VAR_2 < VAR_1->numParts; VAR_2++) {
 if (!(VAR_1->parts[VAR_2].style & VAR_0))
     FUNC_3 (VAR_1->parts[VAR_2].text);
    }
    if (!(VAR_1->part0.style & VAR_0))
 FUNC_3 (VAR_1->part0.text);
    FUNC_3 (VAR_1->parts);


    if (VAR_1->hDefaultFont)
 FUNC_1 (VAR_1->hDefaultFont);


    if (VAR_1->hwndToolTip)
 FUNC_2 (VAR_1->hwndToolTip);

    FUNC_0 (FUNC_4 (VAR_1->Self));

    FUNC_5(VAR_1->Self, 0, 0);
    FUNC_3 (VAR_1);
    return 0;
}
