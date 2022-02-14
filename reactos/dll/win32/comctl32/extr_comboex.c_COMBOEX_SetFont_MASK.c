
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {scalar_t__ hwndCombo; scalar_t__ hwndEdit; scalar_t__ font; } ;
typedef int LRESULT ;
typedef scalar_t__ HFONT ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_3( COMBOEX_INFO *VAR_2, HFONT VAR_3, BOOL VAR_4 )
{
    VAR_2->font = VAR_3;
    FUNC_2( VAR_2->hwndCombo, VAR_1, (WPARAM)VAR_3, 0 );
    if (VAR_2->hwndEdit) FUNC_2( VAR_2->hwndEdit, VAR_1, (WPARAM)VAR_3, 0 );
    FUNC_0( VAR_2 );
    if (VAR_4) FUNC_1( VAR_2->hwndCombo, ((void*)0), VAR_0 );
    return 0;
}
