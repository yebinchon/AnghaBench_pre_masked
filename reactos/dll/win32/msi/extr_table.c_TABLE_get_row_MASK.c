
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_2__ {int db; int table; } ;
typedef TYPE_1__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 int VAR_0 ;
 int FUNC_0 (int ,struct tagMSIVIEW*,int ,int **) ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_1, UINT VAR_2, MSIRECORD **VAR_3 )
{
    MSITABLEVIEW *VAR_4 = (MSITABLEVIEW *)VAR_1;

    if (!VAR_4->table)
        return VAR_0;

    return FUNC_0(VAR_4->db, VAR_1, VAR_2, VAR_3);
}
