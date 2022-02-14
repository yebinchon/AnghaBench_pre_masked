
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(void){
  const char *VAR_2[] = {
    "one", "one",
    "two", "four",
    "three", "nine",
    "four", "sixteen",
    "five", "twentyfive",
    "six", "thirtysix",
    "seven", "fourtynine",
    "eight", "sixtyfour",
  };
  int VAR_3;
  int VAR_4;
  lsm_db *VAR_5;

  FUNC_7(VAR_0);

  VAR_3 = FUNC_4(FUNC_6(), &VAR_5);
  if( VAR_3==VAR_1 ) VAR_3 = FUNC_5(VAR_5, VAR_0);

  for(VAR_4=0; VAR_3==VAR_1 && VAR_4<FUNC_0(VAR_2); VAR_4+=2){
    VAR_3 = FUNC_2(VAR_5, VAR_2[VAR_4], VAR_2[VAR_4+1]);
  }
  FUNC_3(VAR_5);

  FUNC_8(VAR_0, "log");
  FUNC_1( VAR_3==VAR_1 );
}
