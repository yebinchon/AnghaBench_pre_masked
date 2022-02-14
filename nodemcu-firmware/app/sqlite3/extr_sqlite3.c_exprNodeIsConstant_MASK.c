
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int iCur; } ;
struct TYPE_8__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_9__ {int op; int iTable; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;



 int const VAR_2 ;



 int const VAR_3 ;
 int const VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(Walker *VAR_7, Expr *VAR_8){




  if( VAR_7->eCode==2 && FUNC_0(VAR_8, VAR_1) ){
    VAR_7->eCode = 0;
    return VAR_5;
  }

  switch( VAR_8->op ){



    case 131:
      if( VAR_7->eCode>=4 || FUNC_0(VAR_8,VAR_0) ){
        return VAR_6;
      }else{
        VAR_7->eCode = 0;
        return VAR_5;
      }
    case 130:
    case 132:
    case 133:
    case 134:
      FUNC_1( VAR_8->op==130 );
      FUNC_1( VAR_8->op==132 );
      FUNC_1( VAR_8->op==133 );
      FUNC_1( VAR_8->op==134 );
      if( VAR_7->eCode==3 && VAR_8->iTable==VAR_7->u.iCur ){
        return VAR_6;
      }

    case 129:
      FUNC_1( VAR_8->op==129 );
      VAR_7->eCode = 0;
      return VAR_5;
    case 128:
      if( VAR_7->eCode==5 ){



        VAR_8->op = VAR_3;
      }else if( VAR_7->eCode==4 ){


        VAR_7->eCode = 0;
        return VAR_5;
      }

    default:
      FUNC_1( VAR_8->op==VAR_4 );
      FUNC_1( VAR_8->op==VAR_2 );
      return VAR_6;
  }
}
