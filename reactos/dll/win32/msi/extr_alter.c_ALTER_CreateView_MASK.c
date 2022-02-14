
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int table; } ;
typedef TYPE_1__ column_info ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int * ops; } ;
struct TYPE_12__ {int hold; TYPE_2__ view; TYPE_1__* colinfo; int * db; int table; } ;
typedef TYPE_2__ MSIVIEW ;
typedef int MSIDATABASE ;
typedef TYPE_3__ MSIALTERVIEW ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (char*,TYPE_2__**,TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;

UINT FUNC_5( MSIDATABASE *VAR_3, MSIVIEW **VAR_4, LPCWSTR VAR_5, column_info *VAR_6, int VAR_7 )
{
    MSIALTERVIEW *VAR_8;
    UINT VAR_9;

    FUNC_1("%p %p %s %d\n", VAR_4, VAR_6, FUNC_2(VAR_5), VAR_7 );

    VAR_8 = FUNC_3( sizeof *VAR_8 );
    if( !VAR_8 )
        return VAR_0;

    VAR_9 = FUNC_0( VAR_3, VAR_5, &VAR_8->table );
    if (VAR_9 != VAR_1)
    {
        FUNC_4( VAR_8 );
        return VAR_9;
    }

    if (VAR_6)
        VAR_6->table = VAR_5;


    VAR_8->view.ops = &VAR_2;
    VAR_8->db = VAR_3;
    VAR_8->hold = VAR_7;
    VAR_8->colinfo = VAR_6;

    *VAR_4 = &VAR_8->view;

    return VAR_1;
}
