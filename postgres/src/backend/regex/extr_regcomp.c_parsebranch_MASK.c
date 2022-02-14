
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nfa; } ;
struct subre {int dummy; } ;
struct state {int dummy; } ;


 int FUNC_0 (struct state*,struct state*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct state*,struct state*) ;
 struct state* FUNC_6 (int ) ;
 int FUNC_7 (struct vars*,int,int,struct state*,struct state*,struct subre*) ;
 struct subre* FUNC_8 (struct vars*,char,int ,struct state*,struct state*) ;

__attribute__((used)) static struct subre *
FUNC_9(struct vars *VAR_2,
   int VAR_3,
   int VAR_4,
   struct state *VAR_5,
   struct state *VAR_6,
   int VAR_7)
{
 struct state *VAR_8;
 int VAR_9;
 struct subre *VAR_10;

 VAR_8 = VAR_5;
 VAR_9 = 0;
 VAR_10 = FUNC_8(VAR_2, '=', 0, VAR_5, VAR_6);
 FUNC_1();
 while (!FUNC_3('|') && !FUNC_3(VAR_3) && !FUNC_3(VAR_0))
 {
  if (VAR_9)
  {
   VAR_8 = FUNC_6(VAR_2->nfa);
   FUNC_1();
   FUNC_5(VAR_2->nfa, VAR_6, VAR_8);
  }
  VAR_9 = 1;


  FUNC_7(VAR_2, VAR_3, VAR_4, VAR_8, VAR_6, VAR_10);
  FUNC_1();
 }

 if (!VAR_9)
 {
  if (!VAR_7)
   FUNC_2(VAR_1);
  FUNC_4(VAR_8 == VAR_5);
  FUNC_0(VAR_5, VAR_6);
 }

 return VAR_10;
}
