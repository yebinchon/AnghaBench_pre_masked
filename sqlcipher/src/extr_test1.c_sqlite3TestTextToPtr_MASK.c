
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2 ;
typedef int v ;
typedef int u64 ;
typedef int u32 ;
typedef int p ;


 int FUNC_0 (int) ;
 int FUNC_1 (void**,int*,int) ;
 int FUNC_2 (char const) ;

void *FUNC_3(const char *VAR_0){
  void *VAR_1;
  u64 VAR_2;
  u32 VAR_3;
  if( VAR_0[0]=='0' && VAR_0[1]=='x' ){
    VAR_0 += 2;
  }
  VAR_2 = 0;
  while( *VAR_0 ){
    VAR_2 = (VAR_2<<4) + FUNC_2(*VAR_0);
    VAR_0++;
  }
  if( sizeof(VAR_1)==sizeof(VAR_2) ){
    FUNC_1(&VAR_1, &VAR_2, sizeof(VAR_1));
  }else{
    FUNC_0( sizeof(VAR_1)==sizeof(VAR_3) );
    VAR_3 = (u32)VAR_2;
    FUNC_1(&VAR_1, &VAR_3, sizeof(VAR_1));
  }
  return VAR_1;
}
