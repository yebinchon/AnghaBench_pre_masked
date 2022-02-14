
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Fts3Index {int nPrefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const**,int*) ;
 int FUNC_2 (struct Fts3Index*,int ,int) ;
 struct Fts3Index* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(
  const char *VAR_3,
  int *VAR_4,
  struct Fts3Index **VAR_5
){
  struct Fts3Index *VAR_6;
  int VAR_7 = 1;

  if( VAR_3 && VAR_3[0] ){
    const char *VAR_8;
    VAR_7++;
    for(VAR_8=VAR_3; *VAR_8; VAR_8++){
      if( *VAR_8==',' ) VAR_7++;
    }
  }

  VAR_6 = FUNC_3(sizeof(struct Fts3Index) * VAR_7);
  *VAR_5 = VAR_6;
  if( !VAR_6 ){
    return VAR_1;
  }

  FUNC_2(VAR_6, 0, sizeof(struct Fts3Index) * VAR_7);
  if( VAR_3 ){
    const char *VAR_9 = VAR_3;
    int VAR_10;
    for(VAR_10=1; VAR_10<VAR_7; VAR_10++){
      int VAR_11 = 0;
      if( FUNC_1(&VAR_9, &VAR_11) ) return VAR_0;
      FUNC_0( VAR_11>=0 );
      if( VAR_11==0 ){
        VAR_7--;
        VAR_10--;
      }else{
        VAR_6[VAR_10].nPrefix = VAR_11;
      }
      VAR_9++;
    }
  }

  *VAR_4 = VAR_7;
  return VAR_2;
}
