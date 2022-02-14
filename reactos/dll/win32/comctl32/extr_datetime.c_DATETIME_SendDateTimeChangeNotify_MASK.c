
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int hwndNotify; int date; scalar_t__ dateValid; int hwndSelf; } ;
struct TYPE_5__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_6__ {TYPE_1__ nmhdr; int st; int dwFlags; } ;
typedef TYPE_2__ NMDATETIMECHANGE ;
typedef int LPARAM ;
typedef TYPE_3__ DATETIME_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL
FUNC_2 (const DATETIME_INFO *VAR_5)
{
    NMDATETIMECHANGE VAR_6;

    VAR_6.nmhdr.hwndFrom = VAR_5->hwndSelf;
    VAR_6.nmhdr.idFrom = FUNC_0(VAR_5->hwndSelf, VAR_3);
    VAR_6.nmhdr.code = VAR_0;

    VAR_6.dwFlags = VAR_5->dateValid ? VAR_2 : VAR_1;

    VAR_6.st = VAR_5->date;
    return (BOOL) FUNC_1 (VAR_5->hwndNotify, VAR_4,
                                VAR_6.nmhdr.idFrom, (LPARAM)&VAR_6);
}
