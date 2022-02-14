
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char const* p_sourcetext; } ;
typedef int RawStmt ;
typedef int Query ;
typedef TYPE_1__ ParseState ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int **,int*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*,int *) ;

Query *
FUNC_8(RawStmt *VAR_0, const char *VAR_1,
      Oid **VAR_2, int *VAR_3)
{
 ParseState *VAR_4 = FUNC_3(((void*)0));
 Query *VAR_5;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_4->p_sourcetext = VAR_1;

 FUNC_4(VAR_4, VAR_2, VAR_3);

 VAR_5 = FUNC_7(VAR_4, VAR_0);


 FUNC_1(VAR_4, VAR_5);

 if (&FUNC_5)
  FUNC_5) (VAR_4, VAR_5);

 FUNC_2(VAR_4);

 return VAR_5;
}
