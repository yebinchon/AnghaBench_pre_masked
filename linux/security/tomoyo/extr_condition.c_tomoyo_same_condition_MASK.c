
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_condition {scalar_t__ size; scalar_t__ condc; scalar_t__ numbers_count; scalar_t__ names_count; scalar_t__ argc; scalar_t__ envc; scalar_t__ grant_log; scalar_t__ transit; } ;


 int FUNC_0 (struct tomoyo_condition const*,struct tomoyo_condition const*,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(const struct tomoyo_condition *VAR_0,
      const struct tomoyo_condition *VAR_1)
{
 return VAR_0->size == VAR_1->size && VAR_0->condc == VAR_1->condc &&
  VAR_0->numbers_count == VAR_1->numbers_count &&
  VAR_0->names_count == VAR_1->names_count &&
  VAR_0->argc == VAR_1->argc && VAR_0->envc == VAR_1->envc &&
  VAR_0->grant_log == VAR_1->grant_log && VAR_0->transit == VAR_1->transit &&
  !FUNC_0(VAR_0 + 1, VAR_1 + 1, VAR_0->size - sizeof(*VAR_0));
}
