
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int eState; int errCode; int jfd; int setMaster; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

int FUNC_11(Pager *VAR_12){
  int VAR_13 = VAR_11;
  FUNC_1(("ROLLBACK %d\n", FUNC_0(VAR_12)));





  FUNC_2( FUNC_3(VAR_12) );
  if( VAR_12->eState==VAR_1 ) return VAR_12->errCode;
  if( VAR_12->eState<=VAR_2 ) return VAR_11;

  if( FUNC_5(VAR_12) ){
    int VAR_14;
    VAR_13 = FUNC_10(VAR_12, VAR_4, -1);
    VAR_14 = FUNC_6(VAR_12, VAR_12->setMaster, 0);
    if( VAR_13==VAR_11 ) VAR_13 = VAR_14;
  }else if( !FUNC_4(VAR_12->jfd) || VAR_12->eState==VAR_3 ){
    int VAR_15 = VAR_12->eState;
    VAR_13 = FUNC_6(VAR_12, 0, 0);
    if( !VAR_0 && VAR_15>VAR_3 ){




      VAR_12->errCode = VAR_5;
      VAR_12->eState = VAR_1;
      FUNC_9(VAR_12);
      return VAR_13;
    }
  }else{
    VAR_13 = FUNC_8(VAR_12, 0);
  }

  FUNC_2( VAR_12->eState==VAR_2 || VAR_13!=VAR_11 );
  FUNC_2( VAR_13==VAR_11 || VAR_13==VAR_8 || VAR_13==VAR_7
          || VAR_13==VAR_10 || (VAR_13&0xFF)==VAR_9
          || VAR_13==VAR_6
  );




  return FUNC_7(VAR_12, VAR_13);
}
