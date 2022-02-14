
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int num_cols; } ;
typedef TYPE_1__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,...) ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2 )
{
    MSITABLEVIEW *VAR_3 = (MSITABLEVIEW*)VAR_1;

    FUNC_0("%p %p\n", VAR_3, VAR_2);

    FUNC_0("There are %d columns\n", VAR_3->num_cols );

    return VAR_0;
}
