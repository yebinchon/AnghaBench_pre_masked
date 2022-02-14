
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {size_t count; TYPE_2__* arr; } ;
typedef TYPE_1__ pnfs_data_server_list ;
struct TYPE_8__ {int addrs; int lock; int * client; } ;
typedef TYPE_2__ pnfs_data_server ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,size_t*) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_2,
    pnfs_data_server_list *VAR_3)
{
    uint32_t VAR_4, VAR_5;

    if (!FUNC_4(VAR_2, &VAR_5))
        return VAR_0;

    if (VAR_5 && VAR_5 != VAR_3->count) {
        pnfs_data_server *VAR_6;


        for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
            VAR_3->arr[VAR_4].client = ((void*)0);

        VAR_6 = FUNC_2(VAR_3->arr, VAR_5 * sizeof(pnfs_data_server));
        if (VAR_6 == ((void*)0))
            return VAR_0;
        VAR_3->arr = VAR_6;
        FUNC_1(VAR_3->arr, VAR_5 * sizeof(pnfs_data_server));
        for (VAR_4 = VAR_3->count; VAR_4 < VAR_5; VAR_4++)
            FUNC_0(&VAR_3->arr[VAR_4].lock);
        VAR_3->count = VAR_5;
    }

    for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
        if (!FUNC_3(VAR_2, &VAR_3->arr[VAR_4].addrs))
            return VAR_0;
    }
    return VAR_1;
}
