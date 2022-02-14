
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_entry {scalar_t__ addr; } ;
struct addr_range {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static int FUNC_0(struct sym_entry *VAR_0, struct addr_range *VAR_1,
      int VAR_2)
{
 size_t VAR_3;
 struct addr_range *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_4 = &VAR_1[VAR_3];

  if (VAR_0->addr >= VAR_4->start && VAR_0->addr <= VAR_4->end)
   return 1;
 }

 return 0;
}
