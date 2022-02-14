
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_6__ {TYPE_1__* db; } ;
struct TYPE_5__ {int hdr; } ;
typedef TYPE_2__ MSICREATEVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_1 )
{
    MSICREATEVIEW *VAR_2 = (MSICREATEVIEW*)VAR_1;

    FUNC_0("%p\n", VAR_2 );

    FUNC_2( &VAR_2->db->hdr );
    FUNC_1( VAR_2 );

    return VAR_0;
}
