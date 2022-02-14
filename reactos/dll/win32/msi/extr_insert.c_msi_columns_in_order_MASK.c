
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {TYPE_2__* ops; } ;
struct TYPE_10__ {TYPE_1__* ops; } ;
struct TYPE_9__ {TYPE_4__* table; TYPE_5__* sv; } ;
struct TYPE_8__ {int (* get_column_info ) (TYPE_5__*,int,int *,int *,int *,int *) ;} ;
struct TYPE_7__ {int (* get_column_info ) (TYPE_4__*,int,int *,int *,int *,int *) ;} ;
typedef TYPE_3__ MSIINSERTVIEW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*,int,int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_4__*,int,int *,int *,int *,int *) ;

__attribute__((used)) static BOOL FUNC_3(MSIINSERTVIEW *VAR_2, UINT VAR_3)
{
    LPCWSTR VAR_4, VAR_5;
    UINT VAR_6;

    for (VAR_6 = 1; VAR_6 <= VAR_3; VAR_6++)
    {
        VAR_2->sv->ops->get_column_info(VAR_2->sv, VAR_6, &VAR_4, ((void*)0), ((void*)0), ((void*)0));
        VAR_2->table->ops->get_column_info(VAR_2->table, VAR_6, &VAR_5, ((void*)0), ((void*)0), ((void*)0));

        if (FUNC_0( VAR_4, VAR_5 )) return VAR_0;
    }
    return VAR_1;
}
