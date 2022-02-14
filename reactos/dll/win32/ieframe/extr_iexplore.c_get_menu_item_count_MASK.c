
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int item ;
struct TYPE_3__ {int cbSize; int fMask; scalar_t__ hSubMenu; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef scalar_t__ HMENU ;


 scalar_t__ FUNC_0 (scalar_t__,int,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(HMENU VAR_3)
{
    MENUITEMINFOW VAR_4;
    int VAR_5 = 0;
    int VAR_6;

    VAR_4.cbSize = sizeof(VAR_4);
    VAR_4.fMask = VAR_0 | VAR_1;

    for(VAR_6 = 0; FUNC_0(VAR_3, VAR_6, VAR_2, &VAR_4); VAR_6++)
    {
        if(VAR_4.hSubMenu)
            VAR_5 += FUNC_1(VAR_4.hSubMenu);
        else
            VAR_5++;
    }

    return VAR_5;
}
