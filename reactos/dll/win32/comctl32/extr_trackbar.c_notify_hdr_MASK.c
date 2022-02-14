
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_5__ {int hwndNotify; int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef TYPE_2__* LPNMHDR ;
typedef int LPARAM ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_3 (const TRACKBAR_INFO *VAR_2, INT VAR_3, LPNMHDR VAR_4)
{
    LRESULT VAR_5;

    FUNC_2("(code=%d)\n", VAR_3);

    VAR_4->hwndFrom = VAR_2->hwndSelf;
    VAR_4->idFrom = FUNC_0(VAR_2->hwndSelf, VAR_0);
    VAR_4->code = VAR_3;
    VAR_5 = FUNC_1(VAR_2->hwndNotify, VAR_1, VAR_4->idFrom, (LPARAM)VAR_4);

    FUNC_2("  <= %ld\n", VAR_5);

    return VAR_5;
}
