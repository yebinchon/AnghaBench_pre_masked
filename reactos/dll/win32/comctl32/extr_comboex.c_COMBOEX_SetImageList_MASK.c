
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hwndCombo; int himl; } ;
typedef int HIMAGELIST ;
typedef TYPE_1__ COMBOEX_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static HIMAGELIST FUNC_4 (COMBOEX_INFO *VAR_1, HIMAGELIST VAR_2)
{
    HIMAGELIST VAR_3 = VAR_1->himl;

    FUNC_3("\n");

    VAR_1->himl = VAR_2;

    FUNC_1 (VAR_1);
    FUNC_2 (VAR_1->hwndCombo, ((void*)0), VAR_0);


    FUNC_0 (VAR_1);
    return VAR_3;
}
