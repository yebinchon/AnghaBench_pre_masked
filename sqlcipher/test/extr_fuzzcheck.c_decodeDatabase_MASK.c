
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sqlite3_uint64 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 unsigned char FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char const*,int,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char const*,char*,int) ;
 int FUNC_7 (unsigned char*,int ,size_t) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (unsigned int) ;
 unsigned char* FUNC_10 (unsigned char*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_11(
  const unsigned char *VAR_3,
  int VAR_4,
  unsigned char **VAR_5,
  int *VAR_6
){
  unsigned char *VAR_7;
  int VAR_8 = 0;
  sqlite3_uint64 VAR_9 = 4096;
  unsigned int VAR_10;
  unsigned int VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  unsigned char VAR_14 = 0;
  if( VAR_4<4 ) return -1;
  VAR_13 = (unsigned int)VAR_4;
  VAR_7 = FUNC_9( VAR_9 );
  if( VAR_7==0 ){
    FUNC_2(VAR_2, "Out of memory!\n");
    FUNC_1(1);
  }
  FUNC_7(VAR_7, 0, (size_t)VAR_9);
  for(VAR_10=VAR_12=0; VAR_10<VAR_13; VAR_10++){
    unsigned char VAR_15 = (unsigned char)VAR_3[VAR_10];
    if( FUNC_5(VAR_15) ){
      VAR_12++;
      if( VAR_12 & 1 ){
        VAR_14 = FUNC_3(VAR_15)*16;
      }else{
        VAR_14 += FUNC_3(VAR_15);
        VAR_11 = VAR_12/2 - 1;
        if( VAR_11>=VAR_9 ){
          sqlite3_uint64 VAR_16;
          if( VAR_9==VAR_0 || VAR_11>=VAR_0 ){
            if( VAR_1 ){
              FUNC_2(VAR_2, "Input database too big: max %d bytes\n",
                      VAR_0);
            }
            FUNC_8(VAR_7);
            return -1;
          }
          VAR_16 = VAR_9*2;
          if( VAR_16<=VAR_11 ){
            VAR_16 = (VAR_11+4096)&~4095;
          }
          if( VAR_16>VAR_0 ){
            if( VAR_11>=VAR_0 ){
              FUNC_8(VAR_7);
              return -1;
            }
            VAR_16 = VAR_0;
          }
          VAR_7 = FUNC_10( VAR_7, VAR_16 );
          if( VAR_7==0 ){
            FUNC_2(VAR_2, "Out of memory!\n");
            FUNC_1(1);
          }
          FUNC_0( VAR_16 > VAR_9 );
          FUNC_7(VAR_7+VAR_9, 0, (size_t)(VAR_16 - VAR_9));
          VAR_9 = VAR_16;
        }
        if( VAR_11>=(unsigned)VAR_8 ){
          VAR_8 = (VAR_11 + 4095)&~4095;
          if( VAR_8>VAR_0 ) VAR_8 = VAR_0;
        }
        FUNC_0( VAR_11<VAR_9 );
        VAR_7[VAR_11] = VAR_14;
      }
    }else if( VAR_3[VAR_10]=='[' && VAR_10<VAR_13-3 && FUNC_4(VAR_3+VAR_10, VAR_4-VAR_10, &VAR_12, &VAR_10) ){
      continue;
   }else if( VAR_3[VAR_10]=='\n' && VAR_10<VAR_13-4 && FUNC_6(VAR_3+VAR_10,"\n--\n",4)==0 ){
      VAR_10 += 4;
      break;
    }
  }
  *VAR_6 = VAR_8;
  *VAR_5 = VAR_7;
  return VAR_10;
}
