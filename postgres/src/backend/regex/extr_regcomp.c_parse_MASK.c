
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nfa; } ;
struct subre {int flags; char op; struct subre* right; struct subre* left; } ;
struct state {int dummy; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct state*,struct state*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct vars*,struct subre*) ;
 struct state* FUNC_9 (int ) ;
 struct subre* FUNC_10 (struct vars*,int,int,struct state*,struct state*,int ) ;
 void* FUNC_11 (struct vars*,char,int ,struct state*,struct state*) ;

__attribute__((used)) static struct subre *
FUNC_12(struct vars *VAR_3,
   int VAR_4,
   int VAR_5,
   struct state *VAR_6,
   struct state *VAR_7)
{
 struct state *VAR_8;
 struct state *VAR_9;
 struct subre *VAR_10;
 struct subre *VAR_11;
 struct subre *VAR_12;
 int VAR_13;

 FUNC_7(VAR_4 == ')' || VAR_4 == VAR_0);

 VAR_10 = FUNC_11(VAR_3, '|', VAR_1, VAR_6, VAR_7);
 FUNC_4();
 VAR_11 = VAR_10;
 VAR_13 = 1;
 do
 {
  if (!VAR_13)
  {

   VAR_11->right = FUNC_11(VAR_3, '|', VAR_1, VAR_6, VAR_7);
   FUNC_4();
   VAR_11 = VAR_11->right;
  }
  VAR_13 = 0;
  VAR_8 = FUNC_9(VAR_3->nfa);
  VAR_9 = FUNC_9(VAR_3->nfa);
  FUNC_4();
  FUNC_1(VAR_6, VAR_8);
  FUNC_1(VAR_9, VAR_7);
  FUNC_4();
  VAR_11->left = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9, 0);
  FUNC_4();
  VAR_11->flags |= FUNC_6(VAR_11->flags | VAR_11->left->flags);
  if ((VAR_11->flags & ~VAR_10->flags) != 0)
   for (VAR_12 = VAR_10; VAR_12 != VAR_11; VAR_12 = VAR_12->right)
    VAR_12->flags |= VAR_11->flags;
 } while (FUNC_0('|'));
 FUNC_7(FUNC_5(VAR_4) || FUNC_5(VAR_0));

 if (!FUNC_5(VAR_4))
 {
  FUNC_7(VAR_4 == ')' && FUNC_5(VAR_0));
  FUNC_2(VAR_2);
 }


 if (VAR_11 == VAR_10)
 {
  FUNC_7(VAR_11->right == ((void*)0));
  VAR_12 = VAR_11->left;
  VAR_11->left = ((void*)0);
  FUNC_8(VAR_3, VAR_10);
  VAR_10 = VAR_12;
 }
 else if (!FUNC_3(VAR_10->flags))
 {
  FUNC_8(VAR_3, VAR_10->left);
  VAR_10->left = ((void*)0);
  FUNC_8(VAR_3, VAR_10->right);
  VAR_10->right = ((void*)0);
  VAR_10->op = '=';
 }

 return VAR_10;
}
