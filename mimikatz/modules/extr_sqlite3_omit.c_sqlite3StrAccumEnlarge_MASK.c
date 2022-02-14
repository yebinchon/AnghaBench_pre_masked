
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_6__ {scalar_t__ nChar; scalar_t__ nAlloc; scalar_t__ accError; scalar_t__ mxAlloc; char* zText; int printfFlags; scalar_t__ db; } ;
typedef TYPE_1__ StrAccum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 char* FUNC_5 (scalar_t__,char*,int) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(StrAccum *VAR_3, int VAR_4){
  char *VAR_5;
  FUNC_0( VAR_3->nChar+(i64)VAR_4 >= VAR_3->nAlloc );
  if( VAR_3->accError ){
    FUNC_8(VAR_3->accError==VAR_2);
    FUNC_8(VAR_3->accError==VAR_0);
    return 0;
  }
  if( VAR_3->mxAlloc==0 ){
    VAR_4 = VAR_3->nAlloc - VAR_3->nChar - 1;
    FUNC_3(VAR_3, VAR_2);
    return VAR_4;
  }else{
    char *VAR_6 = FUNC_1(VAR_3) ? VAR_3->zText : 0;
    i64 VAR_7 = VAR_3->nChar;
    VAR_7 += VAR_4 + 1;
    if( VAR_7+VAR_3->nChar<=VAR_3->mxAlloc ){


      VAR_7 += VAR_3->nChar;
    }
    if( VAR_7 > VAR_3->mxAlloc ){
      FUNC_7(VAR_3);
      FUNC_3(VAR_3, VAR_2);
      return 0;
    }else{
      VAR_3->nAlloc = (int)VAR_7;
    }
    if( VAR_3->db ){
      VAR_5 = FUNC_5(VAR_3->db, VAR_6, VAR_3->nAlloc);
    }else{
      VAR_5 = FUNC_6(VAR_6, VAR_3->nAlloc);
    }
    if( VAR_5 ){
      FUNC_0( VAR_3->zText!=0 || VAR_3->nChar==0 );
      if( !FUNC_1(VAR_3) && VAR_3->nChar>0 ) FUNC_2(VAR_5, VAR_3->zText, VAR_3->nChar);
      VAR_3->zText = VAR_5;
      VAR_3->nAlloc = FUNC_4(VAR_3->db, VAR_5);
      VAR_3->printfFlags |= VAR_1;
    }else{
      FUNC_7(VAR_3);
      FUNC_3(VAR_3, VAR_0);
      return 0;
    }
  }
  return VAR_4;
}
