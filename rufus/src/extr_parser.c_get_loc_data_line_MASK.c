
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ command; } ;
typedef TYPE_1__ loc_cmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char,char*) ;
 int FUNC_3 (char*,char*) ;
 char* VAR_1 ;
 size_t FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(char* VAR_2)
{
 size_t VAR_3;
 loc_cmd* VAR_4 = ((void*)0);
 char VAR_5;

 if ((VAR_2 == ((void*)0)) || (VAR_2[0] == 0))
  return;


 VAR_3 = FUNC_4(VAR_2, VAR_1);


 VAR_5 = VAR_2[VAR_3++];
 if (VAR_5 == '#')
  return;
 if ((VAR_5 == 0) || ((VAR_2[VAR_3] != VAR_1[0]) && (VAR_2[VAR_3] != VAR_1[1]))) {
  FUNC_3("syntax error: '%s'", VAR_2);
  return;
 }

 VAR_4 = FUNC_2(VAR_5, &VAR_2[VAR_3]);

 if ((VAR_4 != ((void*)0)) && (VAR_4->command != VAR_0))

  FUNC_0(VAR_4);
 else
  FUNC_1(VAR_4);
}
