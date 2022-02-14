
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (void*,int,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, void *VAR_2, int VAR_3){
  FILE *VAR_4;
  VAR_4 = FUNC_2(VAR_1, "wb");
  if( VAR_4==0 ){
    FUNC_3(VAR_0, "cannot open \"%s\" for writing\n", VAR_1);
    FUNC_0(1);
  }
  if( FUNC_4(VAR_2, VAR_3, 1, VAR_4)!=1 ){
    FUNC_3(VAR_0, "cannot write to \"%s\"\n", VAR_1);
    FUNC_0(1);
  }
  FUNC_1(VAR_4);
}
