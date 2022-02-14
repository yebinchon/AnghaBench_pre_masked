
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* aFile; } ;
struct TYPE_3__ {int sz; scalar_t__ nRef; scalar_t__ a; scalar_t__ zFilename; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0; VAR_2++){
    if( VAR_1.aFile[VAR_2].sz<0 ) continue;
    if( VAR_1.aFile[VAR_2].zFilename ){
      FUNC_1(VAR_1.aFile[VAR_2].zFilename);
      VAR_1.aFile[VAR_2].zFilename = 0;
    }
    if( VAR_1.aFile[VAR_2].nRef>0 ){
      FUNC_0("file %d still open.  nRef=%d", VAR_2, VAR_1.aFile[VAR_2].nRef);
    }
    VAR_1.aFile[VAR_2].sz = -1;
    FUNC_1(VAR_1.aFile[VAR_2].a);
    VAR_1.aFile[VAR_2].a = 0;
    VAR_1.aFile[VAR_2].nRef = 0;
  }
}
