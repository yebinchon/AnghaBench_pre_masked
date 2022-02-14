
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int hwndNotify; int hwndSelf; } ;
struct TYPE_5__ {int idFrom; int code; int hwndFrom; } ;
typedef TYPE_1__ NMHDR ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_2__ HEADER_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_2(const HEADER_INFO *VAR_2, UINT VAR_3, NMHDR *VAR_4)
{
    VAR_4->hwndFrom = VAR_2->hwndSelf;
    VAR_4->idFrom = FUNC_0 (VAR_2->hwndSelf, VAR_0);
    VAR_4->code = VAR_3;

    return FUNC_1(VAR_2->hwndNotify, VAR_1,
       VAR_4->idFrom, (LPARAM)VAR_4);
}
