
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lfs1_t ;
struct TYPE_4__ {int rev; int size; int* tail; } ;
struct TYPE_5__ {int off; TYPE_1__ d; int * pair; } ;
typedef TYPE_2__ lfs1_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(lfs1_t *VAR_1, lfs1_dir_t *VAR_2) {

    for (int VAR_3 = 0; VAR_3 < 2; VAR_3++) {
        int VAR_4 = FUNC_0(VAR_1, &VAR_2->pair[VAR_3]);
        if (VAR_4) {
            return VAR_4;
        }
    }



    int VAR_5 = FUNC_1(VAR_1, VAR_2->pair[0], 0, &VAR_2->d.rev, 4);
    if (VAR_5 && VAR_5 != VAR_0) {
        return VAR_5;
    }

    if (VAR_5 != VAR_0) {
        VAR_2->d.rev = FUNC_2(VAR_2->d.rev);
    }


    VAR_2->d.rev += 1;
    VAR_2->d.size = sizeof(VAR_2->d)+4;
    VAR_2->d.tail[0] = 0xffffffff;
    VAR_2->d.tail[1] = 0xffffffff;
    VAR_2->off = sizeof(VAR_2->d);


    return 0;
}
