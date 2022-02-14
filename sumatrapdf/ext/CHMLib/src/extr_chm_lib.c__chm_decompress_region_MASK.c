
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t block_len; } ;
struct chmFile {size_t* cache_block_indices; size_t cache_num_blocks; int lzx_last_block; int lzx_mutex; int lzx_state; int window_size; int cache_mutex; int ** cache_blocks; TYPE_1__ reset_table; } ;
typedef size_t UInt64 ;
typedef int UChar ;
typedef scalar_t__ Int64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (struct chmFile*,size_t,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,unsigned int) ;

__attribute__((used)) static Int64 FUNC_6(struct chmFile *VAR_0,
                                    UChar *VAR_1,
                                    UInt64 VAR_2,
                                    Int64 VAR_3)
{
    UInt64 VAR_4, VAR_5;
    UInt64 VAR_6;
    UInt64 VAR_7;
    UChar *VAR_8;

    if (VAR_3 <= 0)
        return (Int64)0;


    VAR_4 = VAR_2 / VAR_0->reset_table.block_len;
    VAR_5 = VAR_2 % VAR_0->reset_table.block_len;
    VAR_6 = VAR_3;
    if (VAR_6 > (VAR_0->reset_table.block_len - VAR_5))
        VAR_6 = VAR_0->reset_table.block_len - VAR_5;


    FUNC_0(VAR_0->lzx_mutex);
    FUNC_0(VAR_0->cache_mutex);
    if (VAR_0->cache_block_indices[VAR_4 % VAR_0->cache_num_blocks] == VAR_4 &&
        VAR_0->cache_blocks[VAR_4 % VAR_0->cache_num_blocks] != ((void*)0))
    {
        FUNC_5(VAR_1,
               VAR_0->cache_blocks[VAR_4 % VAR_0->cache_num_blocks] + VAR_5,
               (unsigned int)VAR_6);
        FUNC_1(VAR_0->cache_mutex);
        FUNC_1(VAR_0->lzx_mutex);
        return VAR_6;
    }
    FUNC_1(VAR_0->cache_mutex);


    if (! VAR_0->lzx_state)
    {
        int VAR_9 = FUNC_4(VAR_0->window_size) - 1;
        VAR_0->lzx_last_block = -1;
        VAR_0->lzx_state = FUNC_2(VAR_9);
    }


    VAR_7 = FUNC_3(VAR_0, VAR_4, &VAR_8);

    if (VAR_7 == (UInt64)-1)
    {
        FUNC_1(VAR_0->lzx_mutex);
        return 0;
    }
    if (VAR_7 < VAR_6)
        VAR_6 = VAR_7;
    FUNC_5(VAR_1, VAR_8+VAR_5, (unsigned int)VAR_6);
    FUNC_1(VAR_0->lzx_mutex);
    return VAR_6;
}
