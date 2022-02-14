
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int i64 ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (char const*,int *,int ,int ) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_1, i64 *VAR_2){

  if( VAR_1[0]=='0'
   && (VAR_1[1]=='x' || VAR_1[1]=='X')
  ){
    u64 VAR_3 = 0;
    int VAR_4, VAR_5;
    for(VAR_4=2; VAR_1[VAR_4]=='0'; VAR_4++){}
    for(VAR_5=VAR_4; FUNC_3(VAR_1[VAR_5]); VAR_5++){
      VAR_3 = VAR_3*16 + FUNC_2(VAR_1[VAR_5]);
    }
    FUNC_0(VAR_2, &VAR_3, 8);
    return (VAR_1[VAR_5]==0 && VAR_5-VAR_4<=16) ? 0 : 2;
  }else

  {
    return FUNC_1(VAR_1, VAR_2, FUNC_4(VAR_1), VAR_0);
  }
}
