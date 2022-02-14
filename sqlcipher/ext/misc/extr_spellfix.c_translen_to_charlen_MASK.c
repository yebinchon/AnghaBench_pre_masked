
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cFrom; scalar_t__ cTo3; scalar_t__ cTo2; scalar_t__ cTo1; } ;
typedef TYPE_1__ Transliteration ;


 TYPE_1__* FUNC_0 (int,int*) ;
 int FUNC_1 (unsigned char const*,int,int*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1, int VAR_2){
  int VAR_3, VAR_4, VAR_5, VAR_6;
  int VAR_7;

  VAR_3 = VAR_6 = 0;
  for(VAR_7=0; VAR_3<VAR_1 && VAR_6<VAR_2; VAR_7++){
    VAR_4 = FUNC_1((const unsigned char *)&VAR_0[VAR_3], VAR_1-VAR_3, &VAR_5);
    VAR_3 += VAR_5;

    VAR_6++;
    if( VAR_4>=128 ){
      int VAR_8, VAR_9, VAR_10;
      const Transliteration *VAR_11 = FUNC_0(VAR_4, &VAR_8);
      VAR_9 = 0;
      while( VAR_8>=VAR_9 ){
        VAR_10 = (VAR_8 + VAR_9)/2;
        if( VAR_11[VAR_10].cFrom==VAR_4 ){
          if( VAR_11[VAR_10].cTo1 ){
            VAR_6++;
            if( VAR_11[VAR_10].cTo2 ){
              VAR_6++;
              if( VAR_11[VAR_10].cTo3 ){
                VAR_6++;
              }
            }
          }
          break;
        }else if( VAR_11[VAR_10].cFrom>VAR_4 ){
          VAR_8 = VAR_10-1;
        }else{
          VAR_9 = VAR_10+1;
        }
      }
    }
  }

  return VAR_7;
}
