
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Self; int height; int hFont; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int LRESULT ;
typedef int HFONT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_4 (STATUS_INFO *VAR_2, HFONT VAR_3, BOOL VAR_4)
{
    VAR_2->hFont = VAR_3;
    FUNC_3("%p\n", VAR_2->hFont);

    VAR_2->height = FUNC_1(VAR_2);
    FUNC_2(VAR_2->Self, VAR_1, 0, 0);
    if (VAR_4)
        FUNC_0(VAR_2->Self, ((void*)0), VAR_0);

    return 0;
}
