
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct sbitmap {unsigned int depth; unsigned int shift; unsigned int map_nr; } ;


 unsigned int FUNC_0 (struct sbitmap*) ;
 unsigned int FUNC_1 (struct sbitmap*) ;
 int FUNC_2 (struct seq_file*,char*,unsigned int) ;

void FUNC_3(struct sbitmap *VAR_0, struct seq_file *VAR_1)
{
 FUNC_2(VAR_1, "depth=%u\n", VAR_0->depth);
 FUNC_2(VAR_1, "busy=%u\n", FUNC_1(VAR_0) - FUNC_0(VAR_0));
 FUNC_2(VAR_1, "cleared=%u\n", FUNC_0(VAR_0));
 FUNC_2(VAR_1, "bits_per_word=%u\n", 1U << VAR_0->shift);
 FUNC_2(VAR_1, "map_nr=%u\n", VAR_0->map_nr);
}
