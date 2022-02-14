
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* z; } ;
typedef TYPE_1__ GeoParse ;
typedef double GeoCoord ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 char FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char const*,double*,int,int ) ;

__attribute__((used)) static int FUNC_4(GeoParse *VAR_1, GeoCoord *VAR_2){
  char VAR_3 = FUNC_1(VAR_1);
  const unsigned char *VAR_4 = VAR_1->z;
  int VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7 = 0;
  if( VAR_3=='-' ){
    VAR_5 = 1;
    VAR_3 = VAR_4[VAR_5];
  }
  if( VAR_3=='0' && VAR_4[VAR_5+1]>='0' && VAR_4[VAR_5+1]<='9' ) return 0;
  for(;; VAR_5++){
    VAR_3 = VAR_4[VAR_5];
    if( FUNC_2(VAR_3) ) continue;
    if( VAR_3=='.' ){
      if( VAR_4[VAR_5-1]=='-' ) return 0;
      if( VAR_6 ) return 0;
      VAR_6 = 1;
      continue;
    }
    if( VAR_3=='e' || VAR_3=='E' ){
      if( VAR_4[VAR_5-1]<'0' ) return 0;
      if( VAR_7 ) return -1;
      VAR_6 = VAR_7 = 1;
      VAR_3 = VAR_4[VAR_5+1];
      if( VAR_3=='+' || VAR_3=='-' ){
        VAR_5++;
        VAR_3 = VAR_4[VAR_5+1];
      }
      if( VAR_3<'0' || VAR_3>'9' ) return 0;
      continue;
    }
    break;
  }
  if( VAR_4[VAR_5-1]<'0' ) return 0;
  if( VAR_2 ){







     *VAR_2 = (GeoCoord)FUNC_0((const char*)VAR_1->z);

  }
  VAR_1->z += VAR_5;
  return 1;
}
