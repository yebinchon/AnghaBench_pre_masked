
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_5__ {int (* handler ) (int *,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ msi_control ;
struct TYPE_6__ {int hwndFrom; } ;
typedef int LRESULT ;
typedef TYPE_2__* LPNMHDR ;
typedef int LPARAM ;


 int FUNC_0 (char*,int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static LRESULT FUNC_3( msi_dialog *VAR_0, LPARAM VAR_1 )
{
    LPNMHDR VAR_2 = (LPNMHDR) VAR_1;
    msi_control *VAR_3 = FUNC_1( VAR_0, VAR_2->hwndFrom );

    FUNC_0("%p %p\n", VAR_0, VAR_2->hwndFrom);

    if ( VAR_3 && VAR_3->handler )
        VAR_3->handler( VAR_0, VAR_3, VAR_1 );

    return 0;
}
