
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;





 scalar_t__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 unsigned char* FUNC_2 (int *) ;
 int FUNC_3 (unsigned char const*,int,int*) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const unsigned char *VAR_5 = FUNC_2(VAR_4[0]);
  int VAR_6 = FUNC_1(VAR_4[0]);
  int VAR_7, VAR_8;
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11 = 0;






  while( VAR_6>0 ){
    VAR_7 = FUNC_3(VAR_5, VAR_6, &VAR_8);
    VAR_5 += VAR_8;
    VAR_6 -= VAR_8;
    if( VAR_7<0x02af ){
      if( VAR_7>=0x80 || VAR_1[VAR_7&0x7f]<VAR_0 ){
        VAR_9 |= 0x0001;
      }else if( VAR_7>='0' && VAR_7<='9' ){
        VAR_11 = 1;
      }
    }else if( VAR_7>=0x0400 && VAR_7<=0x04ff ){
      VAR_9 |= 0x0002;
    }else if( VAR_7>=0x0386 && VAR_7<=0x03ce ){
      VAR_9 |= 0x0004;
    }else if( VAR_7>=0x0590 && VAR_7<=0x05ff ){
      VAR_9 |= 0x0008;
    }else if( VAR_7>=0x0600 && VAR_7<=0x06ff ){
      VAR_9 |= 0x0010;
    }
  }
  if( VAR_9==0 && VAR_11 ) VAR_9 = 0x0001;
  switch( VAR_9 ){
    case 0: VAR_10 = 999; break;
    case 0x0001: VAR_10 = 215; break;
    case 0x0002: VAR_10 = 220; break;
    case 0x0004: VAR_10 = 200; break;
    case 0x0008: VAR_10 = 125; break;
    case 0x0010: VAR_10 = 160; break;
    default: VAR_10 = 998; break;
  }
  FUNC_0(VAR_2, VAR_10);
}
