
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dropmsgstrings {char kind; int drophint_msg; int nota_msg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct dropmsgstrings* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, char VAR_4, char VAR_5)
{
 const struct dropmsgstrings *VAR_6;
 const struct dropmsgstrings *VAR_7;

 for (VAR_6 = VAR_2; VAR_6->kind != '\0'; VAR_6++)
  if (VAR_6->kind == VAR_5)
   break;
 FUNC_0(VAR_6->kind != '\0');

 for (VAR_7 = VAR_2; VAR_7->kind != '\0'; VAR_7++)
  if (VAR_7->kind == VAR_4)
   break;


 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_5(VAR_6->nota_msg, VAR_3),
    (VAR_7->kind != '\0') ? FUNC_4("%s", FUNC_1(VAR_7->drophint_msg)) : 0));
}
