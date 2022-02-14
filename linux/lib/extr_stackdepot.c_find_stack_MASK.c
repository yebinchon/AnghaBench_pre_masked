
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stack_record {scalar_t__ hash; int size; int entries; struct stack_record* next; } ;


 int FUNC_0 (unsigned long*,int ,int) ;

__attribute__((used)) static inline struct stack_record *FUNC_1(struct stack_record *VAR_0,
          unsigned long *VAR_1, int VAR_2,
          u32 VAR_3)
{
 struct stack_record *VAR_4;

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->hash == VAR_3 &&
      VAR_4->size == VAR_2 &&
      !FUNC_0(VAR_1, VAR_4->entries, VAR_2))
   return VAR_4;
 }
 return ((void*)0);
}
