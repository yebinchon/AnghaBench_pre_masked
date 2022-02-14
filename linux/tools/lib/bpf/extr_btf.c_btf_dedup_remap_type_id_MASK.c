
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dedup {size_t* hypot_map; } ;
typedef size_t __u32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct btf_dedup*,size_t) ;

__attribute__((used)) static int FUNC_1(struct btf_dedup *VAR_2, __u32 VAR_3)
{
 __u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_5 = VAR_2->hypot_map[VAR_4];
 if (VAR_5 > VAR_0)
  return -VAR_1;
 return VAR_5;
}
