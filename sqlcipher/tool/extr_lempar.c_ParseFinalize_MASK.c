
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ yytos; scalar_t__ yystack; int yystk0; } ;
typedef TYPE_1__ yyParser ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void *VAR_0){
  yyParser *VAR_1 = (yyParser*)VAR_0;
  while( VAR_1->yytos>VAR_1->yystack ) FUNC_1(VAR_1);

  if( VAR_1->yystack!=&VAR_1->yystk0 ) FUNC_0(VAR_1->yystack);

}
