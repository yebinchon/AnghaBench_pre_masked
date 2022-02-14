
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iPos; char* zDoc; } ;
typedef TYPE_1__ Fts5SFinder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  void *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7
){
  int VAR_8 = VAR_1;

  FUNC_1(VAR_4, VAR_5);
  FUNC_0(VAR_7);

  if( (VAR_3 & VAR_0)==0 ){
    Fts5SFinder *VAR_9 = (Fts5SFinder*)VAR_2;
    if( VAR_9->iPos>0 ){
      int VAR_10;
      char VAR_11 = 0;
      for(VAR_10=VAR_6-1; VAR_10>=0; VAR_10--){
        VAR_11 = VAR_9->zDoc[VAR_10];
        if( VAR_11!=' ' && VAR_11!='\t' && VAR_11!='\n' && VAR_11!='\r' ) break;
      }
      if( VAR_10!=VAR_6-1 && (VAR_11=='.' || VAR_11==':') ){
        VAR_8 = FUNC_2(VAR_9, VAR_9->iPos);
      }
    }else{
      VAR_8 = FUNC_2(VAR_9, 0);
    }
    VAR_9->iPos++;
  }
  return VAR_8;
}
