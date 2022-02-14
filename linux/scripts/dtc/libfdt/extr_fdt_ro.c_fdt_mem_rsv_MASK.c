
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;


 struct fdt_reserve_entry const* FUNC_0 (void const*,int) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;

__attribute__((used)) static const struct fdt_reserve_entry *FUNC_3(const void *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 * sizeof(struct fdt_reserve_entry);
 int VAR_3 = FUNC_1(VAR_0) + VAR_2;

 if (VAR_3 < FUNC_1(VAR_0))
  return ((void*)0);
 if (VAR_3 > FUNC_2(VAR_0) - sizeof(struct fdt_reserve_entry))
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1);
}
