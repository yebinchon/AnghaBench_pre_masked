
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nPrefix; int otherError; scalar_t__ mallocFailed; int pStmt; scalar_t__ zPrefix; } ;
typedef TYPE_1__ nextCharContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (unsigned char const*,unsigned int*) ;
 int FUNC_2 (int ,int,char*,int,int ) ;
 unsigned char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,unsigned int) ;

__attribute__((used)) static void FUNC_7(nextCharContext *VAR_3){
  unsigned VAR_4 = 0;
  unsigned char VAR_5[8];
  int VAR_6, VAR_7;

  for(;;){
    FUNC_2(VAR_3->pStmt, 1, (char*)VAR_3->zPrefix, VAR_3->nPrefix,
                      VAR_2);
    VAR_6 = FUNC_6(VAR_5, VAR_4+1);
    FUNC_2(VAR_3->pStmt, 2, (char*)VAR_5, VAR_6, VAR_2);
    VAR_7 = FUNC_5(VAR_3->pStmt);
    if( VAR_7==VAR_0 ){
      FUNC_4(VAR_3->pStmt);
      return;
    }else if( VAR_7!=VAR_1 ){
      VAR_3->otherError = VAR_7;
      return;
    }else{
      const unsigned char *VAR_8 = FUNC_3(VAR_3->pStmt, 0);
      unsigned VAR_9;
      VAR_6 = FUNC_1(VAR_8+VAR_3->nPrefix, &VAR_9);
      FUNC_4(VAR_3->pStmt);
      FUNC_0(VAR_3, VAR_9);
      VAR_4 = VAR_9;
      if( VAR_3->mallocFailed ) return;
    }
  }
}
