
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ retval; int package; } ;
typedef TYPE_1__ msi_dialog ;
typedef int WCHAR ;
typedef int UINT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_3( msi_dialog *VAR_2, const WCHAR *VAR_3 )
{
    INT VAR_4;

    VAR_4 = FUNC_0( VAR_2->package, VAR_3, VAR_2, VAR_1 );
    if (VAR_4 != 0)
    {
        VAR_2->retval = VAR_4;
        FUNC_1( VAR_2 );
    }
    else
        FUNC_2(VAR_2);

    return VAR_0;
}
