
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct arc* outs; } ;
struct arc {int type; scalar_t__ co; struct arc* outchain; } ;
typedef scalar_t__ color ;



__attribute__((used)) static struct arc *
FUNC_0(struct state *VAR_0,
  int VAR_1,
  color VAR_2)
{
 struct arc *VAR_3;

 for (VAR_3 = VAR_0->outs; VAR_3 != ((void*)0); VAR_3 = VAR_3->outchain)
  if (VAR_3->type == VAR_1 && VAR_3->co == VAR_2)
   return VAR_3;
 return ((void*)0);
}
