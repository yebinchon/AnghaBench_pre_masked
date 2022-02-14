
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int azName ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0){
  static const char *VAR_1[] = {
    "node", "parent", "rowid"
  };
  unsigned int VAR_2;
  for(VAR_2=0; VAR_2<sizeof(VAR_1)/sizeof(VAR_1[0]); VAR_2++){
    if( FUNC_0(VAR_0, VAR_1[VAR_2])==0 ) return 1;
  }
  return 0;
}
