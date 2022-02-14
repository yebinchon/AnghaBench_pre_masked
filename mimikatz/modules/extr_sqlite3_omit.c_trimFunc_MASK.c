
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char const*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 unsigned char** FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (unsigned char const*,unsigned char*,int) ;
 int FUNC_5 (unsigned char**) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 unsigned char const* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const unsigned char *VAR_5;
  const unsigned char *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  unsigned char *VAR_10 = 0;
  unsigned char **VAR_11 = 0;
  int VAR_12;

  if( FUNC_10(VAR_4[0])==VAR_0 ){
    return;
  }
  VAR_5 = FUNC_9(VAR_4[0]);
  if( VAR_5==0 ) return;
  VAR_7 = FUNC_8(VAR_4[0]);
  FUNC_2( VAR_5==FUNC_9(VAR_4[0]) );
  if( VAR_3==1 ){
    static const unsigned char VAR_13[] = { 1 };
    static unsigned char * const VAR_14[] = { (u8*)" " };
    VAR_12 = 1;
    VAR_10 = (u8*)VAR_13;
    VAR_11 = (unsigned char **)VAR_14;
    VAR_6 = 0;
  }else if( (VAR_6 = FUNC_9(VAR_4[1]))==0 ){
    return;
  }else{
    const unsigned char *VAR_15;
    for(VAR_15=VAR_6, VAR_12=0; *VAR_15; VAR_12++){
      FUNC_1(VAR_15);
    }
    if( VAR_12>0 ){
      VAR_11 = FUNC_3(VAR_2, ((i64)VAR_12)*(sizeof(char*)+1));
      if( VAR_11==0 ){
        return;
      }
      VAR_10 = (unsigned char*)&VAR_11[VAR_12];
      for(VAR_15=VAR_6, VAR_12=0; *VAR_15; VAR_12++){
        VAR_11[VAR_12] = (unsigned char *)VAR_15;
        FUNC_1(VAR_15);
        VAR_10[VAR_12] = (u8)(VAR_15 - VAR_11[VAR_12]);
      }
    }
  }
  if( VAR_12>0 ){
    VAR_8 = FUNC_0(FUNC_7(VAR_2));
    if( VAR_8 & 1 ){
      while( VAR_7>0 ){
        int VAR_16 = 0;
        for(VAR_9=0; VAR_9<VAR_12; VAR_9++){
          VAR_16 = VAR_10[VAR_9];
          if( VAR_16<=VAR_7 && FUNC_4(VAR_5, VAR_11[VAR_9], VAR_16)==0 ) break;
        }
        if( VAR_9>=VAR_12 ) break;
        VAR_5 += VAR_16;
        VAR_7 -= VAR_16;
      }
    }
    if( VAR_8 & 2 ){
      while( VAR_7>0 ){
        int VAR_17 = 0;
        for(VAR_9=0; VAR_9<VAR_12; VAR_9++){
          VAR_17 = VAR_10[VAR_9];
          if( VAR_17<=VAR_7 && FUNC_4(&VAR_5[VAR_7-VAR_17],VAR_11[VAR_9],VAR_17)==0 ) break;
        }
        if( VAR_9>=VAR_12 ) break;
        VAR_7 -= VAR_17;
      }
    }
    if( VAR_6 ){
      FUNC_5(VAR_11);
    }
  }
  FUNC_6(VAR_2, (char*)VAR_5, VAR_7, VAR_1);
}
