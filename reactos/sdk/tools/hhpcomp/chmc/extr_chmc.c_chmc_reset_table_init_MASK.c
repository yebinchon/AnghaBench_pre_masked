
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcLzxcResetTable {int version; int entry_size; int block_len; scalar_t__ compressed_len; scalar_t__ uncompressed_len; int table_offset; scalar_t__ block_count; } ;


 int VAR_0 ;

void FUNC_0(struct chmcLzxcResetTable *VAR_1)
{
 VAR_1->version = 2;
 VAR_1->block_count = 0;
 VAR_1->entry_size = 8;
 VAR_1->table_offset = VAR_0;
 VAR_1->uncompressed_len = 0;
 VAR_1->compressed_len = 0;
 VAR_1->block_len = 0x8000;
}
