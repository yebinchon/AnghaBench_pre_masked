
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int * ops; } ;
struct TYPE_5__ {int * db; int num_cols; TYPE_1__ view; } ;
typedef int MSIVIEW ;
typedef TYPE_2__ MSISTREAMSVIEW ;
typedef int MSIDATABASE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_3 ;

UINT FUNC_3(MSIDATABASE *VAR_4, MSIVIEW **VAR_5)
{
    MSISTREAMSVIEW *VAR_6;
    UINT VAR_7;

    FUNC_0("(%p, %p)\n", VAR_4, VAR_5);

    VAR_7 = FUNC_1( VAR_4 );
    if (VAR_7 != VAR_1)
        return VAR_7;

    if (!(VAR_6 = FUNC_2( sizeof(MSISTREAMSVIEW) )))
        return VAR_0;

    VAR_6->view.ops = &VAR_3;
    VAR_6->num_cols = VAR_2;
    VAR_6->db = VAR_4;

    *VAR_5 = (MSIVIEW *)VAR_6;

    return VAR_1;
}
