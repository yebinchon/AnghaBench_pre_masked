
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_list {int items; } ;
struct device_item {int dummy; } ;


 int FUNC_0 (int ,struct device_item*) ;
 int FUNC_1 (struct device_item*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct device_list *VAR_0,
       struct device_item *VAR_1)
{
 FUNC_0(VAR_0->items, VAR_1);
 FUNC_1(VAR_1, 0, sizeof(struct device_item));
}
