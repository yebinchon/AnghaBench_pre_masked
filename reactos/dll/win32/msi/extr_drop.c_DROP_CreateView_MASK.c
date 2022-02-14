
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int * ops; } ;
struct TYPE_6__ {int * db; TYPE_1__ view; int table; } ;
typedef int MSIVIEW ;
typedef TYPE_2__ MSIDROPVIEW ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (char*,int **,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;

UINT FUNC_5(MSIDATABASE *VAR_3, MSIVIEW **VAR_4, LPCWSTR VAR_5)
{
    MSIDROPVIEW *VAR_6;
    UINT VAR_7;

    FUNC_1("%p %s\n", VAR_4, FUNC_2(VAR_5));

    VAR_6 = FUNC_3(sizeof *VAR_6);
    if(!VAR_6)
        return VAR_0;

    VAR_7 = FUNC_0(VAR_3, VAR_5, &VAR_6->table);
    if (VAR_7 != VAR_1)
    {
        FUNC_4( VAR_6 );
        return VAR_7;
    }

    VAR_6->view.ops = &VAR_2;
    VAR_6->db = VAR_3;

    *VAR_4 = (MSIVIEW *)VAR_6;

    return VAR_1;
}
