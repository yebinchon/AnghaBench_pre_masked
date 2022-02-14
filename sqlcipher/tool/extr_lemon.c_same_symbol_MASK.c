
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; int nsubsym; scalar_t__* subsym; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct symbol *VAR_1, struct symbol *VAR_2)
{
  int VAR_3;
  if( VAR_1==VAR_2 ) return 1;
  if( VAR_1->type!=VAR_0 ) return 0;
  if( VAR_2->type!=VAR_0 ) return 0;
  if( VAR_1->nsubsym!=VAR_2->nsubsym ) return 0;
  for(VAR_3=0; VAR_3<VAR_1->nsubsym; VAR_3++){
    if( VAR_1->subsym[VAR_3]!=VAR_2->subsym[VAR_3] ) return 0;
  }
  return 1;
}
