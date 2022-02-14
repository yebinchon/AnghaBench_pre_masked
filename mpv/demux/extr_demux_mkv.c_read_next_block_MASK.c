
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block_info {int dummy; } ;
struct TYPE_5__ {int num_blocks; struct block_info* blocks; } ;
typedef TYPE_1__ mkv_demuxer_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ demuxer_t ;


 int FUNC_0 (struct block_info*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(demuxer_t *VAR_0, struct block_info *VAR_1)
{
    mkv_demuxer_t *VAR_2 = VAR_0->priv;

    if (!VAR_2->num_blocks) {
        int VAR_3 = FUNC_2(VAR_0);
        if (VAR_3 < 1)
            return VAR_3;

        FUNC_1(VAR_2->num_blocks);
    }

    *VAR_1 = VAR_2->blocks[0];
    FUNC_0(VAR_2->blocks, VAR_2->num_blocks, 0);
    return 1;
}
