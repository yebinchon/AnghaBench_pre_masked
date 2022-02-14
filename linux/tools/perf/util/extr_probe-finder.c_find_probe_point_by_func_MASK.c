
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_finder {int cu_die; } ;
struct dwarf_callback_param {void* data; int retval; } ;


 int FUNC_0 (int *,int ,struct dwarf_callback_param*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct probe_finder *VAR_1)
{
 struct dwarf_callback_param VAR_2 = {.data = (void *)VAR_1,
           .retval = 0};
 FUNC_0(&VAR_1->cu_die, VAR_0, &VAR_2, 0);
 return VAR_2.retval;
}
