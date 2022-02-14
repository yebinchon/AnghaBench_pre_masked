
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_4__ {size_t iRow; int iLang; char* zPattern; int iTop; int iScope; int nSearch; TYPE_1__* a; scalar_t__ pFullScan; } ;
typedef TYPE_2__ spellfix1_cursor ;
struct TYPE_3__ {char* zWord; int iRank; int iDistance; int iScore; int iMatchlen; char* zHash; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int) ;
 scalar_t__ FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vtab_cursor *VAR_3,
  sqlite3_context *VAR_4,
  int VAR_5
){
  spellfix1_cursor *VAR_6 = (spellfix1_cursor*)VAR_3;
  if( VAR_6->pFullScan ){
    if( VAR_5<=136 ){
      FUNC_6(VAR_4, FUNC_1(VAR_6->pFullScan, VAR_5));
    }else{
      FUNC_4(VAR_4);
    }
    return VAR_1;
  }
  switch( VAR_5 ){
    case 128: {
      FUNC_5(VAR_4, VAR_6->a[VAR_6->iRow].zWord, -1, VAR_2);
      break;
    }
    case 133: {
      FUNC_3(VAR_4, VAR_6->a[VAR_6->iRow].iRank);
      break;
    }
    case 137: {
      FUNC_3(VAR_4, VAR_6->a[VAR_6->iRow].iDistance);
      break;
    }
    case 136: {
      FUNC_3(VAR_4, VAR_6->iLang);
      break;
    }
    case 131: {
      FUNC_3(VAR_4, VAR_6->a[VAR_6->iRow].iScore);
      break;
    }
    case 135: {
      int VAR_7 = VAR_6->a[VAR_6->iRow].iMatchlen;
      if( VAR_7<0 ){
        int VAR_8 = (int)FUNC_7(VAR_6->zPattern);
        char *VAR_9 = VAR_6->a[VAR_6->iRow].zWord;
        int VAR_10 = (int)FUNC_7(VAR_9);

        if( VAR_8>0 && VAR_6->zPattern[VAR_8-1]=='*' ){
          char *VAR_11;
          int VAR_12;
          VAR_11 = (char *)FUNC_9((unsigned char *)VAR_9, VAR_10);
          if( !VAR_11 ) return VAR_0;
          VAR_12 = FUNC_0(VAR_6->zPattern, VAR_11, &VAR_7);
          FUNC_2(VAR_11);
          if( VAR_12<0 ) return VAR_0;
          VAR_7 = FUNC_8(VAR_9, VAR_10, VAR_7);
        }else{
          VAR_7 = FUNC_10(VAR_9, VAR_10);
        }
      }

      FUNC_3(VAR_4, VAR_7);
      break;
    }
    case 134: {
      FUNC_5(VAR_4, VAR_6->a[VAR_6->iRow].zHash, -1, VAR_2);
      break;
    }
    case 129: {
      FUNC_3(VAR_4, VAR_6->iTop);
      break;
    }
    case 132: {
      FUNC_3(VAR_4, VAR_6->iScope);
      break;
    }
    case 130: {
      FUNC_3(VAR_4, VAR_6->nSearch);
      break;
    }
    default: {
      FUNC_4(VAR_4);
      break;
    }
  }
  return VAR_1;
}
