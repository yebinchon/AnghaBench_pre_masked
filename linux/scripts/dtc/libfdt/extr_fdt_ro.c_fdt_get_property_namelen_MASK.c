
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int dummy; } ;


 int VAR_0 ;
 struct fdt_property const* FUNC_0 (void const*,int,char const*,int,int*,int *) ;
 int FUNC_1 (void const*) ;

const struct fdt_property *FUNC_2(const void *VAR_1,
          int VAR_2,
          const char *VAR_3,
          int VAR_4, int *VAR_5)
{


 if (FUNC_1(VAR_1) < 0x10) {
  if (VAR_5)
   *VAR_5 = -VAR_0;
  return ((void*)0);
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      ((void*)0));
}
