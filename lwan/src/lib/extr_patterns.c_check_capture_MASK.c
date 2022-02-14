
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match_state {int level; TYPE_1__* capture; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct match_state*,char*) ;

__attribute__((used)) static int
FUNC_1(struct match_state *VAR_1, int VAR_2)
{
 VAR_2 -= '1';
 if (VAR_2 < 0 || VAR_2 >= VAR_1->level || VAR_1->capture[VAR_2].len == VAR_0)
  return FUNC_0(VAR_1, "invalid capture index");
 return (VAR_2);
}
