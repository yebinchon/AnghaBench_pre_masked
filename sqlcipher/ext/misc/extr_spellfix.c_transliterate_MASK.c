
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cFrom; unsigned char cTo0; char cTo1; char cTo2; char cTo3; char cTo4; } ;
typedef TYPE_1__ Transliteration ;


 TYPE_1__* FUNC_0 (int,int*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*,int,int*) ;

__attribute__((used)) static unsigned char *FUNC_3(const unsigned char *VAR_0, int VAR_1){



  unsigned char *VAR_2 = FUNC_1( VAR_1*4 + 1 );

  int VAR_3, VAR_4, VAR_5;
  if( VAR_2==0 ) return 0;
  VAR_5 = 0;
  while( VAR_1>0 ){
    VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4);
    VAR_0 += VAR_4;
    VAR_1 -= VAR_4;
    if( VAR_3<=127 ){
      VAR_2[VAR_5++] = (unsigned char)VAR_3;
    }else{
      int VAR_6, VAR_7, VAR_8;
      const Transliteration *VAR_9 = FUNC_0(VAR_3, &VAR_6);
      VAR_7 = 0;
      while( VAR_6>=VAR_7 ){
        VAR_8 = (VAR_6 + VAR_7)/2;
        if( VAR_9[VAR_8].cFrom==VAR_3 ){
          VAR_2[VAR_5++] = VAR_9[VAR_8].cTo0;
          if( VAR_9[VAR_8].cTo1 ){
            VAR_2[VAR_5++] = VAR_9[VAR_8].cTo1;
            if( VAR_9[VAR_8].cTo2 ){
              VAR_2[VAR_5++] = VAR_9[VAR_8].cTo2;
              if( VAR_9[VAR_8].cTo3 ){
                VAR_2[VAR_5++] = VAR_9[VAR_8].cTo3;





              }
            }
          }
          VAR_3 = 0;
          break;
        }else if( VAR_9[VAR_8].cFrom>VAR_3 ){
          VAR_6 = VAR_8-1;
        }else{
          VAR_7 = VAR_8+1;
        }
      }
      if( VAR_3 ) VAR_2[VAR_5++] = '?';
    }
  }
  VAR_2[VAR_5] = 0;
  return VAR_2;
}
