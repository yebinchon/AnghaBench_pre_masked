
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(int VAR_2, char **VAR_3){
  int VAR_4;
  unsigned VAR_5 = VAR_1;
  for(VAR_4=1; VAR_4<VAR_2; VAR_4++){
    const char *VAR_6 = VAR_3[VAR_4];
    if( VAR_6[0]=='-' ){
      while( VAR_6[0]=='-' ) VAR_6++;
      if( FUNC_2(VAR_6,"crok")==0 ){
        VAR_5 |= VAR_0;
      }else if( FUNC_2(VAR_6, "wseol")==0 ){
        VAR_5 &= ~VAR_1;
      }else if( FUNC_2(VAR_6, "help")==0 ){
        FUNC_1("Usage: %s [options] FILE ...\n", VAR_3[0]);
        FUNC_1("  --crok      Do not report on carriage-returns\n");
        FUNC_1("  --wseol     Complain about whitespace at end-of-line\n");
        FUNC_1("  --help      This message\n");
      }else{
        FUNC_1("unknown command-line option: [%s]\n", VAR_3[VAR_4]);
        FUNC_1("use --help for additional information\n");
      }
    }else{
      FUNC_0(VAR_3[VAR_4], VAR_5);
    }
  }
  return 0;
}
