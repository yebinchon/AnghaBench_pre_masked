
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sym_data {int node; int addr; } ;
struct kcore_copy_info {int syms; } ;


 int FUNC_0 (int *,int *) ;
 struct sym_data* FUNC_1 (int) ;

__attribute__((used)) static struct sym_data *FUNC_2(struct kcore_copy_info *VAR_0,
         u64 VAR_1)
{
 struct sym_data *VAR_2 = FUNC_1(sizeof(*VAR_2));

 if (VAR_2) {
  VAR_2->addr = VAR_1;
  FUNC_0(&VAR_2->node, &VAR_0->syms);
 }

 return VAR_2;
}
