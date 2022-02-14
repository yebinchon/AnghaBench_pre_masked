
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_device_iterate_closure {int (* hook ) (char const*,void*) ;void* closure; } ;


 int FUNC_0 (int ,struct grub_device_iterate_closure*) ;
 int VAR_0 ;

int
FUNC_1 (int (*VAR_1) (const char *VAR_2, void *VAR_3),
       void *VAR_4)
{
  struct grub_device_iterate_closure VAR_5;

  VAR_5.hook = VAR_1;
  VAR_5.closure = VAR_4;

  return FUNC_0 (VAR_0, &VAR_5);
}
