
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmLzxcResetTable {int version; int block_count; int unknown; int table_offset; int block_len; int compressed_len; int uncompressed_len; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned char**,unsigned int*,int*) ;
 int FUNC_1 (unsigned char**,unsigned int*,int *) ;

__attribute__((used)) static BOOL FUNC_2(unsigned char **VAR_3,
                                        unsigned int *VAR_4,
                                        struct chmLzxcResetTable *VAR_5)
{

    if (*VAR_4 != VAR_2)
        return VAR_0;


    FUNC_0 (VAR_3, VAR_4, &VAR_5->version);
    FUNC_0 (VAR_3, VAR_4, &VAR_5->block_count);
    FUNC_0 (VAR_3, VAR_4, &VAR_5->unknown);
    FUNC_0 (VAR_3, VAR_4, &VAR_5->table_offset);
    FUNC_1 (VAR_3, VAR_4, &VAR_5->uncompressed_len);
    FUNC_1 (VAR_3, VAR_4, &VAR_5->compressed_len);
    FUNC_1 (VAR_3, VAR_4, &VAR_5->block_len);


    if (VAR_5->version != 2)
        return VAR_0;

    return VAR_1;
}
