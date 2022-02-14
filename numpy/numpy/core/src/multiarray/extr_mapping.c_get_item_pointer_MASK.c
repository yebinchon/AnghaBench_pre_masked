
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
typedef TYPE_1__ npy_index_info ;
typedef int PyArrayObject ;


 char* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int*,int ,int,int *) ;

__attribute__((used)) static int
FUNC_4(PyArrayObject *VAR_0, char **VAR_1,
                    npy_index_info *VAR_2, int VAR_3) {
    int VAR_4;
    *VAR_1 = FUNC_0(VAR_0);
    for (VAR_4=0; VAR_4 < VAR_3; VAR_4++) {
        if ((FUNC_3(&(VAR_2[VAR_4].value),
                               FUNC_1(VAR_0)[VAR_4], VAR_4, ((void*)0))) < 0) {
            return -1;
        }
        *VAR_1 += FUNC_2(VAR_0, VAR_4) * VAR_2[VAR_4].value;
    }
    return 0;
}
