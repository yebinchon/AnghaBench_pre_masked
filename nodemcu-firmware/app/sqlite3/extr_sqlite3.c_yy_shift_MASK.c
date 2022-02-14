
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int yy0; } ;
struct TYPE_9__ {TYPE_1__ minor; scalar_t__ major; scalar_t__ stateno; } ;
typedef TYPE_2__ yyStackEntry ;
struct TYPE_10__ {int yyhwm; size_t yystksz; TYPE_2__* yytos; TYPE_2__* yystack; } ;
typedef TYPE_3__ yyParser ;
typedef int sqlite3ParserTOKENTYPE ;
typedef scalar_t__ YYCODETYPE ;
typedef scalar_t__ YYACTIONTYPE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(
  yyParser *VAR_4,
  int VAR_5,
  int VAR_6,
  sqlite3ParserTOKENTYPE VAR_7
){
  yyStackEntry *VAR_8;
  VAR_4->yytos++;
  if( VAR_4->yytos>=&VAR_4->yystack[VAR_4->yystksz] ){
    if( FUNC_1(VAR_4) ){
      VAR_4->yytos--;
      FUNC_2(VAR_4);
      return;
    }
  }

  if( VAR_5 > VAR_1 ){
    VAR_5 += VAR_2 - VAR_3;
  }
  VAR_8 = VAR_4->yytos;
  VAR_8->stateno = (YYACTIONTYPE)VAR_5;
  VAR_8->major = (YYCODETYPE)VAR_6;
  VAR_8->minor.yy0 = VAR_7;
  FUNC_3(VAR_4, VAR_5);
}
