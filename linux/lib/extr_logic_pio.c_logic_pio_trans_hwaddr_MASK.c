
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logic_pio_hwaddr {scalar_t__ flags; scalar_t__ size; scalar_t__ hw_start; scalar_t__ io_start; } ;
struct fwnode_handle {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 scalar_t__ VAR_0 ;
 struct logic_pio_hwaddr* FUNC_0 (struct fwnode_handle*) ;
 int FUNC_1 (char*,...) ;

unsigned long FUNC_2(struct fwnode_handle *VAR_1,
         resource_size_t VAR_2, resource_size_t VAR_3)
{
 struct logic_pio_hwaddr *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4 || VAR_4->flags == VAR_0) {
  FUNC_1("IO range not found or invalid\n");
  return ~0UL;
 }
 if (VAR_4->size < VAR_3) {
  FUNC_1("resource size %pa cannot fit in IO range size %pa\n",
         &VAR_3, &VAR_4->size);
  return ~0UL;
 }
 return VAR_2 - VAR_4->hw_start + VAR_4->io_start;
}
