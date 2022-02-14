
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int cdc ;
struct TYPE_5__ {scalar_t__ blk_sha1s; int file_sum; int write_block; void* block_max_sz; void* block_min_sz; void* block_sz; } ;
typedef int SeafileCrypt ;
typedef int SeafStat ;
typedef TYPE_1__ CDCFileDescriptor ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,TYPE_1__*,int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,TYPE_1__*,unsigned char*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_2, SeafStat *VAR_3,
                          SeafileCrypt *VAR_4, int VAR_5,
                          uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8,
                          unsigned char VAR_9[])
{
    CDCFileDescriptor VAR_10;

    FUNC_3 (&VAR_10, 0, sizeof(VAR_10));
    VAR_10.block_sz = VAR_6;
    VAR_10.block_min_sz = VAR_7;
    VAR_10.block_max_sz = VAR_8;
    VAR_10.write_block = VAR_1;
    if (FUNC_0 (VAR_2, &VAR_10, VAR_4, VAR_0) < 0) {
        FUNC_5 ("Failed to chunk file.\n");
        return -1;
    }

    if (VAR_5 > 0)
        FUNC_4 (VAR_5, &VAR_10, VAR_9);
    else
        FUNC_2 (VAR_9, VAR_10.file_sum, 20);

    if (VAR_10.blk_sha1s)
        FUNC_1 (VAR_10.blk_sha1s);

    return 0;
}
