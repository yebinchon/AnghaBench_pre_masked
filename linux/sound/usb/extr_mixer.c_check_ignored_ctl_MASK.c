
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbmix_name_map {scalar_t__ dB; scalar_t__ name; } ;



__attribute__((used)) static inline int
FUNC_0(const struct usbmix_name_map *VAR_0)
{
 if (!VAR_0 || VAR_0->name || VAR_0->dB)
  return 0;
 return 1;
}
