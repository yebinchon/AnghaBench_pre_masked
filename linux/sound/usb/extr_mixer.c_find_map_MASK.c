
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbmix_name_map {int id; int control; } ;



__attribute__((used)) static const struct usbmix_name_map *
FUNC_0(const struct usbmix_name_map *VAR_0, int VAR_1, int VAR_2)
{
 if (!VAR_0)
  return ((void*)0);

 for (; VAR_0->id; VAR_0++) {
  if (VAR_0->id == VAR_1 &&
      (!VAR_2 || !VAR_0->control || VAR_2 == VAR_0->control))
   return VAR_0;
 }
 return ((void*)0);
}
