
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 size_t FUNC_4 (void*,int,int,int *) ;

void FUNC_5(
  const char *VAR_1,
  int VAR_2,
  void *VAR_3,
  int VAR_4,
  int *VAR_5
){
  if( *VAR_5==0 ){
    FILE *VAR_6;
    VAR_6 = FUNC_2(VAR_1, "r+b");
    if( VAR_6==0 ){
      *VAR_5 = 1;
    }else{
      if( 0!=FUNC_3(VAR_6, VAR_2, VAR_0) ){
        *VAR_5 = 1;
      }else{
        FUNC_0( VAR_4>=0 );
        if( (size_t)VAR_4!=FUNC_4(VAR_3, 1, VAR_4, VAR_6) ){
          *VAR_5 = 1;
        }
      }
      FUNC_1(VAR_6);
    }
  }
}
