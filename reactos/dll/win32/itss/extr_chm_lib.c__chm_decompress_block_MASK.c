
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ block_len; } ;
struct chmFile {scalar_t__ reset_blkcount; scalar_t__ lzx_last_block; int cache_num_blocks; int* cache_block_indices; TYPE_1__ reset_table; int lzx_state; int ** cache_blocks; } ;
typedef scalar_t__ UInt64 ;
typedef int UInt32 ;
typedef int UChar ;
typedef scalar_t__ Int64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct chmFile*,int *,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct chmFile*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static Int64 FUNC_8(struct chmFile *VAR_2,
                                   UInt64 VAR_3,
                                   UChar **VAR_4)
{
    UChar *VAR_5 = FUNC_1( FUNC_0(), 0,
                              ((unsigned int)VAR_2->reset_table.block_len + 6144));
    UInt64 VAR_6;
    Int64 VAR_7;
    int VAR_8;
    UChar *VAR_9;
    UInt32 VAR_10 = (UInt32)(VAR_3 % VAR_2->reset_blkcount);
    UInt32 VAR_11;


    if (VAR_3 - VAR_10 <= VAR_2->lzx_last_block &&
        VAR_3 >= VAR_2->lzx_last_block)
        VAR_10 = (VAR_3 - VAR_2->lzx_last_block);


    if (VAR_10 != 0)
    {

        for (VAR_11 = VAR_10; VAR_11 > 0; VAR_11--)
        {
            UInt32 VAR_12 = VAR_3 - VAR_11;


            if (VAR_2->lzx_last_block != VAR_12)
            {
                if ((VAR_12 % VAR_2->reset_blkcount) == 0)
                {



                    FUNC_4(VAR_2->lzx_state);
                }

                VAR_8 = (int)((VAR_12) % VAR_2->cache_num_blocks);
                VAR_2->cache_block_indices[VAR_8] = VAR_12;
                if (! VAR_2->cache_blocks[VAR_8])
                    VAR_2->cache_blocks[VAR_8] =
                      FUNC_1(FUNC_0(), 0,
                                (unsigned int)(VAR_2->reset_table.block_len));
                VAR_9 = VAR_2->cache_blocks[VAR_8];





                if (!FUNC_6(VAR_2, VAR_12, &VAR_6, &VAR_7) ||
                    FUNC_5(VAR_2, VAR_5, VAR_6, VAR_7) != VAR_7 ||
                    FUNC_3(VAR_2->lzx_state, VAR_5, VAR_9, (int)VAR_7,
                                  (int)VAR_2->reset_table.block_len) != VAR_0)
                {



                    FUNC_2(FUNC_0(), 0, VAR_5);
                    return 0;
                }

                VAR_2->lzx_last_block = (int)VAR_12;
            }
        }
    }
    else
    {
        if ((VAR_3 % VAR_2->reset_blkcount) == 0)
        {



            FUNC_4(VAR_2->lzx_state);
        }
    }


    VAR_8 = (int)(VAR_3 % VAR_2->cache_num_blocks);
    VAR_2->cache_block_indices[VAR_8] = VAR_3;
    if (! VAR_2->cache_blocks[VAR_8])
        VAR_2->cache_blocks[VAR_8] =
          FUNC_1(FUNC_0(), 0, ((unsigned int)VAR_2->reset_table.block_len));
    VAR_9 = VAR_2->cache_blocks[VAR_8];
    *VAR_4 = VAR_9;





    if (! FUNC_6(VAR_2, VAR_3, &VAR_6, &VAR_7) ||
        FUNC_5(VAR_2, VAR_5, VAR_6, VAR_7) != VAR_7 ||
        FUNC_3(VAR_2->lzx_state, VAR_5, VAR_9, (int)VAR_7,
                      (int)VAR_2->reset_table.block_len) != VAR_0)
    {



        FUNC_2(FUNC_0(), 0, VAR_5);
        return 0;
    }
    VAR_2->lzx_last_block = (int)VAR_3;




    FUNC_2(FUNC_0(), 0, VAR_5);
    return VAR_2->reset_table.block_len;
}
