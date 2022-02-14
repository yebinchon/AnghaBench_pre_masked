
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
typedef int LRESULT ;
typedef size_t INT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_2 (STATUS_INFO *VAR_1, INT VAR_2)
{
    STATUSWINDOWPART *VAR_3;
    DWORD VAR_4;

    FUNC_0("part %d\n", VAR_2);


    if (VAR_2 < 0 || VAR_2 >= VAR_1->numParts) return 0;

    if (VAR_1->simple)
 VAR_3 = &VAR_1->part0;
    else
 VAR_3 = &VAR_1->parts[VAR_2];

    if ((~VAR_3->style & VAR_0) && VAR_3->text)
 VAR_4 = FUNC_1(VAR_3->text);
    else
 VAR_4 = 0;

    VAR_4 |= (VAR_3->style << 16);
    return VAR_4;
}
