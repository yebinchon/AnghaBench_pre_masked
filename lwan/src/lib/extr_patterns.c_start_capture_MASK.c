
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match_state {int level; int maxcaptures; TYPE_1__* capture; } ;
struct TYPE_2__ {char const* init; int len; } ;


 char* FUNC_0 (struct match_state*,char const*,char const*) ;
 int FUNC_1 (struct match_state*,char*) ;

__attribute__((used)) static const char *
FUNC_2(struct match_state *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 const char *VAR_4;

 int VAR_5 = VAR_0->level;
 if (VAR_5 >= VAR_0->maxcaptures) {
  FUNC_1(VAR_0, "too many captures");
  return (((void*)0));
 }
 VAR_0->capture[VAR_5].init = VAR_1;
 VAR_0->capture[VAR_5].len = VAR_3;
 VAR_0->level = VAR_5 + 1;

 if ((VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2)) == ((void*)0))
  VAR_0->level--;
 return VAR_4;
}
