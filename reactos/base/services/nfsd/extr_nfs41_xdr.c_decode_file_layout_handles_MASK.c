
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int count; TYPE_2__* arr; } ;
typedef TYPE_1__ pnfs_file_layout_handles ;
struct TYPE_8__ {int fh; } ;
typedef TYPE_2__ nfs41_path_fh ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_2,
    pnfs_file_layout_handles *VAR_3)
{
    uint32_t VAR_4, VAR_5;

    if (!FUNC_3(VAR_2, &VAR_5))
        return VAR_0;

    if (VAR_5 && VAR_5 != VAR_3->count) {
        nfs41_path_fh *VAR_6;
        VAR_6 = FUNC_1(VAR_3->arr, VAR_5 * sizeof(nfs41_path_fh));
        if (VAR_6 == ((void*)0))
            return VAR_0;
        VAR_3->arr = VAR_6;
        FUNC_0(VAR_3->arr, VAR_5 * sizeof(nfs41_path_fh));
        VAR_3->count = VAR_5;
    }

    for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
        if (!FUNC_2(VAR_2, &VAR_3->arr[VAR_4].fh))
            return VAR_0;
    }
    return VAR_1;
}
