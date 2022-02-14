
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct branch_flags {scalar_t__ predicted; } ;
struct block_range_iter {int dummy; } ;
struct block_range {int pred; int taken; int is_branch; int coverage; struct symbol* sym; int entry; int is_target; } ;
struct annotation {int max_coverage; } ;
struct addr_map_symbol {scalar_t__ addr; struct symbol* sym; } ;


 int FUNC_0 (int ) ;
 struct block_range_iter FUNC_1 (scalar_t__,scalar_t__) ;
 struct block_range* FUNC_2 (struct block_range_iter*) ;
 scalar_t__ FUNC_3 (struct block_range_iter*) ;
 int FUNC_4 (struct block_range_iter*) ;
 int FUNC_5 (int ,int ) ;
 struct annotation* FUNC_6 (struct symbol*) ;

__attribute__((used)) static void FUNC_7(struct addr_map_symbol *VAR_0,
    struct addr_map_symbol *VAR_1,
    struct branch_flags *VAR_2)
{
 struct symbol *VAR_3 = VAR_0->sym;
 struct annotation *VAR_4 = VAR_3 ? FUNC_6(VAR_3) : ((void*)0);
 struct block_range_iter VAR_5;
 struct block_range *VAR_6;




 if (!VAR_0->addr || VAR_0->addr > VAR_1->addr)
  return;

 VAR_5 = FUNC_1(VAR_0->addr, VAR_1->addr);
 if (!FUNC_4(&VAR_5))
  return;




 VAR_6 = FUNC_2(&VAR_5);
 FUNC_0(VAR_6->is_target);
 VAR_6->entry++;

 do {
  VAR_6 = FUNC_2(&VAR_5);

  VAR_6->coverage++;
  VAR_6->sym = VAR_3;

  if (VAR_4)
   VAR_4->max_coverage = FUNC_5(VAR_4->max_coverage, VAR_6->coverage);

 } while (FUNC_3(&VAR_5));




 VAR_6 = FUNC_2(&VAR_5);
 FUNC_0(VAR_6->is_branch);
 VAR_6->taken++;
 if (VAR_2->predicted)
  VAR_6->pred++;
}
