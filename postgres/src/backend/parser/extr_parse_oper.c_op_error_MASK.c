
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int Oid ;
typedef int List ;
typedef scalar_t__ FuncDetailCode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,char,int ,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6(ParseState *VAR_4, List *VAR_5, char VAR_6,
   Oid VAR_7, Oid VAR_8,
   FuncDetailCode VAR_9, int VAR_10)
{
 if (VAR_9 == VAR_3)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_0),
     FUNC_3("operator is not unique: %s",
      FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8)),
     FUNC_2("Could not choose a best candidate operator. "
       "You might need to add explicit type casts."),
     FUNC_5(VAR_4, VAR_10)));
 else
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_3("operator does not exist: %s",
      FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8)),
     (!VAR_7 || !VAR_8) ?
     FUNC_2("No operator matches the given name and argument type. "
       "You might need to add an explicit type cast.") :
     FUNC_2("No operator matches the given name and argument types. "
       "You might need to add explicit type casts."),
     FUNC_5(VAR_4, VAR_10)));
}
