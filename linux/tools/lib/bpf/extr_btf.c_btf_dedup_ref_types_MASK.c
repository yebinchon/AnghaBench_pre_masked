
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_dedup {int * dedup_table; TYPE_1__* btf; } ;
struct TYPE_2__ {int nr_types; } ;


 int FUNC_0 (struct btf_dedup*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct btf_dedup *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 1; VAR_1 <= VAR_0->btf->nr_types; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 FUNC_1(VAR_0->dedup_table);
 VAR_0->dedup_table = ((void*)0);
 return 0;
}
