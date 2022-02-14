
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int iItem; } ;
struct TYPE_7__ {int nb_items; int hwndEdit; } ;
typedef int INT_PTR ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef TYPE_2__ COMBOBOXEXITEMW ;
typedef int CBE_ITEMDATA ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_3 (COMBOEX_INFO *VAR_2, COMBOBOXEXITEMW *VAR_3)
{
    INT_PTR VAR_4 = VAR_3->iItem;
    CBE_ITEMDATA *VAR_5;

    FUNC_2("\n");


    if ((VAR_4 >= VAR_2->nb_items) || (VAR_4 < -1)) return VAR_0;


    if ((VAR_4 == -1) && !VAR_2->hwndEdit) return VAR_0;

    if (!(VAR_5 = FUNC_1(VAR_2, VAR_4))) return VAR_0;

    FUNC_0 (VAR_5, VAR_3);

    return VAR_1;
}
