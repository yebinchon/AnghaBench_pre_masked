
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ bInMenuLoop; int * hStatus; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_1(PMAIN_WND_INFO VAR_1)
{
    if (VAR_1->hStatus != ((void*)0))
    {
        FUNC_0(VAR_1->hStatus,
                    VAR_0,
                    (WPARAM)VAR_1->bInMenuLoop,
                    0);
    }
}
