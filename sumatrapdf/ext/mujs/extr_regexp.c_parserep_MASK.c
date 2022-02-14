
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstate {scalar_t__ lookahead; int yymin; int yymax; } ;
typedef int Renode ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct cstate*,char) ;
 int FUNC_1 (struct cstate*,char*) ;
 int * FUNC_2 (struct cstate*,int ) ;
 int * FUNC_3 (struct cstate*,int *,scalar_t__,int,int) ;
 int FUNC_4 (struct cstate*) ;
 int * FUNC_5 (struct cstate*) ;

__attribute__((used)) static Renode *FUNC_6(struct cstate *VAR_8)
{
 Renode *VAR_9;

 if (FUNC_0(VAR_8, '^')) return FUNC_2(VAR_8, VAR_3);
 if (FUNC_0(VAR_8, '$')) return FUNC_2(VAR_8, VAR_4);
 if (FUNC_0(VAR_8, VAR_2)) return FUNC_2(VAR_8, VAR_6);
 if (FUNC_0(VAR_8, VAR_1)) return FUNC_2(VAR_8, VAR_5);

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_8->lookahead == VAR_0) {
  int VAR_10 = VAR_8->yymin, VAR_11 = VAR_8->yymax;
  FUNC_4(VAR_8);
  if (VAR_11 < VAR_10)
   FUNC_1(VAR_8, "invalid quantifier");
  return FUNC_3(VAR_8, VAR_9, FUNC_0(VAR_8, '?'), VAR_10, VAR_11);
 }
 if (FUNC_0(VAR_8, '*')) return FUNC_3(VAR_8, VAR_9, FUNC_0(VAR_8, '?'), 0, VAR_7);
 if (FUNC_0(VAR_8, '+')) return FUNC_3(VAR_8, VAR_9, FUNC_0(VAR_8, '?'), 1, VAR_7);
 if (FUNC_0(VAR_8, '?')) return FUNC_3(VAR_8, VAR_9, FUNC_0(VAR_8, '?'), 0, 1);
 return VAR_9;
}
