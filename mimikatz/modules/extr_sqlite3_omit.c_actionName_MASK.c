
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



 int VAR_0 ;



 int FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(u8 VAR_1){
  const char *VAR_2;
  switch( VAR_1 ){
    case 128: VAR_2 = "SET NULL"; break;
    case 129: VAR_2 = "SET DEFAULT"; break;
    case 131: VAR_2 = "CASCADE"; break;
    case 130: VAR_2 = "RESTRICT"; break;
    default: VAR_2 = "NO ACTION";
                      FUNC_0( VAR_1==VAR_0 ); break;
  }
  return VAR_2;
}
