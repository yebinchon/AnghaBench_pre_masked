
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int db; int tables; } ;
typedef TYPE_1__ MSIWHEREVIEW ;
typedef int MSIRECORD ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int **) ;
 int FUNC_1 (int ,struct tagMSIVIEW*,int ,int **) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, UINT VAR_2, MSIRECORD **VAR_3 )
{
    MSIWHEREVIEW *VAR_4 = (MSIWHEREVIEW *)VAR_1;

    FUNC_0("%p %d %p\n", VAR_4, VAR_2, VAR_3 );

    if (!VAR_4->tables)
        return VAR_0;

    return FUNC_1( VAR_4->db, VAR_1, VAR_2, VAR_3 );
}
