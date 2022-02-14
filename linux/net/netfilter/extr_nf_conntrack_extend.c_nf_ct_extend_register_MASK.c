
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_ext_type {size_t id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (scalar_t__,struct nf_ct_ext_type const*) ;

int FUNC_3(const struct nf_ct_ext_type *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_1);
 if (VAR_2[VAR_3->id]) {
  VAR_4 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_2[VAR_3->id], VAR_3);
out:
 FUNC_1(&VAR_1);
 return VAR_4;
}
