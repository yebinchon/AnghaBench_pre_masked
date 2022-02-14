
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0,
                           const char *VAR_1, const char *VAR_2){
  const char *VAR_3;
  size_t VAR_4 = 0;
  size_t VAR_5 = FUNC_3(VAR_1);
  size_t VAR_6 = FUNC_3(VAR_2);
  size_t VAR_7 = VAR_5+1+VAR_6;
  char *VAR_8;
  char *VAR_9;


  for(VAR_3 = VAR_0 ; *VAR_3 ; ++VAR_3){
    VAR_4 += (*VAR_3=='%' ? VAR_7 : 1);
  }
  VAR_4 += 1;

  VAR_9 = VAR_8 = FUNC_2(VAR_4);
  for(VAR_3 = VAR_0; *VAR_3; ++VAR_3){
    if( *VAR_3=='%' ){
      FUNC_1(VAR_9, VAR_1, VAR_5);
      VAR_9 += VAR_5;
      *VAR_9++ = '.';
      FUNC_1(VAR_9, VAR_2, VAR_6);
      VAR_9 += VAR_6;
    } else {
      *VAR_9++ = *VAR_3;
    }
  }
  *VAR_9++ = '\0';
  FUNC_0( VAR_9 == VAR_8 + VAR_4 );
  return VAR_8;
}
