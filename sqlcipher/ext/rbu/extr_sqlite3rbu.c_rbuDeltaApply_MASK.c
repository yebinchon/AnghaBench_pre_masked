
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,unsigned int) ;
 unsigned int FUNC_1 (char*,unsigned int) ;
 unsigned int FUNC_2 (char const**,int*) ;

__attribute__((used)) static int FUNC_3(
  const char *VAR_0,
  int VAR_1,
  const char *VAR_2,
  int VAR_3,
  char *VAR_4
){
  unsigned int VAR_5;
  unsigned int VAR_6 = 0;




  VAR_5 = FUNC_2(&VAR_2, &VAR_3);
  if( *VAR_2!='\n' ){

    return -1;
  }
  VAR_2++; VAR_3--;
  while( *VAR_2 && VAR_3>0 ){
    unsigned int VAR_7, VAR_8;
    VAR_7 = FUNC_2(&VAR_2, &VAR_3);
    switch( VAR_2[0] ){
      case '@': {
        VAR_2++; VAR_3--;
        VAR_8 = FUNC_2(&VAR_2, &VAR_3);
        if( VAR_3>0 && VAR_2[0]!=',' ){

          return -1;
        }
        VAR_2++; VAR_3--;
        VAR_6 += VAR_7;
        if( VAR_6>VAR_5 ){

          return -1;
        }
        if( (int)(VAR_8+VAR_7) > VAR_1 ){

          return -1;
        }
        FUNC_0(VAR_4, &VAR_0[VAR_8], VAR_7);
        VAR_4 += VAR_7;
        break;
      }
      case ':': {
        VAR_2++; VAR_3--;
        VAR_6 += VAR_7;
        if( VAR_6>VAR_5 ){

          return -1;
        }
        if( (int)VAR_7>VAR_3 ){

          return -1;
        }
        FUNC_0(VAR_4, VAR_2, VAR_7);
        VAR_4 += VAR_7;
        VAR_2 += VAR_7;
        VAR_3 -= VAR_7;
        break;
      }
      case ';': {
        VAR_2++; VAR_3--;
        VAR_4[0] = 0;






        if( VAR_6!=VAR_5 ){

          return -1;
        }
        return VAR_6;
      }
      default: {

        return -1;
      }
    }
  }

  return -1;
}
