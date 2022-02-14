
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int havedead; int indtuples; int * spool2; int * spool; } ;
typedef int Relation ;
typedef int ItemPointer ;
typedef int Datum ;
typedef TYPE_1__ BTBuildState ;


 int FUNC_0 (int *,int ,int *,int*) ;

__attribute__((used)) static void
FUNC_1(Relation VAR_0,
       ItemPointer VAR_1,
       Datum *VAR_2,
       bool *VAR_3,
       bool VAR_4,
       void *VAR_5)
{
 BTBuildState *VAR_6 = (BTBuildState *) VAR_5;





 if (VAR_4 || VAR_6->spool2 == ((void*)0))
  FUNC_0(VAR_6->spool, VAR_1, VAR_2, VAR_3);
 else
 {

  VAR_6->havedead = 1;
  FUNC_0(VAR_6->spool2, VAR_1, VAR_2, VAR_3);
 }

 VAR_6->indtuples += 1;
}
