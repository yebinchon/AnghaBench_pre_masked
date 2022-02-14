
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ oprnamespace; int oprname; } ;
typedef int StringInfo ;
typedef TYPE_1__* Form_pg_operator ;


 char* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(StringInfo VAR_1, Form_pg_operator VAR_2)
{
 char *VAR_3;


 VAR_3 = FUNC_0(VAR_2->oprname);


 if (VAR_2->oprnamespace != VAR_0)
 {
  const char *VAR_4;

  VAR_4 = FUNC_3(VAR_2->oprnamespace);

  FUNC_1(VAR_1, "OPERATOR(%s.%s)",
       FUNC_4(VAR_4), VAR_3);
 }
 else
 {

  FUNC_2(VAR_1, VAR_3);
 }
}
