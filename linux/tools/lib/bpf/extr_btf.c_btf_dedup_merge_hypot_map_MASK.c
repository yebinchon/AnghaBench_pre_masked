
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_dedup {int hypot_cnt; size_t* hypot_list; size_t* hypot_map; size_t* map; TYPE_1__* btf; } ;
typedef size_t __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {int * types; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct btf_dedup*,size_t) ;
 size_t FUNC_2 (struct btf_dedup*,size_t) ;

__attribute__((used)) static void FUNC_3(struct btf_dedup *VAR_3)
{
 __u32 VAR_4, VAR_5;
 __u16 VAR_6, VAR_7;
 __u32 VAR_8, VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3->hypot_cnt; VAR_10++) {
  VAR_4 = VAR_3->hypot_list[VAR_10];
  VAR_5 = VAR_3->hypot_map[VAR_4];
  VAR_8 = FUNC_2(VAR_3, VAR_5);
  VAR_9 = FUNC_2(VAR_3, VAR_4);
  VAR_6 = FUNC_0(VAR_3->btf->types[VAR_8]);
  VAR_7 = FUNC_0(VAR_3->btf->types[VAR_9]);
  if (VAR_6 != VAR_0 && VAR_7 == VAR_0)
   VAR_3->map[VAR_9] = VAR_8;
  else if (VAR_6 == VAR_0 && VAR_7 != VAR_0)
   VAR_3->map[VAR_8] = VAR_9;

  if ((VAR_6 == VAR_1 || VAR_6 == VAR_2) &&
      VAR_7 != VAR_0 &&
      FUNC_1(VAR_3, VAR_9) &&
      !FUNC_1(VAR_3, VAR_8)) {






   VAR_3->map[VAR_8] = VAR_9;
  }
 }
}
