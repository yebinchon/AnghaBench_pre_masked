
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dedup {int hypot_cnt; size_t* hypot_list; int * hypot_map; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct btf_dedup *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->hypot_cnt; VAR_2++)
  VAR_1->hypot_map[VAR_1->hypot_list[VAR_2]] = VAR_0;
 VAR_1->hypot_cnt = 0;
}
