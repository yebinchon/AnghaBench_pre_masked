
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(char *VAR_2){
  VAR_0 = (char *) FUNC_4( FUNC_2(VAR_2)+1 );
  if( VAR_0==0 ){
    FUNC_1(VAR_1,"out of memory\n");
    FUNC_0(1);
  }
  FUNC_3(VAR_0, VAR_2);
}
