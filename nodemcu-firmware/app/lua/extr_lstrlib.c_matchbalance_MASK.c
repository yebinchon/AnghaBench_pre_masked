
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* src_end; int L; } ;
typedef TYPE_1__ MatchState ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static const char *FUNC_1 (MatchState *VAR_0, const char *VAR_1,
                                   const char *VAR_2) {
  if (*VAR_2 == 0 || *(VAR_2+1) == 0)
    FUNC_0(VAR_0->L, "unbalanced pattern");
  if (*VAR_1 != *VAR_2) return ((void*)0);
  else {
    int VAR_3 = *VAR_2;
    int VAR_4 = *(VAR_2+1);
    int VAR_5 = 1;
    while (++VAR_1 < VAR_0->src_end) {
      if (*VAR_1 == VAR_4) {
        if (--VAR_5 == 0) return VAR_1+1;
      }
      else if (*VAR_1 == VAR_3) VAR_5++;
    }
  }
  return ((void*)0);
}
