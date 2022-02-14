
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {char flag; } ;
struct nfa {int dummy; } ;


 struct state* FUNC_0 (struct nfa*) ;

__attribute__((used)) static struct state *
FUNC_1(struct nfa *VAR_0, int VAR_1)
{
 struct state *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != ((void*)0))
  VAR_2->flag = (char) VAR_1;
 return VAR_2;
}
