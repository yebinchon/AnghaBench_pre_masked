
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_8__ {TYPE_2__* wv; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int (* close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ MSIVIEW ;
typedef TYPE_3__ MSIUPDATEVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1 )
{
    MSIUPDATEVIEW *VAR_2 = (MSIUPDATEVIEW*)VAR_1;
    MSIVIEW *VAR_3;

    FUNC_0("%p\n", VAR_2);

    VAR_3 = VAR_2->wv;
    if( !VAR_3 )
        return VAR_0;

    return VAR_3->ops->close( VAR_3 );
}
