
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (void const*,void const*,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_0,
  int VAR_1, const void *VAR_2,
  int VAR_3, const void *VAR_4
){
  int VAR_5, VAR_6;
  VAR_6 = VAR_1<VAR_3 ? VAR_1 : VAR_3;
  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_6);
  if( VAR_5==0 ){
    if( VAR_0
     && FUNC_0(((char*)VAR_2)+VAR_6, VAR_1-VAR_6)
     && FUNC_0(((char*)VAR_4)+VAR_6, VAR_3-VAR_6)
    ){

    }else{
      VAR_5 = VAR_1 - VAR_3;
    }
  }
  return VAR_5;
}
