
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int reorder_size; int ** reorder; } ;
typedef TYPE_1__ MSIWHEREVIEW ;
typedef int MSIROWENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int ** FUNC_1 (int) ;

__attribute__((used)) static UINT FUNC_2(MSIWHEREVIEW *VAR_3)
{
    MSIROWENTRY **VAR_4 = FUNC_1(sizeof(MSIROWENTRY *) * VAR_2);
    if (!VAR_4)
        return VAR_0;

    FUNC_0(VAR_3);

    VAR_3->reorder = VAR_4;
    VAR_3->reorder_size = VAR_2;

    return VAR_1;
}
