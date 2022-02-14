
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rcache; } ;
typedef TYPE_1__ lfs2_t ;
struct TYPE_8__ {int rev; int off; int erased; int split; void** tail; scalar_t__ count; void* etag; int * pair; } ;
typedef TYPE_2__ lfs2_mdir_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int ,int ,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(lfs2_t *VAR_2, lfs2_mdir_t *VAR_3) {

    for (int VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        int VAR_5 = FUNC_0(VAR_2, &VAR_3->pair[(VAR_4+1)%2]);
        if (VAR_5) {
            return VAR_5;
        }
    }



    int VAR_6 = FUNC_1(VAR_2,
            ((void*)0), &VAR_2->rcache, sizeof(VAR_3->rev),
            VAR_3->pair[0], 0, &VAR_3->rev, sizeof(VAR_3->rev));
    VAR_3->rev = FUNC_2(VAR_3->rev);
    if (VAR_6 && VAR_6 != VAR_1) {
        return VAR_6;
    }


    VAR_3->rev += VAR_3->rev & 1;


    VAR_3->off = sizeof(VAR_3->rev);
    VAR_3->etag = VAR_0;
    VAR_3->count = 0;
    VAR_3->tail[0] = VAR_0;
    VAR_3->tail[1] = VAR_0;
    VAR_3->erased = 0;
    VAR_3->split = 0;


    return 0;
}
