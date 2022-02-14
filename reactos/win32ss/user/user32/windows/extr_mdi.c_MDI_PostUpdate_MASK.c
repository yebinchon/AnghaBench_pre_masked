
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int mdiFlags; int sbRecalc; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(HWND VAR_2, MDICLIENTINFO* VAR_3, WORD VAR_4)
{
    if( !(VAR_3->mdiFlags & VAR_0) )
    {
 VAR_3->mdiFlags |= VAR_0;
 FUNC_0( VAR_2, VAR_1, 0, 0);
    }
    VAR_3->sbRecalc = VAR_4;
}
