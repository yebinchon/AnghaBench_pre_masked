
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int * columns; int * table; } ;
typedef TYPE_1__ MSITABLEVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,struct tagMSIVIEW*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1 )
{
    MSITABLEVIEW *VAR_2 = (MSITABLEVIEW*)VAR_1;

    FUNC_0("%p\n", VAR_1 );

    VAR_2->table = ((void*)0);
    VAR_2->columns = ((void*)0);

    FUNC_1( VAR_2 );

    return VAR_0;
}
