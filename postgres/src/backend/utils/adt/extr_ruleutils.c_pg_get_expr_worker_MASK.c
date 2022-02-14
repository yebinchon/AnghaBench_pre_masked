
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int Oid ;
typedef int Node ;
typedef int List ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int *,int *,int,int,int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static text *
FUNC_7(text *VAR_1, Oid VAR_2, const char *VAR_3, int VAR_4)
{
 Node *VAR_5;
 List *VAR_6;
 char *VAR_7;
 char *VAR_8;


 VAR_7 = FUNC_6(VAR_1);


 VAR_5 = (Node *) FUNC_4(VAR_7);

 FUNC_3(VAR_7);


 if (FUNC_0(VAR_2))
  VAR_6 = FUNC_1(VAR_3, VAR_2);
 else
  VAR_6 = VAR_0;


 VAR_8 = FUNC_2(VAR_5, VAR_6, 0, 0,
         VAR_4, 0);

 return FUNC_5(VAR_8);
}
