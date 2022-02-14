
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmLzxcResetTable {int version; int block_count; int unknown; int table_offset; scalar_t__ uncompressed_len; scalar_t__ compressed_len; scalar_t__ block_len; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned int*,int*) ;
 int FUNC_1 (unsigned char**,unsigned int*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(unsigned char **VAR_2,
                                       unsigned int *VAR_3,
                                       struct chmLzxcResetTable *VAR_4)
{

    if (*VAR_3 != VAR_1)
        return 0;


    FUNC_0 (VAR_2, VAR_3, &VAR_4->version);
    FUNC_0 (VAR_2, VAR_3, &VAR_4->block_count);
    FUNC_0 (VAR_2, VAR_3, &VAR_4->unknown);
    FUNC_0 (VAR_2, VAR_3, &VAR_4->table_offset);
    FUNC_1 (VAR_2, VAR_3, &VAR_4->uncompressed_len);
    FUNC_1 (VAR_2, VAR_3, &VAR_4->compressed_len);
    FUNC_1 (VAR_2, VAR_3, &VAR_4->block_len);


    if (VAR_4->version != 2)
        return 0;

    if (VAR_4->uncompressed_len > VAR_0 || VAR_4->compressed_len > VAR_0)
        return 0;
    if (VAR_4->block_len == 0 || VAR_4->block_len > VAR_0)
        return 0;

    return 1;
}
