
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t n; int cTerm; int nLine; char* z; scalar_t__ bNotFirst; } ;
typedef TYPE_1__ CsvReader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*,int,char) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static char *FUNC_3(CsvReader *VAR_1){
  int VAR_2;
  VAR_1->n = 0;
  VAR_2 = FUNC_2(VAR_1);
  if( VAR_2==VAR_0 ){
    VAR_1->cTerm = VAR_0;
    return 0;
  }
  if( VAR_2=='"' ){
    int VAR_3, VAR_4;
    int VAR_5 = VAR_1->nLine;
    VAR_3 = VAR_4 = 0;
    while( 1 ){
      VAR_2 = FUNC_2(VAR_1);
      if( VAR_2<='"' || VAR_3=='"' ){
        if( VAR_2=='\n' ) VAR_1->nLine++;
        if( VAR_2=='"' ){
          if( VAR_3=='"' ){
            VAR_3 = 0;
            continue;
          }
        }
        if( (VAR_2==',' && VAR_3=='"')
         || (VAR_2=='\n' && VAR_3=='"')
         || (VAR_2=='\n' && VAR_3=='\r' && VAR_4=='"')
         || (VAR_2==VAR_0 && VAR_3=='"')
        ){
          do{ VAR_1->n--; }while( VAR_1->z[VAR_1->n]!='"' );
          VAR_1->cTerm = (char)VAR_2;
          break;
        }
        if( VAR_3=='"' && VAR_2!='\r' ){
          FUNC_1(VAR_1, "line %d: unescaped %c character", VAR_1->nLine, '"');
          break;
        }
        if( VAR_2==VAR_0 ){
          FUNC_1(VAR_1, "line %d: unterminated %c-quoted field\n",
                     VAR_5, '"');
          VAR_1->cTerm = (char)VAR_2;
          break;
        }
      }
      if( FUNC_0(VAR_1, (char)VAR_2) ) return 0;
      VAR_4 = VAR_3;
      VAR_3 = VAR_2;
    }
  }else{


    if( (VAR_2&0xff)==0xef && VAR_1->bNotFirst==0 ){
      FUNC_0(VAR_1, (char)VAR_2);
      VAR_2 = FUNC_2(VAR_1);
      if( (VAR_2&0xff)==0xbb ){
        FUNC_0(VAR_1, (char)VAR_2);
        VAR_2 = FUNC_2(VAR_1);
        if( (VAR_2&0xff)==0xbf ){
          VAR_1->bNotFirst = 1;
          VAR_1->n = 0;
          return FUNC_3(VAR_1);
        }
      }
    }
    while( VAR_2>',' || (VAR_2!=VAR_0 && VAR_2!=',' && VAR_2!='\n') ){
      if( FUNC_0(VAR_1, (char)VAR_2) ) return 0;
      VAR_2 = FUNC_2(VAR_1);
    }
    if( VAR_2=='\n' ){
      VAR_1->nLine++;
      if( VAR_1->n>0 && VAR_1->z[VAR_1->n-1]=='\r' ) VAR_1->n--;
    }
    VAR_1->cTerm = (char)VAR_2;
  }
  if( VAR_1->z ) VAR_1->z[VAR_1->n] = 0;
  VAR_1->bNotFirst = 1;
  return VAR_1->z;
}
