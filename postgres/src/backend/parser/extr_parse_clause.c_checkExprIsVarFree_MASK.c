
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(ParseState *VAR_2, Node *VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_3, 0))
 {
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),

     FUNC_3("argument of %s must not contain variables",
      VAR_4),
     FUNC_5(VAR_2,
         FUNC_4(VAR_3, 0))));
 }
}
