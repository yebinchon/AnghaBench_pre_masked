
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int hash ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (char const*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,unsigned int) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (unsigned int,char**) ;
 int FUNC_9 (int*) ;
 int* FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(
  const char *VAR_1,
  unsigned int VAR_2,
  const char *VAR_3,
  unsigned int VAR_4,
  char *VAR_5
){
  int VAR_6, VAR_7;
  char *VAR_8 = VAR_5;
  hash VAR_9;
  int VAR_10;
  int *VAR_11;
  int *VAR_12;
  int VAR_13 = -1;



  FUNC_8(VAR_4, &VAR_5);
  *(VAR_5++) = '\n';





  if( VAR_2<=VAR_0 ){
    FUNC_8(VAR_4, &VAR_5);
    *(VAR_5++) = ':';
    FUNC_6(VAR_5, VAR_3, VAR_4);
    VAR_5 += VAR_4;
    FUNC_8(FUNC_0(VAR_3, VAR_4), &VAR_5);
    *(VAR_5++) = ';';
    return VAR_5 - VAR_8;
  }




  VAR_10 = VAR_2/VAR_0;
  VAR_12 = FUNC_10( (sqlite3_int64)VAR_10*2*sizeof(int) );
  FUNC_7(VAR_12, -1, VAR_10*2*sizeof(int));
  VAR_11 = &VAR_12[VAR_10];
  for(VAR_6=0; VAR_6<VAR_2-VAR_0; VAR_6+=VAR_0){
    int VAR_14 = FUNC_5(&VAR_1[VAR_6]) % VAR_10;
    VAR_12[VAR_6/VAR_0] = VAR_11[VAR_14];
    VAR_11[VAR_14] = VAR_6/VAR_0;
  }




  VAR_7 = 0;
  while( VAR_7+VAR_0<VAR_4 ){
    int VAR_15, VAR_16;
    unsigned int VAR_17, VAR_18=0, VAR_19=0;
    FUNC_3(&VAR_9, &VAR_3[VAR_7]);
    VAR_6 = 0;
    VAR_17 = 0;
    while( 1 ){
      int VAR_20;
      int VAR_21 = 250;

      VAR_20 = FUNC_2(&VAR_9) % VAR_10;
      VAR_16 = VAR_11[VAR_20];
      while( VAR_16>=0 && (VAR_21--)>0 ){
        int VAR_22, VAR_23, VAR_24;
        int VAR_25, VAR_26, VAR_27, VAR_28;
        int VAR_29;
        int VAR_30;



        VAR_15 = VAR_16*VAR_0;
        VAR_28 = VAR_7+VAR_6;
        VAR_30 = ( VAR_2-VAR_15 <= VAR_4-VAR_28 ) ? VAR_2 : VAR_15 + VAR_4 - VAR_28;
        for(VAR_27=VAR_15; VAR_27<VAR_30; VAR_27++, VAR_28++){
          if( VAR_1[VAR_27]!=VAR_3[VAR_28] ) break;
        }
        VAR_25 = VAR_27 - VAR_15 - 1;



        for(VAR_26=1; VAR_26<VAR_15 && VAR_26<=VAR_6; VAR_26++){
          if( VAR_1[VAR_15-VAR_26]!=VAR_3[VAR_7+VAR_6-VAR_26] ) break;
        }
        VAR_26--;


        VAR_23 = VAR_15-VAR_26;
        VAR_22 = VAR_25+VAR_26+1;
        VAR_24 = VAR_6-VAR_26;


        VAR_29 = FUNC_1(VAR_6-VAR_26)+FUNC_1(VAR_22)+FUNC_1(VAR_23)+3;
        if( VAR_22>=VAR_29 && VAR_22>VAR_17 ){


          VAR_17 = VAR_22;
          VAR_18 = VAR_15-VAR_26;
          VAR_19 = VAR_24;
        }


        VAR_16 = VAR_12[VAR_16];
      }




      if( VAR_17>0 ){
        if( VAR_19>0 ){

          FUNC_8(VAR_19,&VAR_5);
          *(VAR_5++) = ':';
          FUNC_6(VAR_5, &VAR_3[VAR_7], VAR_19);
          VAR_5 += VAR_19;
          VAR_7 += VAR_19;
        }
        VAR_7 += VAR_17;
        FUNC_8(VAR_17, &VAR_5);
        *(VAR_5++) = '@';
        FUNC_8(VAR_18, &VAR_5);
        *(VAR_5++) = ',';
        if( VAR_18 + VAR_17 -1 > VAR_13 ){
          VAR_13 = VAR_18 + VAR_17 - 1;
        }
        VAR_17 = 0;
        break;
      }


      if( VAR_7+VAR_6+VAR_0>=VAR_4 ){


        FUNC_8(VAR_4-VAR_7, &VAR_5);
        *(VAR_5++) = ':';
        FUNC_6(VAR_5, &VAR_3[VAR_7], VAR_4-VAR_7);
        VAR_5 += VAR_4-VAR_7;
        VAR_7 = VAR_4;
        break;
      }


      FUNC_4(&VAR_9, VAR_3[VAR_7+VAR_6+VAR_0]);
      VAR_6++;
    }
  }



  if( VAR_7<VAR_4 ){
    FUNC_8(VAR_4-VAR_7, &VAR_5);
    *(VAR_5++) = ':';
    FUNC_6(VAR_5, &VAR_3[VAR_7], VAR_4-VAR_7);
    VAR_5 += VAR_4-VAR_7;
  }

  FUNC_8(FUNC_0(VAR_3, VAR_4), &VAR_5);
  *(VAR_5++) = ';';
  FUNC_9(VAR_12);
  return VAR_5 - VAR_8;
}
