
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct lru_cache {int changed; int locked; int starving; int misses; int hits; int nr_elements; int used; int name; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(struct seq_file *VAR_0, struct lru_cache *VAR_1)
{







 FUNC_0(VAR_0, "\t%s: used:%u/%u hits:%lu misses:%lu starving:%lu locked:%lu changed:%lu\n",
     VAR_1->name, VAR_1->used, VAR_1->nr_elements,
     VAR_1->hits, VAR_1->misses, VAR_1->starving, VAR_1->locked, VAR_1->changed);
}
