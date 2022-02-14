
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int iCur; } ;
struct TYPE_9__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_10__ {int op; int iTable; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;



 int const VAR_3 ;



 int const VAR_4 ;

 int const VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(Walker *VAR_9, Expr *VAR_10){




  if( VAR_9->eCode==2 && FUNC_0(VAR_10, VAR_2) ){
    VAR_9->eCode = 0;
    return VAR_6;
  }

  switch( VAR_10->op ){



    case 132:
      if( VAR_9->eCode>=4 || FUNC_0(VAR_10,VAR_0) ){
        return VAR_7;
      }else{
        VAR_9->eCode = 0;
        return VAR_6;
      }
    case 131:


      if( FUNC_1(VAR_10) ){
        return VAR_8;
      }

    case 133:
    case 134:
    case 135:
      FUNC_2( VAR_10->op==131 );
      FUNC_2( VAR_10->op==133 );
      FUNC_2( VAR_10->op==134 );
      FUNC_2( VAR_10->op==135 );
      if( FUNC_0(VAR_10, VAR_1) && VAR_9->eCode!=2 ){
        return VAR_7;
      }
      if( VAR_9->eCode==3 && VAR_10->iTable==VAR_9->u.iCur ){
        return VAR_7;
      }

    case 130:
    case 129:
      FUNC_2( VAR_10->op==129 );
      FUNC_2( VAR_10->op==130 );
      VAR_9->eCode = 0;
      return VAR_6;
    case 128:
      if( VAR_9->eCode==5 ){



        VAR_10->op = VAR_4;
      }else if( VAR_9->eCode==4 ){


        VAR_9->eCode = 0;
        return VAR_6;
      }

    default:
      FUNC_2( VAR_10->op==VAR_5 );
      FUNC_2( VAR_10->op==VAR_3 );
      return VAR_7;
  }
}
