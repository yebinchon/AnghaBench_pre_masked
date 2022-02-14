
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lenstem; char** stem; int nstem; int * next; } ;
typedef TYPE_1__ SplitVar ;


 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static SplitVar *
FUNC_2(SplitVar *VAR_0, int VAR_1)
{
 SplitVar *VAR_2 = (SplitVar *) FUNC_0(sizeof(SplitVar));

 VAR_2->next = ((void*)0);
 if (VAR_0)
 {
  int VAR_3;

  VAR_2->lenstem = VAR_0->lenstem;
  VAR_2->stem = (char **) FUNC_0(sizeof(char *) * VAR_2->lenstem);
  VAR_2->nstem = VAR_0->nstem;
  for (VAR_3 = 0; VAR_3 < VAR_0->nstem; VAR_3++)
   VAR_2->stem[VAR_3] = (VAR_1) ? FUNC_1(VAR_0->stem[VAR_3]) : VAR_0->stem[VAR_3];
 }
 else
 {
  VAR_2->lenstem = 16;
  VAR_2->stem = (char **) FUNC_0(sizeof(char *) * VAR_2->lenstem);
  VAR_2->nstem = 0;
 }
 return VAR_2;
}
