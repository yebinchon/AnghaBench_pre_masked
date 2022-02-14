
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Interp ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(Tcl_Interp *VAR_0, const char *VAR_1){
  if( VAR_1==0 || VAR_1[0]==0 || VAR_1[1]!=0 || !FUNC_1((unsigned char)VAR_1[0]) ){
    FUNC_0(VAR_0, "thread ID must be an upper case letter", 0);
    return -1;
  }
  return VAR_1[0] - 'A';
}
