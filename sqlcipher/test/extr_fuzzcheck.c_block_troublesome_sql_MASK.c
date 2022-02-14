
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_5,
  int VAR_6,
  const char *VAR_7,
  const char *VAR_8,
  const char *VAR_9,
  const char *VAR_10
){
  (void)VAR_5;
  (void)VAR_8;
  (void)VAR_9;
  (void)VAR_10;
  if( VAR_6==VAR_4 ){
    if( FUNC_1("vdbe_", VAR_7, 5)==0
     || FUNC_0("parser_trace", VAR_7)==0
     || FUNC_0("temp_store_directory", VAR_7)==0
    ){
      return VAR_1;
    }
  }else if( (VAR_6==VAR_0 || VAR_6==VAR_2)
            && VAR_7 && VAR_7[0] ){
    return VAR_1;
  }
  return VAR_3;
}
