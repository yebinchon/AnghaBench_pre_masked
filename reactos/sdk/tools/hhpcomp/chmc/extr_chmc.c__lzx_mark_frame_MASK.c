
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* compressed_len; void* uncompressed_len; int block_count; } ;
struct chmcSection {TYPE_1__ reset_table_header; } ;
struct chmcLzxInfo {TYPE_2__* chm; scalar_t__ todo; scalar_t__ done; } ;
typedef void* UInt64 ;
struct TYPE_4__ {struct chmcSection** sections; } ;


 int FUNC_0 (TYPE_2__*,void*) ;
 int FUNC_1 (char*,void*,void*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct chmcLzxInfo *VAR_3 = (struct chmcLzxInfo *)VAR_0;
 struct chmcSection *VAR_4 = VAR_3->chm->sections[1];

 UInt64 VAR_5;

 FUNC_1( "Aligned data at %d(in compressed stream, %d) (%lu/%lu)\n",
            VAR_1, VAR_2, (unsigned long)VAR_3->done, (unsigned long)VAR_3->todo );

 VAR_5 = VAR_2;

 VAR_4->reset_table_header.block_count++;

 FUNC_0( VAR_3->chm, VAR_5 );

 VAR_4->reset_table_header.uncompressed_len = VAR_1;
 VAR_4->reset_table_header.compressed_len = VAR_2;
}
