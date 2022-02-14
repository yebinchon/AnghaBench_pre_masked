
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int root_entries; scalar_t__ root_start; scalar_t__ root_cluster; } ;
typedef TYPE_1__ DOS_FS ;
typedef int DOS_FILE ;
typedef int DIR_ENT ;


 int FUNC_0 (TYPE_1__*,int ***,int *,scalar_t__,int *) ;
 int FUNC_1 (TYPE_1__*,int **,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_1 ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;

int FUNC_6(DOS_FS * VAR_2)
{
    DOS_FILE **VAR_3;
    int VAR_4;

    VAR_1 = ((void*)0);
    VAR_3 = &VAR_1;
    FUNC_4();
    if (VAR_2->root_cluster) {
 FUNC_0(VAR_2, &VAR_3, ((void*)0), 0, &VAR_0);
    } else {
 for (VAR_4 = 0; VAR_4 < VAR_2->root_entries; VAR_4++)
     FUNC_0(VAR_2, &VAR_3, ((void*)0), VAR_2->root_start + VAR_4 * sizeof(DIR_ENT),
       &VAR_0);
    }
    FUNC_3();
    (void)FUNC_1(VAR_2, &VAR_1, 0);
    if (FUNC_2(VAR_2, VAR_1))
 return 1;
    return FUNC_5(VAR_2, ((void*)0), &VAR_0);
}
