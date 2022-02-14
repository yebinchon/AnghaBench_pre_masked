
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int yy0; } ;
struct TYPE_9__ {TYPE_1__ minor; int major; scalar_t__ stateno; } ;
typedef TYPE_2__ yyStackEntry ;
struct TYPE_10__ {int yyhwm; size_t yystksz; TYPE_2__* yytos; TYPE_2__* yystack; TYPE_2__* yystackEnd; } ;
typedef TYPE_3__ yyParser ;
typedef int YYCODETYPE ;
typedef scalar_t__ YYACTIONTYPE ;
typedef int ParseTOKENTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_4(
  yyParser *VAR_3,
  YYACTIONTYPE VAR_4,
  YYCODETYPE VAR_5,
  ParseTOKENTYPE VAR_6
){
  yyStackEntry *VAR_7;
  VAR_3->yytos++;
  if( VAR_3->yytos>=&VAR_3->yystack[VAR_3->yystksz] ){
    if( FUNC_1(VAR_3) ){
      VAR_3->yytos--;
      FUNC_2(VAR_3);
      return;
    }
  }

  if( VAR_4 > VAR_0 ){
    VAR_4 += VAR_1 - VAR_2;
  }
  VAR_7 = VAR_3->yytos;
  VAR_7->stateno = VAR_4;
  VAR_7->major = VAR_5;
  VAR_7->minor.yy0 = VAR_6;
  FUNC_3(VAR_3, VAR_4, "Shift");
}
