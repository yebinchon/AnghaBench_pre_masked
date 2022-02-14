
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct phdr_data {int node; } ;
struct kcore_copy_info {int phdrs; } ;
typedef int off_t ;


 int FUNC_0 (int *,int *) ;
 struct phdr_data* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static struct phdr_data *FUNC_2(struct kcore_copy_info *VAR_0,
       u64 VAR_1, u64 VAR_2,
       off_t VAR_3)
{
 struct phdr_data *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_0(&VAR_4->node, &VAR_0->phdrs);

 return VAR_4;
}
