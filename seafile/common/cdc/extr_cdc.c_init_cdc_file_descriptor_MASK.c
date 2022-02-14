
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int * WriteblockFunc ;
struct TYPE_3__ {int block_min_sz; scalar_t__ block_max_sz; scalar_t__ block_sz; int max_block_nr; int * blk_sha1s; int * write_block; scalar_t__ block_nr; } ;
typedef TYPE_1__ CDCFileDescriptor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1 (int VAR_5,
                                     uint64_t VAR_6,
                                     CDCFileDescriptor *VAR_7)
{
    int VAR_8 = 0;
    int VAR_9 = 0;

    VAR_7->block_nr = 0;

    if (VAR_7->block_min_sz <= 0)
        VAR_7->block_min_sz = VAR_1;
    if (VAR_7->block_max_sz <= 0)
        VAR_7->block_max_sz = VAR_0;
    if (VAR_7->block_sz <= 0)
        VAR_7->block_sz = VAR_2;

    if (VAR_7->write_block == ((void*)0))
        VAR_7->write_block = (WriteblockFunc)VAR_4;

    VAR_9 = VAR_7->block_min_sz;
    VAR_8 = ((VAR_6 + VAR_9 - 1) / VAR_9);
    VAR_7->blk_sha1s = (uint8_t *)FUNC_0 (sizeof(uint8_t),
                                               VAR_8 * VAR_3);
    VAR_7->max_block_nr = VAR_8;

    return 0;
}
