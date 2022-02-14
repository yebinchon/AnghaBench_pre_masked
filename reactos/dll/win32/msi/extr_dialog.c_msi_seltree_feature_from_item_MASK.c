
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; scalar_t__ lParam; int hItem; } ;
typedef TYPE_1__ TVITEMW ;
typedef int MSIFEATURE ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HTREEITEM ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static MSIFEATURE *FUNC_2( HWND VAR_3, HTREEITEM VAR_4 )
{
    TVITEMW VAR_5;


    FUNC_1( &VAR_5, 0, sizeof VAR_5 );
    VAR_5.hItem = VAR_4;
    VAR_5.mask = VAR_1 | VAR_0;
    FUNC_0( VAR_3, VAR_2, 0, (LPARAM)&VAR_5 );
    return (MSIFEATURE *)VAR_5.lParam;
}
