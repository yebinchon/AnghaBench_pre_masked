
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndCombo; } ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_1__ COMBOEX_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_3 (COMBOEX_INFO *VAR_1, INT VAR_2, INT VAR_3)
{
    FUNC_2("(width=%d, height=%d)\n", VAR_2, VAR_3);

    FUNC_1 (VAR_1->hwndCombo, 0, 0, VAR_2, VAR_3, VAR_0);

    FUNC_0 (VAR_1);

    return 0;
}
