
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct map_groups {int dummy; } ;
struct map {int (* map_ip ) (struct map*,int ) ;} ;


 struct symbol* FUNC_0 (struct map*,int ) ;
 scalar_t__ FUNC_1 (struct map*) ;
 struct map* FUNC_2 (struct map_groups*,int ) ;
 int FUNC_3 (struct map*,int ) ;

struct symbol *FUNC_4(struct map_groups *VAR_0,
           u64 VAR_1, struct map **VAR_2)
{
 struct map *VAR_3 = FUNC_2(VAR_0, VAR_1);


 if (VAR_3 != ((void*)0) && FUNC_1(VAR_3) >= 0) {
  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_3;
  return FUNC_0(VAR_3, VAR_3->map_ip(VAR_3, VAR_1));
 }

 return ((void*)0);
}
