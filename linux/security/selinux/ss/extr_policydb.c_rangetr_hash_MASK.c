
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct range_trans {int source_type; int target_type; int target_class; } ;
struct hashtab {int size; } ;



__attribute__((used)) static u32 FUNC_0(struct hashtab *VAR_0, const void *VAR_1)
{
 const struct range_trans *VAR_2 = VAR_1;

 return (VAR_2->source_type + (VAR_2->target_type << 3) +
  (VAR_2->target_class << 5)) & (VAR_0->size - 1);
}
