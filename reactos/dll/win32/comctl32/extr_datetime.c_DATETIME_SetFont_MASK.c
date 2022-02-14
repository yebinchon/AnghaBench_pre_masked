
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; int hFont; } ;
typedef int LRESULT ;
typedef int HFONT ;
typedef TYPE_1__ DATETIME_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_1 (DATETIME_INFO *VAR_1, HFONT VAR_2, BOOL VAR_3)
{
    VAR_1->hFont = VAR_2;
    if (VAR_3) FUNC_0(VAR_1->hwndSelf, ((void*)0), VAR_0);
    return 0;
}
