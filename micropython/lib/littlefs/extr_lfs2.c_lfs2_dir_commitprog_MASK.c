
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct lfs2_commit {int off; int crc; int block; } ;
struct TYPE_4__ {int rcache; int pcache; } ;
typedef TYPE_1__ lfs2_t ;
typedef scalar_t__ lfs2_size_t ;


 int FUNC_0 (TYPE_1__*,int *,int *,int,int ,int ,int const*,scalar_t__) ;
 int FUNC_1 (int ,void const*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(lfs2_t *VAR_0, struct lfs2_commit *VAR_1,
        const void *VAR_2, lfs2_size_t VAR_3) {
    int VAR_4 = FUNC_0(VAR_0,
            &VAR_0->pcache, &VAR_0->rcache, 0,
            VAR_1->block, VAR_1->off ,
            (const uint8_t*)VAR_2, VAR_3);
    if (VAR_4) {
        return VAR_4;
    }

    VAR_1->crc = FUNC_1(VAR_1->crc, VAR_2, VAR_3);
    VAR_1->off += VAR_3;
    return 0;
}
