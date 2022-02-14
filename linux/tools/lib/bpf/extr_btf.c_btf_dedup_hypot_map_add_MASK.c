
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dedup {int hypot_cnt; int hypot_cap; size_t* hypot_list; size_t* hypot_map; } ;
typedef size_t __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 size_t* FUNC_1 (size_t*,int) ;

__attribute__((used)) static int FUNC_2(struct btf_dedup *VAR_1,
       __u32 VAR_2, __u32 VAR_3)
{
 if (VAR_1->hypot_cnt == VAR_1->hypot_cap) {
  __u32 *VAR_4;

  VAR_1->hypot_cap += FUNC_0(16, VAR_1->hypot_cap / 2);
  VAR_4 = FUNC_1(VAR_1->hypot_list, sizeof(__u32) * VAR_1->hypot_cap);
  if (!VAR_4)
   return -VAR_0;
  VAR_1->hypot_list = VAR_4;
 }
 VAR_1->hypot_list[VAR_1->hypot_cnt++] = VAR_2;
 VAR_1->hypot_map[VAR_2] = VAR_3;
 return 0;
}
