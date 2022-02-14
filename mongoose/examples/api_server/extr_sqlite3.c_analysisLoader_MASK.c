
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tRowcnt ;
struct TYPE_6__ {int zDatabase; int db; } ;
typedef TYPE_1__ analysisInfo ;
struct TYPE_7__ {int nRowEst; } ;
typedef TYPE_2__ Table ;
struct TYPE_8__ {int nColumn; int* aiRowEst; int bUnordered; } ;
typedef TYPE_3__ Index ;


 int FUNC_0 (char**,int) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ,char*,int ) ;
 TYPE_2__* FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, int VAR_1, char **VAR_2, char **VAR_3){
  analysisInfo *VAR_4 = (analysisInfo*)VAR_0;
  Index *VAR_5;
  Table *VAR_6;
  int VAR_7, VAR_8, VAR_9;
  tRowcnt VAR_10;
  const char *VAR_11;

  FUNC_1( VAR_1==3 );
  FUNC_0(VAR_3, VAR_1);

  if( VAR_2==0 || VAR_2[0]==0 || VAR_2[2]==0 ){
    return 0;
  }
  VAR_6 = FUNC_3(VAR_4->db, VAR_2[0], VAR_4->zDatabase);
  if( VAR_6==0 ){
    return 0;
  }
  if( VAR_2[1] ){
    VAR_5 = FUNC_2(VAR_4->db, VAR_2[1], VAR_4->zDatabase);
  }else{
    VAR_5 = 0;
  }
  VAR_9 = VAR_5 ? VAR_5->nColumn : 0;
  VAR_11 = VAR_2[2];
  for(VAR_7=0; *VAR_11 && VAR_7<=VAR_9; VAR_7++){
    VAR_10 = 0;
    while( (VAR_8=VAR_11[0])>='0' && VAR_8<='9' ){
      VAR_10 = VAR_10*10 + VAR_8 - '0';
      VAR_11++;
    }
    if( VAR_7==0 ) VAR_6->nRowEst = VAR_10;
    if( VAR_5==0 ) break;
    VAR_5->aiRowEst[VAR_7] = VAR_10;
    if( *VAR_11==' ' ) VAR_11++;
    if( FUNC_4(VAR_11, "unordered")==0 ){
      VAR_5->bUnordered = 1;
      break;
    }
  }
  return 0;
}
