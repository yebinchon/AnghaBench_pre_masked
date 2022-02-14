
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_item {long long ll; double d; void* str; void* name; int * member_0; } ;
struct list_data {scalar_t__ format; int items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (void const*) ;
 size_t FUNC_1 (int ,struct list_item*) ;

__attribute__((used)) static size_t FUNC_2(struct list_data *VAR_2, const char *VAR_3,
         const void *VAR_4)
{
 struct list_item VAR_5 = {((void*)0)};
 VAR_5.name = FUNC_0(VAR_3);

 if (VAR_2->format == VAR_1)
  VAR_5.ll = *(const long long *)VAR_4;
 else if (VAR_2->format == VAR_0)
  VAR_5.d = *(const double *)VAR_4;
 else
  VAR_5.str = FUNC_0(VAR_4);

 return FUNC_1(VAR_2->items, &VAR_5);
}
