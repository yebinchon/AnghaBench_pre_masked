
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; scalar_t__ text; } ;
struct TYPE_4__ {size_t numParts; TYPE_2__* parts; TYPE_2__ part0; scalar_t__ simple; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ STATUSWINDOWPART ;
typedef scalar_t__ LRESULT ;
typedef int * LPSTR ;
typedef size_t INT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int *,scalar_t__,int *,int *) ;

__attribute__((used)) static LRESULT
FUNC_3 (STATUS_INFO *VAR_2, INT VAR_3, LPSTR VAR_4)
{
    STATUSWINDOWPART *VAR_5;
    LRESULT VAR_6;

    FUNC_1("part %d\n", VAR_3);


    if (VAR_3 < 0 || VAR_3 >= VAR_2->numParts) return 0;

    if (VAR_2->simple)
 VAR_5 = &VAR_2->part0;
    else
 VAR_5 = &VAR_2->parts[VAR_3];

    if (VAR_5->style & VAR_1)
 VAR_6 = (LRESULT)VAR_5->text;
    else {
        DWORD VAR_7 = VAR_5->text ? FUNC_2( VAR_0, 0, VAR_5->text, -1,
                                                      ((void*)0), 0, ((void*)0), ((void*)0) ) - 1 : 0;
        VAR_6 = FUNC_0( VAR_7, VAR_5->style );
        if (VAR_5->text && VAR_4)
            FUNC_2( VAR_0, 0, VAR_5->text, -1, VAR_4, VAR_7+1, ((void*)0), ((void*)0) );
    }
    return VAR_6;
}
