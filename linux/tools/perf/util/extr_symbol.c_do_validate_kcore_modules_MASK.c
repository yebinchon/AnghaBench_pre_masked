
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct module_info {scalar_t__ start; } ;
struct map_groups {int dummy; } ;
struct map {scalar_t__ start; TYPE_1__* dso; } ;
struct TYPE_2__ {int short_name; } ;


 int VAR_0 ;
 struct rb_root VAR_1 ;
 int FUNC_0 (struct map*) ;
 int FUNC_1 (struct rb_root*) ;
 struct module_info* FUNC_2 (int ,struct rb_root*) ;
 struct map* FUNC_3 (struct map_groups*) ;
 struct map* FUNC_4 (struct map*) ;
 int FUNC_5 (char const*,struct rb_root*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2,
      struct map_groups *VAR_3)
{
 struct rb_root VAR_4 = VAR_1;
 struct map *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_3(VAR_3);
 while (VAR_5) {
  struct map *VAR_7 = FUNC_4(VAR_5);
  struct module_info *VAR_8;

  if (!FUNC_0(VAR_5)) {
   VAR_5 = VAR_7;
   continue;
  }


  VAR_8 = FUNC_2(VAR_5->dso->short_name, &VAR_4);
  if (!VAR_8 || VAR_8->start != VAR_5->start) {
   VAR_6 = -VAR_0;
   goto out;
  }

  VAR_5 = VAR_7;
 }
out:
 FUNC_1(&VAR_4);
 return VAR_6;
}
