
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; int dwStyle; } ;
typedef int LRESULT ;
typedef TYPE_1__ DATETIME_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*,TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_2 (DATETIME_INFO *VAR_2, BOOL VAR_3)
{
    FUNC_1("%p %s\n", VAR_2, VAR_3 ? "TRUE" : "FALSE");
    if (VAR_3)
        VAR_2->dwStyle &= ~VAR_1;
    else
        VAR_2->dwStyle |= VAR_1;

    FUNC_0(VAR_2->hwndSelf, ((void*)0), VAR_0);

    return 0;
}
