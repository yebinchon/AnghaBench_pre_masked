
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {int start; } ;
struct map {scalar_t__ (* unmap_ip ) (struct map*,int ) ;scalar_t__ start; scalar_t__ end; } ;


 scalar_t__ FUNC_0 (struct map*,int ) ;

__attribute__((used)) static bool FUNC_1(struct map *VAR_0, struct symbol *VAR_1)
{
 u64 VAR_2 = VAR_0->unmap_ip(VAR_0, VAR_1->start);

 return VAR_2 >= VAR_0->start && VAR_2 < VAR_0->end;
}
