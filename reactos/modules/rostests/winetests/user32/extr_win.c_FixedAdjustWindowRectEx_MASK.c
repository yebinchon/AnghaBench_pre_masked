
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bottom; int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(RECT* VAR_5, LONG VAR_6, BOOL VAR_7, LONG VAR_8)
{
    FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_6 & VAR_4)
    {
        if(VAR_8 & VAR_2)
            VAR_5->left -= FUNC_1(VAR_0);
        else
            VAR_5->right += FUNC_1(VAR_0);
    }
    if (VAR_6 & VAR_3)
 VAR_5->bottom += FUNC_1(VAR_1);
}
