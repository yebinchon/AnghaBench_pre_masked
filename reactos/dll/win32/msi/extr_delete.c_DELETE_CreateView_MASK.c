
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int * ops; } ;
struct TYPE_8__ {TYPE_1__ view; TYPE_1__* table; int * db; } ;
typedef TYPE_1__ MSIVIEW ;
typedef TYPE_2__ MSIDELETEVIEW ;
typedef int MSIDATABASE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;

UINT FUNC_2( MSIDATABASE *VAR_3, MSIVIEW **VAR_4, MSIVIEW *VAR_5 )
{
    MSIDELETEVIEW *VAR_6 = ((void*)0);

    FUNC_0("%p\n", VAR_6 );

    VAR_6 = FUNC_1( sizeof *VAR_6 );
    if( !VAR_6 )
        return VAR_0;


    VAR_6->view.ops = &VAR_2;
    VAR_6->db = VAR_3;
    VAR_6->table = VAR_5;

    *VAR_4 = &VAR_6->view;

    return VAR_1;
}
