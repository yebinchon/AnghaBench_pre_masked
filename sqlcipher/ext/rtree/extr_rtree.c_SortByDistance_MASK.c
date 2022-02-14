
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RtreeDValue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(
  int *VAR_0,
  int VAR_1,
  RtreeDValue *VAR_2,
  int *VAR_3
){
  if( VAR_1>1 ){
    int VAR_4 = 0;
    int VAR_5 = 0;

    int VAR_6 = VAR_1/2;
    int VAR_7 = VAR_1-VAR_6;
    int *VAR_8 = VAR_0;
    int *VAR_9 = &VAR_0[VAR_6];

    FUNC_2(VAR_8, VAR_6, VAR_2, VAR_3);
    FUNC_2(VAR_9, VAR_7, VAR_2, VAR_3);

    FUNC_1(VAR_3, VAR_8, sizeof(int)*VAR_6);
    VAR_8 = VAR_3;

    while( VAR_4<VAR_6 || VAR_5<VAR_7 ){
      if( VAR_4==VAR_6 ){
        VAR_0[VAR_4+VAR_5] = VAR_9[VAR_5];
        VAR_5++;
      }else if( VAR_5==VAR_7 ){
        VAR_0[VAR_4+VAR_5] = VAR_8[VAR_4];
        VAR_4++;
      }else{
        RtreeDValue VAR_10 = VAR_2[VAR_8[VAR_4]];
        RtreeDValue VAR_11 = VAR_2[VAR_9[VAR_5]];
        if( VAR_10<VAR_11 ){
          VAR_0[VAR_4+VAR_5] = VAR_8[VAR_4];
          VAR_4++;
        }else{
          VAR_0[VAR_4+VAR_5] = VAR_9[VAR_5];
          VAR_5++;
        }
      }
    }
  }
}
