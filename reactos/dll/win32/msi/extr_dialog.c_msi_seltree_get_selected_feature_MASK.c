
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msi_selection_tree_info {int selected; } ;
struct TYPE_3__ {int hwnd; } ;
typedef TYPE_1__ msi_control ;
typedef int MSIFEATURE ;


 struct msi_selection_tree_info* FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static MSIFEATURE *FUNC_2( msi_control *VAR_1 )
{
    struct msi_selection_tree_info *VAR_2 = FUNC_0( VAR_1->hwnd, VAR_0 );
    return FUNC_1( VAR_1->hwnd, VAR_2->selected );
}
