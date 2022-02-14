
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int * ops; } ;
struct TYPE_7__ {scalar_t__ num_rows; int * db; TYPE_1__ view; } ;
typedef int MSIVIEW ;
typedef TYPE_2__ MSISTORAGESVIEW ;
typedef int MSIDATABASE ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int **) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;

UINT FUNC_4(MSIDATABASE *VAR_3, MSIVIEW **VAR_4)
{
    MSISTORAGESVIEW *VAR_5;
    INT VAR_6;

    FUNC_0("(%p, %p)\n", VAR_3, VAR_4);

    VAR_5 = FUNC_2( sizeof(MSISTORAGESVIEW) );
    if (!VAR_5)
        return VAR_0;

    VAR_5->view.ops = &VAR_2;
    VAR_5->db = VAR_3;

    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 < 0)
    {
        FUNC_3( VAR_5 );
        return VAR_0;
    }
    VAR_5->num_rows = VAR_6;

    *VAR_4 = (MSIVIEW *)VAR_5;

    return VAR_1;
}
