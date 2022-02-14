
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_5__ {char* zJContent; } ;
struct TYPE_6__ {int eType; int jnFlags; size_t n; TYPE_1__ u; } ;
typedef TYPE_2__ JsonNode ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,int **) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char const*,double*,int ,int ) ;
 int FUNC_4 (char const*) ;
 int VAR_7 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *,double) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,size_t,int ) ;
 double FUNC_12 (char*,int ) ;

__attribute__((used)) static void FUNC_13(
  JsonNode *VAR_8,
  sqlite3_context *VAR_9,
  sqlite3_value **VAR_10
){
  switch( VAR_8->eType ){
    default: {
      FUNC_0( VAR_8->eType==VAR_2 );
      FUNC_10(VAR_9);
      break;
    }
    case 128: {
      FUNC_8(VAR_9, 1);
      break;
    }
    case 133: {
      FUNC_8(VAR_9, 0);
      break;
    }
    case 132: {
      sqlite3_int64 VAR_11 = 0;
      const char *VAR_12 = VAR_8->u.zJContent;
      if( VAR_12[0]=='-' ){ VAR_12++; }
      while( VAR_12[0]>='0' && VAR_12[0]<='9' ){
        unsigned VAR_13 = *(VAR_12++) - '0';
        if( VAR_11>=VAR_3/10 ){
          if( VAR_11>VAR_3/10 ) goto int_as_real;
          if( VAR_12[0]>='0' && VAR_12[0]<='9' ) goto int_as_real;
          if( VAR_13==9 ) goto int_as_real;
          if( VAR_13==8 ){
            if( VAR_8->u.zJContent[0]=='-' ){
              FUNC_9(VAR_9, VAR_4);
              goto int_done;
            }else{
              goto int_as_real;
            }
          }
        }
        VAR_11 = VAR_11*10 + VAR_13;
      }
      if( VAR_8->u.zJContent[0]=='-' ){ VAR_11 = -VAR_11; }
      FUNC_9(VAR_9, VAR_11);
      int_done:
      break;
      int_as_real: ;
    }
    case 130: {
      double VAR_14;




      VAR_14 = FUNC_12(VAR_8->u.zJContent, 0);

      FUNC_6(VAR_9, VAR_14);
      break;
    }
    case 129: {
      FUNC_0( (VAR_8->jnFlags & VAR_1)==0 );
      if( (VAR_8->jnFlags & VAR_0)==0 ){

        FUNC_11(VAR_9, VAR_8->u.zJContent+1, VAR_8->n-2,
                            VAR_5);
      }else{

        u32 VAR_15;
        u32 VAR_16 = VAR_8->n;
        const char *VAR_17 = VAR_8->u.zJContent;
        char *VAR_18;
        u32 VAR_19;
        VAR_18 = FUNC_5( VAR_16+1 );
        if( VAR_18==0 ){
          FUNC_7(VAR_9);
          break;
        }
        for(VAR_15=1, VAR_19=0; VAR_15<VAR_16-1; VAR_15++){
          char VAR_20 = VAR_17[VAR_15];
          if( VAR_20!='\\' ){
            VAR_18[VAR_19++] = VAR_20;
          }else{
            VAR_20 = VAR_17[++VAR_15];
            if( VAR_20=='u' ){
              u32 VAR_21 = 0, VAR_22;
              for(VAR_22=0; VAR_22<4; VAR_15++, VAR_22++){
                FUNC_0( VAR_15<VAR_16-2 );
                VAR_20 = VAR_17[VAR_15+1];
                FUNC_0( FUNC_2(VAR_20) );
                if( VAR_20<='9' ) VAR_21 = VAR_21*16 + VAR_20 - '0';
                else if( VAR_20<='F' ) VAR_21 = VAR_21*16 + VAR_20 - 'A' + 10;
                else VAR_21 = VAR_21*16 + VAR_20 - 'a' + 10;
              }
              if( VAR_21==0 ) break;
              if( VAR_21<=0x7f ){
                VAR_18[VAR_19++] = (char)VAR_21;
              }else if( VAR_21<=0x7ff ){
                VAR_18[VAR_19++] = (char)(0xc0 | (VAR_21>>6));
                VAR_18[VAR_19++] = 0x80 | (VAR_21&0x3f);
              }else{
                VAR_18[VAR_19++] = (char)(0xe0 | (VAR_21>>12));
                VAR_18[VAR_19++] = 0x80 | ((VAR_21>>6)&0x3f);
                VAR_18[VAR_19++] = 0x80 | (VAR_21&0x3f);
              }
            }else{
              if( VAR_20=='b' ){
                VAR_20 = '\b';
              }else if( VAR_20=='f' ){
                VAR_20 = '\f';
              }else if( VAR_20=='n' ){
                VAR_20 = '\n';
              }else if( VAR_20=='r' ){
                VAR_20 = '\r';
              }else if( VAR_20=='t' ){
                VAR_20 = '\t';
              }
              VAR_18[VAR_19++] = VAR_20;
            }
          }
        }
        VAR_18[VAR_19] = 0;
        FUNC_11(VAR_9, VAR_18, VAR_19, VAR_7);
      }
      break;
    }
    case 134:
    case 131: {
      FUNC_1(VAR_8, VAR_9, VAR_10);
      break;
    }
  }
}
