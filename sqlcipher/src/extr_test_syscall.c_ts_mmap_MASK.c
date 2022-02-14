
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 void* VAR_0 ;
 void* FUNC_0 (void*,size_t,int,int,int,int ) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void *FUNC_2(
  void *VAR_1,
  size_t VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5,
  off_t VAR_6
){
  if( FUNC_1("mmap") ){
    return VAR_0;
  }
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
