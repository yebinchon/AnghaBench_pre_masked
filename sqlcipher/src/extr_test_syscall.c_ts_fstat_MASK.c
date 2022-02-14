
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int,struct stat*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct stat *VAR_1){
  if( FUNC_1("fstat") ){
    return -1;
  }
  return FUNC_0(VAR_0, VAR_1);
}
