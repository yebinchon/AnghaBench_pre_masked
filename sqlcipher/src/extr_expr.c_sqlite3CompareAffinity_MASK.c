
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Expr ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 char FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char) ;

char FUNC_3(Expr *VAR_2, char VAR_3){
  char VAR_4 = FUNC_1(VAR_2);
  if( VAR_4 && VAR_3 ){



    if( FUNC_2(VAR_4) || FUNC_2(VAR_3) ){
      return VAR_1;
    }else{
      return VAR_0;
    }
  }else if( !VAR_4 && !VAR_3 ){



    return VAR_0;
  }else{

    FUNC_0( VAR_4==0 || VAR_3==0 );
    return (VAR_4 + VAR_3);
  }
}
