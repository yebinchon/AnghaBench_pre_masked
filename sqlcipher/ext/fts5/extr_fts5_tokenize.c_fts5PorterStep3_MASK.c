
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int *VAR_1){
  int VAR_2 = 0;
  int VAR_3 = *VAR_1;
  switch( VAR_0[VAR_3-2] ){

    case 'a':
      if( VAR_3>4 && 0==FUNC_1("ical", &VAR_0[VAR_3-4], 4) ){
        if( FUNC_0(VAR_0, VAR_3-4) ){
          FUNC_2(&VAR_0[VAR_3-4], "ic", 2);
          *VAR_1 = VAR_3 - 4 + 2;
        }
      }
      break;

    case 's':
      if( VAR_3>4 && 0==FUNC_1("ness", &VAR_0[VAR_3-4], 4) ){
        if( FUNC_0(VAR_0, VAR_3-4) ){
          *VAR_1 = VAR_3 - 4;
        }
      }
      break;

    case 't':
      if( VAR_3>5 && 0==FUNC_1("icate", &VAR_0[VAR_3-5], 5) ){
        if( FUNC_0(VAR_0, VAR_3-5) ){
          FUNC_2(&VAR_0[VAR_3-5], "ic", 2);
          *VAR_1 = VAR_3 - 5 + 2;
        }
      }else if( VAR_3>5 && 0==FUNC_1("iciti", &VAR_0[VAR_3-5], 5) ){
        if( FUNC_0(VAR_0, VAR_3-5) ){
          FUNC_2(&VAR_0[VAR_3-5], "ic", 2);
          *VAR_1 = VAR_3 - 5 + 2;
        }
      }
      break;

    case 'u':
      if( VAR_3>3 && 0==FUNC_1("ful", &VAR_0[VAR_3-3], 3) ){
        if( FUNC_0(VAR_0, VAR_3-3) ){
          *VAR_1 = VAR_3 - 3;
        }
      }
      break;

    case 'v':
      if( VAR_3>5 && 0==FUNC_1("ative", &VAR_0[VAR_3-5], 5) ){
        if( FUNC_0(VAR_0, VAR_3-5) ){
          *VAR_1 = VAR_3 - 5;
        }
      }
      break;

    case 'z':
      if( VAR_3>5 && 0==FUNC_1("alize", &VAR_0[VAR_3-5], 5) ){
        if( FUNC_0(VAR_0, VAR_3-5) ){
          FUNC_2(&VAR_0[VAR_3-5], "al", 2);
          *VAR_1 = VAR_3 - 5 + 2;
        }
      }
      break;

  }
  return VAR_2;
}
