
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_selector {int num_set_len; scalar_t__* num_set; scalar_t__* name; } ;


 int FUNC_0 (char const*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct test_selector *VAR_0, int VAR_1, const char *VAR_2)
{
 if (VAR_0->name && VAR_0->name[0] && !FUNC_0(VAR_2, VAR_0->name))
  return 0;

 if (!VAR_0->num_set)
  return 1;

 return VAR_1 < VAR_0->num_set_len && VAR_0->num_set[VAR_1];
}
