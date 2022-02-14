
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int PLpgSQL_execstate ;
typedef int PLpgSQL_datum ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,int *,int ,int,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(PLpgSQL_execstate *VAR_1, PLpgSQL_datum *VAR_2,
      const char *VAR_3)
{
 text *VAR_4;
 MemoryContext VAR_5;


 VAR_5 = FUNC_0(FUNC_4(VAR_1));
 if (VAR_3 != ((void*)0))
  VAR_4 = FUNC_2(VAR_3);
 else
  VAR_4 = FUNC_2("");
 FUNC_0(VAR_5);

 FUNC_3(VAR_1, VAR_2, FUNC_1(VAR_4), 0,
       VAR_0, -1);
}
