
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t num; } ;
struct config_section {struct darray const items; int name; } ;
typedef struct config_item {int name; } const config_item ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 void* FUNC_1 (int,struct darray const*,size_t) ;

__attribute__((used)) static const struct config_item *FUNC_2(const struct darray *VAR_0,
        const char *VAR_1,
        const char *VAR_2)
{
 size_t VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->num; VAR_3++) {
  const struct config_section *VAR_5 =
   FUNC_1(sizeof(struct config_section), VAR_0, VAR_3);

  if (FUNC_0(VAR_5->name, VAR_1) == 0) {
   for (VAR_4 = 0; VAR_4 < VAR_5->items.num; VAR_4++) {
    struct config_item *VAR_6 =
     FUNC_1(sizeof(struct config_item),
          &VAR_5->items, VAR_4);

    if (FUNC_0(VAR_6->name, VAR_2) == 0)
     return VAR_6;
   }
  }
 }

 return ((void*)0);
}
