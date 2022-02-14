
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* package; } ;
typedef TYPE_1__ msi_dialog ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int next_dialog; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static UINT FUNC_3( msi_dialog *VAR_1, const WCHAR *VAR_2 )
{

    VAR_1->package->next_dialog = FUNC_2( VAR_2 );
    FUNC_1( VAR_1->package );
    FUNC_0( VAR_1 );
    return VAR_0;
}
