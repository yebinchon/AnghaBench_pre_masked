
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pcpu_block_md {int first_free; int contig_hint; } ;
struct pcpu_chunk {int end_offset; int start_offset; int nr_alloc; int max_alloc_size; int nr_empty_pop_pages; int free_bytes; int alloc_map; int bound_map; struct pcpu_block_md chunk_md; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct pcpu_chunk*) ;
 int FUNC_5 (struct seq_file*,char) ;
 int FUNC_6 (int*,int,int,int ,int *) ;
 scalar_t__ FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct seq_file *VAR_2, struct pcpu_chunk *VAR_3,
       int *VAR_4)
{
 struct pcpu_block_md *VAR_5 = &VAR_3->chunk_md;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int *VAR_11, *VAR_12;

 int VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;

 VAR_11 = VAR_4;






 VAR_7 = FUNC_1(VAR_3->alloc_map,
       FUNC_4(VAR_3) -
       VAR_3->end_offset / VAR_0 - 1);
 VAR_7 = FUNC_7(VAR_7, VAR_3->alloc_map) ?
       VAR_7 + 1 : 0;

 VAR_8 = 0;
 VAR_9 = VAR_3->start_offset / VAR_0;
 while (VAR_9 < VAR_7) {
  if (FUNC_7(VAR_9, VAR_3->alloc_map)) {
   VAR_10 = FUNC_2(VAR_3->bound_map, VAR_7,
         VAR_9 + 1);
   VAR_11[VAR_8] = 1;
  } else {
   VAR_10 = FUNC_2(VAR_3->alloc_map, VAR_7,
         VAR_9 + 1);
   VAR_11[VAR_8] = -1;
  }

  VAR_11[VAR_8++] *= (VAR_10 - VAR_9) * VAR_0;

  VAR_9 = VAR_10;
 }





 if (VAR_8 > 0) {
  FUNC_6(VAR_11, VAR_8, sizeof(int), VAR_1, ((void*)0));


  for (VAR_6 = 0, VAR_12 = VAR_11; *VAR_12 < 0 && VAR_6 < VAR_8; VAR_6++, VAR_12++) {
   VAR_13 -= *VAR_12;
   VAR_14 = FUNC_3(VAR_14, -1 * (*VAR_12));
  }

  VAR_15 = VAR_11[VAR_6];
  VAR_16 = VAR_11[(VAR_6 + VAR_8 - 1) / 2];
  VAR_17 = VAR_11[VAR_8 - 1];
 }

 FUNC_0("nr_alloc", VAR_3->nr_alloc);
 FUNC_0("max_alloc_size", VAR_3->max_alloc_size);
 FUNC_0("empty_pop_pages", VAR_3->nr_empty_pop_pages);
 FUNC_0("first_bit", VAR_5->first_free);
 FUNC_0("free_bytes", VAR_3->free_bytes);
 FUNC_0("contig_bytes", VAR_5->contig_hint * VAR_0);
 FUNC_0("sum_frag", VAR_13);
 FUNC_0("max_frag", VAR_14);
 FUNC_0("cur_min_alloc", VAR_15);
 FUNC_0("cur_med_alloc", VAR_16);
 FUNC_0("cur_max_alloc", VAR_17);
 FUNC_5(VAR_2, '\n');
}
