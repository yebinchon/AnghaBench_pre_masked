
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nTerm; int pTerm; } ;
typedef TYPE_1__ TermData ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1){
  const TermData *VAR_2 = (const TermData *)VAR_0;
  const TermData *VAR_3 = (const TermData *)VAR_1;
  int VAR_4 = VAR_2->nTerm<VAR_3->nTerm ? VAR_2->nTerm : VAR_3->nTerm;
  int VAR_5 = FUNC_0(VAR_2->pTerm, VAR_3->pTerm, VAR_4);
  if( VAR_5!=0 ) return VAR_5;
  return VAR_2->nTerm-VAR_3->nTerm;
}
