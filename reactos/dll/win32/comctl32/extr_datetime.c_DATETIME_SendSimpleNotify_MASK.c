
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int hwndNotify; int hwndSelf; } ;
struct TYPE_4__ {int idFrom; int code; int hwndFrom; } ;
typedef TYPE_1__ NMHDR ;
typedef int LPARAM ;
typedef TYPE_2__ DATETIME_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_3 (const DATETIME_INFO *VAR_2, UINT VAR_3)
{
    NMHDR VAR_4;

    FUNC_2("%x\n", VAR_3);
    VAR_4.hwndFrom = VAR_2->hwndSelf;
    VAR_4.idFrom = FUNC_0(VAR_2->hwndSelf, VAR_0);
    VAR_4.code = VAR_3;

    return (BOOL) FUNC_1 (VAR_2->hwndNotify, VAR_1,
                                VAR_4.idFrom, (LPARAM)&VAR_4);
}
