
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dedup {struct btf_dedup* hypot_list; struct btf_dedup* hypot_map; struct btf_dedup* map; int * dedup_table; } ;


 int FUNC_0 (struct btf_dedup*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct btf_dedup *VAR_0)
{
 FUNC_1(VAR_0->dedup_table);
 VAR_0->dedup_table = ((void*)0);

 FUNC_0(VAR_0->map);
 VAR_0->map = ((void*)0);

 FUNC_0(VAR_0->hypot_map);
 VAR_0->hypot_map = ((void*)0);

 FUNC_0(VAR_0->hypot_list);
 VAR_0->hypot_list = ((void*)0);

 FUNC_0(VAR_0);
}
