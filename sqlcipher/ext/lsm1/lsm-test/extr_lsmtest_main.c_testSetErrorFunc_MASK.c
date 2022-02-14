
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,int,int) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(int VAR_1, int *VAR_2, const char *VAR_3, int VAR_4){
  if( VAR_1 ){
    *VAR_2 = VAR_1;
    FUNC_0(VAR_0, "FAILED (%s:%d) rc=%d ", VAR_3, VAR_4, VAR_1);
    FUNC_1();
  }
}
