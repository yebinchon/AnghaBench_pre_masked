
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_trans {int source_type; int target_type; int target_class; } ;
struct hashtab {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct hashtab *VAR_0, const void *VAR_1, const void *VAR_2)
{
 const struct range_trans *VAR_3 = VAR_1, *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = VAR_3->source_type - VAR_4->source_type;
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_3->target_type - VAR_4->target_type;
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_3->target_class - VAR_4->target_class;

 return VAR_5;
}
