
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int dummy; } ;
struct nfa {int dummy; } ;
struct colormap {struct colordesc* cd; } ;
struct colordesc {int flags; } ;
typedef scalar_t__ color ;


 struct colordesc* FUNC_0 (struct colormap*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct colordesc*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (struct state*,int ,scalar_t__) ;
 int FUNC_5 (struct nfa*,int,scalar_t__,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_6(struct nfa *VAR_2,
    struct colormap *VAR_3,
    int VAR_4,
    struct state *VAR_5,
    struct state *VAR_6,
    struct state *VAR_7)
{
 struct colordesc *VAR_8;
 struct colordesc *VAR_9 = FUNC_0(VAR_3);
 color VAR_10;

 FUNC_3(VAR_5 != VAR_6);
 for (VAR_8 = VAR_3->cd, VAR_10 = 0; VAR_8 < VAR_9 && !FUNC_1(); VAR_8++, VAR_10++)
  if (!FUNC_2(VAR_8) && !(VAR_8->flags & VAR_1))
   if (FUNC_4(VAR_5, VAR_0, VAR_10) == ((void*)0))
    FUNC_5(VAR_2, VAR_4, VAR_10, VAR_6, VAR_7);
}
