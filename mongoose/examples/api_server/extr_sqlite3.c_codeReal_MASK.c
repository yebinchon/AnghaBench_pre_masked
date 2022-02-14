
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vdbe ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (char const*,double*,int ,int ) ;
 int FUNC_4 (double) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,int ,int,int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(Vdbe *VAR_3, const char *VAR_4, int VAR_5, int VAR_6){
  if( FUNC_0(VAR_4!=0) ){
    double VAR_7;
    char *VAR_8;
    FUNC_3(VAR_4, &VAR_7, FUNC_5(VAR_4), VAR_2);
    FUNC_1( !FUNC_4(VAR_7) );
    if( VAR_5 ) VAR_7 = -VAR_7;
    VAR_8 = FUNC_2(VAR_3, (char*)&VAR_7);
    FUNC_6(VAR_3, VAR_0, 0, VAR_6, 0, VAR_8, VAR_1);
  }
}
