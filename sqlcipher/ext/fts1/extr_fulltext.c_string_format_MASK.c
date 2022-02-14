
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, const char *VAR_1){
  const char *VAR_2;
  size_t VAR_3 = 0;
  size_t VAR_4 = FUNC_3(VAR_1);
  char *VAR_5;
  char *VAR_6;


  for(VAR_2 = VAR_0 ; *VAR_2 ; ++VAR_2){
    VAR_3 += (*VAR_2=='%' ? VAR_4 : 1);
  }
  VAR_3 += 1;

  VAR_6 = VAR_5 = FUNC_1(VAR_3);
  for(VAR_2 = VAR_0; *VAR_2; ++VAR_2){
    if( *VAR_2=='%' ){
      FUNC_2(VAR_6, VAR_1, VAR_4);
      VAR_6 += VAR_4;
    } else {
      *VAR_6++ = *VAR_2;
    }
  }
  *VAR_6++ = '\0';
  FUNC_0( VAR_6 == VAR_5 + VAR_3 );
  return VAR_5;
}
