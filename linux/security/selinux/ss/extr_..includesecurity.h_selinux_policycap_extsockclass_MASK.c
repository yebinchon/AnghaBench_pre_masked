
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_state {int* policycap; } ;


 size_t VAR_0 ;
 struct selinux_state VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(void)
{
 struct selinux_state *VAR_2 = &VAR_1;

 return VAR_2->policycap[VAR_0];
}
