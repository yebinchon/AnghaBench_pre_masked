
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const WCHAR ;
struct TYPE_4__ {int const* next_dialog; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int INT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int const*,int *,int ) ;
 int FUNC_2 (int const*) ;

INT FUNC_3( MSIPACKAGE *VAR_1, const WCHAR *VAR_2 )
{
    INT VAR_3;

    if (VAR_1->next_dialog) FUNC_0("Already got next dialog... ignoring it\n");
    VAR_1->next_dialog = ((void*)0);






    VAR_3 = FUNC_1( VAR_1, VAR_2, ((void*)0), VAR_0 );
    while (VAR_1->next_dialog)
    {
        WCHAR *VAR_4 = VAR_1->next_dialog;

        VAR_1->next_dialog = ((void*)0);
        VAR_3 = FUNC_1( VAR_1, VAR_4, ((void*)0), VAR_0 );
        FUNC_2( VAR_4 );
    }
    return VAR_3;
}
