
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
struct TYPE_6__ {int (* get_dimensions ) (TYPE_2__*,int *,int *) ;} ;
typedef TYPE_2__ MSIVIEW ;
typedef TYPE_3__ MSIUPDATEVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, UINT *VAR_2, UINT *VAR_3 )
{
    MSIUPDATEVIEW *VAR_4 = (MSIUPDATEVIEW*)VAR_1;
    MSIVIEW *VAR_5;

    FUNC_0("%p %p %p\n", VAR_4, VAR_2, VAR_3 );

    VAR_5 = VAR_4->wv;
    if( !VAR_5 )
        return VAR_0;

    return VAR_5->ops->get_dimensions( VAR_5, VAR_2, VAR_3 );
}
