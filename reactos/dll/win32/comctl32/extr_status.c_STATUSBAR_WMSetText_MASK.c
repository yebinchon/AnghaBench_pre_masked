
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int bound; scalar_t__ text; } ;
struct TYPE_4__ {scalar_t__ numParts; int Self; TYPE_2__* parts; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ STATUSWINDOWPART ;
typedef int LPCWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BOOL
FUNC_6 (const STATUS_INFO *VAR_2, LPCSTR VAR_3)
{
    STATUSWINDOWPART *VAR_4;
    int VAR_5;

    FUNC_3("\n");
    if (VAR_2->numParts == 0)
 return VAR_0;

    VAR_4 = &VAR_2->parts[0];

    FUNC_1 (VAR_4->text);
    VAR_4->text = 0;

    if (VAR_3 && (VAR_5 = FUNC_5((LPCWSTR)VAR_3))) {
        VAR_4->text = FUNC_0 ((VAR_5+1)*sizeof(WCHAR));
        if (!VAR_4->text) return VAR_0;
        FUNC_4 (VAR_4->text, (LPCWSTR)VAR_3);
    }

    FUNC_2(VAR_2->Self, &VAR_4->bound, VAR_0);

    return VAR_1;
}
