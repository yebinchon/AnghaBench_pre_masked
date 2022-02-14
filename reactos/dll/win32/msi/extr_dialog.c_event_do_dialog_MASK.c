
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int retval; } ;
typedef TYPE_1__ msi_dialog ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {TYPE_1__* dialog; } ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int const*,TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static INT FUNC_3( MSIPACKAGE *VAR_3, const WCHAR *VAR_4, msi_dialog *VAR_5, BOOL VAR_6 )
{
    msi_dialog *VAR_7;
    UINT VAR_8;
    INT VAR_9;


    VAR_7 = FUNC_0( VAR_3, VAR_4, VAR_5, VAR_2 );
    if (VAR_7)
    {

        if (VAR_6 && VAR_3->dialog)
        {
            FUNC_2( VAR_3->dialog );
            VAR_3->dialog = ((void*)0);
        }


        VAR_8 = FUNC_1( VAR_7 );
        if (VAR_8 == VAR_0)
        {
            VAR_9 = VAR_7->retval;
            FUNC_2( VAR_7 );
            return VAR_9;
        }
        else
        {
            VAR_3->dialog = VAR_7;
            return VAR_1;
        }
    }
    else return 0;
}
