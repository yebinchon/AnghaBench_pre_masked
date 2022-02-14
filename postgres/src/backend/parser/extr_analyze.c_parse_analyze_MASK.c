
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char const* p_sourcetext; int * p_queryEnv; } ;
typedef int RawStmt ;
typedef int QueryEnvironment ;
typedef int Query ;
typedef TYPE_1__ ParseState ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (TYPE_1__*,int *) ;

Query *
FUNC_7(RawStmt *VAR_0, const char *VAR_1,
     Oid *VAR_2, int VAR_3,
     QueryEnvironment *VAR_4)
{
 ParseState *VAR_5 = FUNC_2(((void*)0));
 Query *VAR_6;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_5->p_sourcetext = VAR_1;

 if (VAR_3 > 0)
  FUNC_3(VAR_5, VAR_2, VAR_3);

 VAR_5->p_queryEnv = VAR_4;

 VAR_6 = FUNC_6(VAR_5, VAR_0);

 if (&FUNC_4)
  FUNC_4) (VAR_5, VAR_6);

 FUNC_1(VAR_5);

 return VAR_6;
}
