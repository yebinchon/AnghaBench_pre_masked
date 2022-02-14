
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct list {int dummy; } ;
typedef int UINT ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {int r; TYPE_3__** view; struct list* mem; scalar_t__ len; scalar_t__ n; int command; int * db; } ;
struct TYPE_7__ {int (* delete ) (TYPE_3__*) ;} ;
typedef TYPE_2__ SQL_input ;
typedef TYPE_3__ MSIVIEW ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;

UINT FUNC_3( MSIDATABASE *VAR_2, LPCWSTR VAR_3, MSIVIEW **VAR_4,
                   struct list *VAR_5 )
{
    SQL_input VAR_6;
    int VAR_7;

    *VAR_4 = ((void*)0);

    VAR_6.db = VAR_2;
    VAR_6.command = VAR_3;
    VAR_6.n = 0;
    VAR_6.len = 0;
    VAR_6.r = VAR_0;
    VAR_6.view = VAR_4;
    VAR_6.mem = VAR_5;

    VAR_7 = FUNC_1(&VAR_6);

    FUNC_0("Parse returned %d\n", VAR_7);
    if( VAR_7 )
    {
        if (*VAR_6.view)
        {
            (*VAR_6.view)->ops->delete(*VAR_6.view);
            *VAR_6.view = ((void*)0);
        }
        return VAR_6.r;
    }

    return VAR_1;
}
