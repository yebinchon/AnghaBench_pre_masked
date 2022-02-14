
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char const* p_sourcetext; int * p_queryEnv; } ;
typedef int RawStmt ;
typedef int QueryEnvironment ;
typedef int Query ;
typedef int (* ParserSetupHook ) (TYPE_1__*,void*) ;
typedef TYPE_1__ ParseState ;
typedef int List ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,void*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int * FUNC_11 (TYPE_1__*,int *) ;

List *
FUNC_12(RawStmt *VAR_1,
         const char *VAR_2,
         ParserSetupHook VAR_3,
         void *VAR_4,
         QueryEnvironment *VAR_5)
{
 ParseState *VAR_6;
 Query *VAR_7;
 List *VAR_8;

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_4(VAR_2);




 if (VAR_0)
  FUNC_1();

 VAR_6 = FUNC_6(((void*)0));
 VAR_6->p_sourcetext = VAR_2;
 VAR_6->p_queryEnv = VAR_5;
 (*VAR_3) (VAR_6, VAR_4);

 VAR_7 = FUNC_11(VAR_6, VAR_1);

 if (&FUNC_8)
  FUNC_8) (VAR_6, VAR_7);

 FUNC_5(VAR_6);

 if (VAR_0)
  FUNC_2("PARSE ANALYSIS STATISTICS");




 VAR_8 = FUNC_7(VAR_7);

 FUNC_3(VAR_2);

 return VAR_8;
}
