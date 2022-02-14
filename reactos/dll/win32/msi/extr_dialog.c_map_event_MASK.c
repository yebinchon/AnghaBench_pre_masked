
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dialog_control {int control; int dialog; } ;
typedef int WCHAR ;
typedef int UINT ;
typedef int MSIRECORD ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int const*,int ,int const*) ;

__attribute__((used)) static UINT FUNC_2( MSIRECORD *VAR_1, void *VAR_2 )
{
    struct dialog_control *VAR_3 = VAR_2;
    const WCHAR *VAR_4 = FUNC_0( VAR_1, 3 );
    const WCHAR *VAR_5 = FUNC_0( VAR_1, 4 );

    FUNC_1( VAR_3->dialog, VAR_4, VAR_3->control, VAR_5 );
    return VAR_0;
}
