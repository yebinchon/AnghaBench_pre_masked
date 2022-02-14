
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match_state {TYPE_1__* capture; } ;
struct TYPE_2__ {char const* len; int init; } ;


 char const* VAR_0 ;
 int FUNC_0 (struct match_state*) ;
 char* FUNC_1 (struct match_state*,char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_2(struct match_state *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1);
 const char *VAR_5;
 if (VAR_4 == -1)
  return ((void*)0);

 VAR_1->capture[VAR_4].len = VAR_2 - VAR_1->capture[VAR_4].init;

 if ((VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3)) == ((void*)0))
  VAR_1->capture[VAR_4].len = VAR_0;
 return VAR_5;
}
