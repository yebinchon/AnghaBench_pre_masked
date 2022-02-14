
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int dummy; } ;
struct nfa {int dummy; } ;
struct colormap {struct colordesc* cd; } ;
struct colordesc {scalar_t__ sub; int flags; } ;
typedef scalar_t__ color ;


 struct colordesc* FUNC_0 (struct colormap*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct colordesc*) ;
 int FUNC_3 (struct nfa*,int,scalar_t__,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_4(struct nfa *VAR_1,
  struct colormap *VAR_2,
  int VAR_3,
  color VAR_4,
  struct state *VAR_5,
  struct state *VAR_6)
{
 struct colordesc *VAR_7;
 struct colordesc *VAR_8 = FUNC_0(VAR_2);
 color VAR_9;

 for (VAR_7 = VAR_2->cd, VAR_9 = 0; VAR_7 < VAR_8 && !FUNC_1(); VAR_7++, VAR_9++)
  if (!FUNC_2(VAR_7) && VAR_7->sub != VAR_9 && VAR_9 != VAR_4 &&
   !(VAR_7->flags & VAR_0))
   FUNC_3(VAR_1, VAR_3, VAR_9, VAR_5, VAR_6);
}
