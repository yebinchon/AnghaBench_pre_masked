
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keyup; int keydwn; scalar_t__ nrkev; } ;
typedef int HWND ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1( HWND VAR_1)
{
    int VAR_2;
    for(VAR_2=0; VAR_0[VAR_2].nrkev;VAR_2++)
        if (!FUNC_0( VAR_1, VAR_0[VAR_2].nrkev, VAR_0[VAR_2].keydwn, VAR_0[VAR_2].keyup)) break;
}
