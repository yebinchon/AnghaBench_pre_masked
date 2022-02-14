
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Str ;


 int FUNC_0 (int *,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_1(
  Str *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  char **VAR_3, int VAR_4
){
  int VAR_5;
  for(VAR_5=0; VAR_3[VAR_5] && (VAR_5<VAR_4 || VAR_4<0); VAR_5++){
    if( VAR_5!=0 ) FUNC_0(VAR_0, "%s", VAR_1);
    FUNC_0(VAR_0, VAR_2, VAR_3[VAR_5], VAR_3[VAR_5], VAR_3[VAR_5]);
  }
}
