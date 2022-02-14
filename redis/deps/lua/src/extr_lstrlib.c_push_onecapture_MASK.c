
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {int level; int src_init; TYPE_1__* capture; int L; } ;
struct TYPE_4__ {int len; char const* init; } ;
typedef TYPE_2__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_3 (MatchState *VAR_2, int VAR_3, const char *VAR_4,
                                                    const char *VAR_5) {
  if (VAR_3 >= VAR_2->level) {
    if (VAR_3 == 0)
      FUNC_2(VAR_2->L, VAR_4, VAR_5 - VAR_4);
    else
      FUNC_0(VAR_2->L, "invalid capture index");
  }
  else {
    ptrdiff_t VAR_6 = VAR_2->capture[VAR_3].len;
    if (VAR_6 == VAR_1) FUNC_0(VAR_2->L, "unfinished capture");
    if (VAR_6 == VAR_0)
      FUNC_1(VAR_2->L, VAR_2->capture[VAR_3].init - VAR_2->src_init + 1);
    else
      FUNC_2(VAR_2->L, VAR_2->capture[VAR_3].init, VAR_6);
  }
}
