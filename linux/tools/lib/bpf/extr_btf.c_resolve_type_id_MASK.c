
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dedup {size_t* map; } ;
typedef size_t __u32 ;


 scalar_t__ FUNC_0 (struct btf_dedup*,size_t) ;

__attribute__((used)) static inline __u32 FUNC_1(struct btf_dedup *VAR_0, __u32 VAR_1)
{
 while (FUNC_0(VAR_0, VAR_1) && VAR_0->map[VAR_1] != VAR_1)
  VAR_1 = VAR_0->map[VAR_1];
 return VAR_1;
}
