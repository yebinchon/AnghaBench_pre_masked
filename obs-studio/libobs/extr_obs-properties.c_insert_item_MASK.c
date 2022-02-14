
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_item {long long ll; double d; void* str; void* name; int * member_0; } ;
struct list_data {scalar_t__ format; int items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (void const*) ;
 int FUNC_1 (int ,size_t,struct list_item*) ;

__attribute__((used)) static void FUNC_2(struct list_data *VAR_2, size_t VAR_3, const char *VAR_4,
   const void *VAR_5)
{
 struct list_item VAR_6 = {((void*)0)};
 VAR_6.name = FUNC_0(VAR_4);

 if (VAR_2->format == VAR_1)
  VAR_6.ll = *(const long long *)VAR_5;
 else if (VAR_2->format == VAR_0)
  VAR_6.d = *(const double *)VAR_5;
 else
  VAR_6.str = FUNC_0(VAR_5);

 FUNC_1(VAR_2->items, VAR_3, &VAR_6);
}
