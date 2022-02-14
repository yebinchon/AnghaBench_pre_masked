
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nfa; int cm; } ;
struct state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct state*,struct state*,struct state*,int ) ;
 int FUNC_2 (int ,int ,int ,struct state*,struct state*,struct state*) ;
 int FUNC_3 (int ,char,int,struct state*,struct state*) ;
 int FUNC_4 (struct vars*,struct state*,struct state*,int) ;
 struct state* FUNC_5 (struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_6(struct vars *VAR_4,
    struct state *VAR_5,
    struct state *VAR_6,
    int VAR_7,
    struct state *VAR_8,
    struct state *VAR_9)
{
 struct state *VAR_10;
 int VAR_11;





 VAR_10 = FUNC_5(VAR_5, VAR_6);
 switch (VAR_7)
 {
  case 130:

   if (VAR_10 != ((void*)0))
   {
    FUNC_1(VAR_4->nfa, VAR_10, VAR_8, VAR_9, VAR_0);
    return;
   }
   break;
  case 131:

   if (VAR_10 != ((void*)0))
   {
    FUNC_2(VAR_4->nfa, VAR_4->cm, VAR_0, VAR_10, VAR_8, VAR_9);
    FUNC_3(VAR_4->nfa, '$', 1, VAR_8, VAR_9);
    FUNC_3(VAR_4->nfa, '$', 0, VAR_8, VAR_9);
    return;
   }
   break;
  case 128:

   if (VAR_10 != ((void*)0))
   {
    FUNC_1(VAR_4->nfa, VAR_10, VAR_8, VAR_9, VAR_1);
    return;
   }
   break;
  case 129:

   if (VAR_10 != ((void*)0))
   {
    FUNC_2(VAR_4->nfa, VAR_4->cm, VAR_1, VAR_10, VAR_8, VAR_9);
    FUNC_3(VAR_4->nfa, '^', 1, VAR_8, VAR_9);
    FUNC_3(VAR_4->nfa, '^', 0, VAR_8, VAR_9);
    return;
   }
   break;
  default:
   FUNC_0(VAR_3);
 }


 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_3(VAR_4->nfa, VAR_2, VAR_11, VAR_8, VAR_9);
}
