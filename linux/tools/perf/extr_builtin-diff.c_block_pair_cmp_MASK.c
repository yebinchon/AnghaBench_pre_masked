
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {struct block_info* block_info; } ;
struct block_info {scalar_t__ start; scalar_t__ end; TYPE_1__* sym; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 struct block_info *VAR_2 = VAR_0->block_info;
 struct block_info *VAR_3 = VAR_1->block_info;
 int VAR_4;

 if (!VAR_2->sym || !VAR_3->sym)
  return -1;

 VAR_4 = FUNC_0(VAR_2->sym->name, VAR_3->sym->name);

 if ((!VAR_4) && (VAR_2->start == VAR_3->start) && (VAR_2->end == VAR_3->end))
  return 0;

 return -1;
}
