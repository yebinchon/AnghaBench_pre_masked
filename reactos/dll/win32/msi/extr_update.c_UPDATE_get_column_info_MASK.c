
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
struct TYPE_6__ {int (* get_column_info ) (TYPE_2__*,int ,int *,int *,int *,int *) ;} ;
typedef TYPE_2__ MSIVIEW ;
typedef TYPE_3__ MSIUPDATEVIEW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*,int ,int *,int *,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int *,int *,int *) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, UINT VAR_2, LPCWSTR *VAR_3,
                                    UINT *VAR_4, BOOL *VAR_5, LPCWSTR *VAR_6 )
{
    MSIUPDATEVIEW *VAR_7 = (MSIUPDATEVIEW*)VAR_1;
    MSIVIEW *VAR_8;

    FUNC_0("%p %d %p %p %p %p\n", VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );

    VAR_8 = VAR_7->wv;
    if( !VAR_8 )
        return VAR_0;

    return VAR_8->ops->get_column_info( VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );
}
