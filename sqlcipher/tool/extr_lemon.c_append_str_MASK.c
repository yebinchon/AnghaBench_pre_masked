
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zInt ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int) ;

char *FUNC_5(const char *VAR_0, int VAR_1, int VAR_2, int VAR_3){
  static char VAR_4[1] = { 0 };
  static char *VAR_5 = 0;
  static int VAR_6 = 0;
  static int VAR_7 = 0;
  int VAR_8;
  char VAR_9[40];
  if( VAR_0==0 ){
    if( VAR_7==0 && VAR_5!=0 ) VAR_5[0] = 0;
    VAR_7 = 0;
    return VAR_5;
  }
  if( VAR_1<=0 ){
    if( VAR_1<0 ){
      VAR_7 += VAR_1;
      FUNC_0( VAR_7>=0 );
    }
    VAR_1 = FUNC_1(VAR_0);
  }
  if( (int) (VAR_1+sizeof(VAR_9)*2+VAR_7) >= VAR_6 ){
    VAR_6 = VAR_1 + sizeof(VAR_9)*2 + VAR_7 + 200;
    VAR_5 = (char *) FUNC_4(VAR_5, VAR_6);
  }
  if( VAR_5==0 ) return VAR_4;
  while( VAR_1-- > 0 ){
    VAR_8 = *(VAR_0++);
    if( VAR_8=='%' && VAR_1>0 && VAR_0[0]=='d' ){
      FUNC_2(VAR_9, "%d", VAR_2);
      VAR_2 = VAR_3;
      FUNC_3(&VAR_5[VAR_7], VAR_9);
      VAR_7 += FUNC_1(&VAR_5[VAR_7]);
      VAR_0++;
      VAR_1--;
    }else{
      VAR_5[VAR_7++] = (char)VAR_8;
    }
  }
  VAR_5[VAR_7] = 0;
  return VAR_5;
}
