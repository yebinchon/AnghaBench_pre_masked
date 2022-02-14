
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ MSISTREAMSVIEW ;
typedef int MSIRECORD ;


 int FUNC_0 (char*,TYPE_1__*,int ,int **) ;
 int FUNC_1 (int ,struct tagMSIVIEW*,int ,int **) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_0, UINT VAR_1, MSIRECORD **VAR_2 )
{
    MSISTREAMSVIEW *VAR_3 = (MSISTREAMSVIEW *)VAR_0;

    FUNC_0("%p %d %p\n", VAR_3, VAR_1, VAR_2);

    return FUNC_1( VAR_3->db, VAR_0, VAR_1, VAR_2 );
}
