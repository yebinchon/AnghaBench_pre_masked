
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * queryEnv; } ;
struct TYPE_7__ {int * name; } ;
struct TYPE_8__ {TYPE_1__ md; } ;
typedef TYPE_2__* EphemeralNamedRelation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,TYPE_2__*) ;

int
FUNC_5(EphemeralNamedRelation VAR_4)
{
 EphemeralNamedRelation VAR_5;
 int VAR_6;

 if (VAR_4 == ((void*)0) || VAR_4->md.name == ((void*)0))
  return VAR_0;

 VAR_6 = FUNC_0(0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_2(VAR_4->md.name);
 if (VAR_5)
  VAR_6 = VAR_1;
 else
 {
  if (VAR_3->queryEnv == ((void*)0))
   VAR_3->queryEnv = FUNC_3();

  FUNC_4(VAR_3->queryEnv, VAR_4);
  VAR_6 = VAR_2;
 }

 FUNC_1(0);

 return VAR_6;
}
