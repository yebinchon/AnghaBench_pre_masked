
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* parsed_as; int error; int error_msg; int result; } ;
typedef TYPE_1__ EVAL_EXPRESSION ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char*,char const**,int*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,...) ;
 int VAR_0 ;

int FUNC_8(int VAR_1, char **VAR_2) {
 if(VAR_1 != 2) {
  FUNC_6(VAR_0, "I need an epxression (enclose it in single-quotes (') as a single parameter)\n");
  FUNC_1(1);
 }

 const char *VAR_3 = ((void*)0);
 int VAR_4;

 EVAL_EXPRESSION *VAR_5 = FUNC_4(VAR_2[1], &VAR_3, &VAR_4);
 if(!VAR_5)
  FUNC_7("\nPARSING FAILED\nExpression: '%s'\nParsing stopped at: '%s'\nParsing error code: %d (%s)\n", VAR_2[1], (VAR_3)?((*VAR_3)?VAR_3:"<END OF EXPRESSION>"):"<NONE>", VAR_4, FUNC_5(VAR_4));

 else {
  FUNC_7("\nPARSING OK\nExpression: '%s'\nParsed as : '%s'\nParsing error code: %d (%s)\n", VAR_2[1], VAR_5->parsed_as, VAR_4, FUNC_5(VAR_4));

  if(FUNC_2(VAR_5)) {
   FUNC_7("\nEvaluates to: %Lf\n\n", VAR_5->result);
  }
  else {
   FUNC_7("\nEvaluation failed with code %d and message: %s\n\n", VAR_5->error, FUNC_0(VAR_5->error_msg));
  }
  FUNC_3(VAR_5);
 }

 return 0;
}
