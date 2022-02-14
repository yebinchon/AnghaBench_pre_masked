
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(lsm_db *VAR_1, int VAR_2, int VAR_3){
  int VAR_4 = 0;
  int VAR_5;

  FUNC_1( VAR_2>=1 && VAR_2<=FUNC_0(VAR_0-1) );
  FUNC_1( VAR_2<=16 );
  FUNC_1( VAR_3==128 || VAR_3==129 || VAR_3==130 );

  VAR_5 = FUNC_2(VAR_1, VAR_2);

  switch( VAR_3 ){
    case 128:
      VAR_4 = (VAR_5==128);
      break;
    case 129:
      VAR_4 = (VAR_5!=128);
      break;
    case 130:
      VAR_4 = (VAR_5==130);
      break;
    default:
      FUNC_1( !"bad eOp value passed to lsmShmAssertLock()" );
      break;
  }

  return VAR_4;
}
