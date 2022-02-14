
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_item {int str; int name; } ;
struct list_data {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct list_data *VAR_1,
      struct list_item *VAR_2)
{
 FUNC_0(VAR_2->name);
 if (VAR_1->format == VAR_0)
  FUNC_0(VAR_2->str);
}
