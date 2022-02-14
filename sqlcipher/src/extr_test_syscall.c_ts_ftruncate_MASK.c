
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, off_t VAR_1){
  if( FUNC_1("ftruncate") ){
    return -1;
  }
  return FUNC_0(VAR_0, VAR_1);
}
