
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct fdt_reserve_entry* FUNC_1 (void const*,int) ;

int FUNC_2(const void *VAR_1)
{
 int VAR_2;
 const struct fdt_reserve_entry *VAR_3;

 for (VAR_2 = 0; (VAR_3 = FUNC_1(VAR_1, VAR_2)) != ((void*)0); VAR_2++) {
  if (FUNC_0(&VAR_3->size) == 0)
   return VAR_2;
 }
 return -VAR_0;
}
