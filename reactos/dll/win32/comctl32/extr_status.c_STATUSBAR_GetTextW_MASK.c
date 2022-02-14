
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
typedef scalar_t__ LPWSTR ;
typedef size_t INT ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_3 (STATUS_INFO *VAR_1, INT VAR_2, LPWSTR VAR_3)
{
    STATUSWINDOWPART *VAR_4;
    LRESULT VAR_5;

    FUNC_0("part %d\n", VAR_2);
    if (VAR_2 < 0 || VAR_2 >= VAR_1->numParts) return 0;

    if (VAR_1->simple)
 VAR_4 = &VAR_1->part0;
    else
 VAR_4 = &VAR_1->parts[VAR_2];

    if (VAR_4->style & VAR_0)
 VAR_5 = (LRESULT)VAR_4->text;
    else {
 VAR_5 = VAR_4->text ? FUNC_2 (VAR_4->text) : 0;
 VAR_5 |= (VAR_4->style << 16);
 if (VAR_4->text && VAR_3)
     FUNC_1 (VAR_3, VAR_4->text);
    }
    return VAR_5;
}
