
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int s_prefix; int s_prefix_val; } ;
struct directive {int dummy; } ;


 int FUNC_0 (struct state*,struct directive*) ;
 int FUNC_1 (struct state*,struct directive*) ;
 int FUNC_2 (struct state*,struct directive*) ;

__attribute__((used)) static void FUNC_3(struct state *VAR_0, struct directive *VAR_1) {
 int VAR_2 = VAR_0->s_prefix;
 if (!FUNC_0 (VAR_0, VAR_1))
  if (!FUNC_1 (VAR_0, VAR_1))
   FUNC_2 (VAR_0, VAR_1);
 if (VAR_0->s_prefix == VAR_2)
  VAR_0->s_prefix_val = VAR_0->s_prefix = 0;
}
