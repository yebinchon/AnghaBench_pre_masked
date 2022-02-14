
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_block_md {int contig_hint; } ;
struct pcpu_chunk {int free_bytes; struct pcpu_block_md chunk_md; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct pcpu_chunk *VAR_1)
{
 const struct pcpu_block_md *VAR_2 = &VAR_1->chunk_md;

 if (VAR_1->free_bytes < VAR_0 ||
     VAR_2->contig_hint == 0)
  return 0;

 return FUNC_0(VAR_2->contig_hint * VAR_0);
}
