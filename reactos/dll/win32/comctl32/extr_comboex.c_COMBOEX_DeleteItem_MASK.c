
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nb_items; int hwndCombo; } ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ INT ;
typedef TYPE_1__ COMBOEX_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static INT FUNC_3 (COMBOEX_INFO *VAR_2, INT_PTR VAR_3)
{
    FUNC_2("(index=%ld)\n", VAR_3);


    if ((VAR_3 >= VAR_2->nb_items) || (VAR_3 < 0)) return VAR_1;
    if (!FUNC_0(VAR_2, VAR_3)) return VAR_1;


    FUNC_1 (VAR_2->hwndCombo, VAR_0, VAR_3, 0);

    return VAR_2->nb_items;
}
