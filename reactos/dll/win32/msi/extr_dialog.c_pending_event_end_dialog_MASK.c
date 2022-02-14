
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_argument; int pending_event; } ;
typedef TYPE_1__ msi_dialog ;
typedef int WCHAR ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static UINT FUNC_2( msi_dialog *VAR_2, const WCHAR *VAR_3 )
{
    VAR_2->pending_event = VAR_1;
    FUNC_0( VAR_2->pending_argument );
    VAR_2->pending_argument = FUNC_1( VAR_3 );
    return VAR_0;
}
