
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct btf_dedup {size_t* map; TYPE_1__* btf; } ;
typedef size_t __u32 ;
struct TYPE_2__ {int * types; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct btf_dedup*,size_t) ;

__attribute__((used)) static uint32_t FUNC_2(struct btf_dedup *VAR_0, uint32_t VAR_1)
{
 __u32 VAR_2 = VAR_1;

 if (!FUNC_0(VAR_0->btf->types[VAR_1]))
  return VAR_1;

 while (FUNC_1(VAR_0, VAR_1) && VAR_0->map[VAR_1] != VAR_1)
  VAR_1 = VAR_0->map[VAR_1];

 if (!FUNC_0(VAR_0->btf->types[VAR_1]))
  return VAR_1;

 return VAR_2;
}
