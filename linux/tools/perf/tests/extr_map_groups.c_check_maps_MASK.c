
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map_groups {int dummy; } ;
struct map_def {scalar_t__ start; scalar_t__ end; int name; } ;
struct map {scalar_t__ start; scalar_t__ end; int refcnt; TYPE_1__* dso; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct map* FUNC_1 (struct map_groups*) ;
 struct map* FUNC_2 (struct map*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct map_def *VAR_1, unsigned int VAR_2, struct map_groups *VAR_3)
{
 struct map *VAR_4;
 unsigned int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_3);
 while (VAR_4) {
  FUNC_0("wrong map start", VAR_4->start == VAR_1[VAR_5].start);
  FUNC_0("wrong map end", VAR_4->end == VAR_1[VAR_5].end);
  FUNC_0("wrong map name", !FUNC_4(VAR_4->dso->name, VAR_1[VAR_5].name));
  FUNC_0("wrong map refcnt", FUNC_3(&VAR_4->refcnt) == 2);

  VAR_5++;
  VAR_4 = FUNC_2(VAR_4);

  FUNC_0("less maps expected", (VAR_4 && VAR_5 < VAR_2) || (!VAR_4 && VAR_5 == VAR_2));
 }

 return VAR_0;
}
