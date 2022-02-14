
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int,char*,char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(sqlite3_vfs *VAR_6, const char *VAR_7, int VAR_8){
  int VAR_9;

  VAR_9 = FUNC_5(VAR_7);
  if( VAR_9!=0 && VAR_5==VAR_0 ) return VAR_4;

  if( VAR_9==0 && VAR_8 ){
    int VAR_10;
    int VAR_11;
    char VAR_12[VAR_1+1];


    FUNC_3(VAR_1, VAR_12, "%s", VAR_7);
    VAR_12[VAR_1] = '\0';
    for(VAR_11=FUNC_4(VAR_12); VAR_11>1 && VAR_12[VAR_11]!='/'; VAR_11++);
    VAR_12[VAR_11] = '\0';


    VAR_10 = FUNC_2(VAR_12, VAR_2, 0);
    if( VAR_10<0 ){
      VAR_9 = -1;
    }else{
      VAR_9 = FUNC_1(VAR_10);
      FUNC_0(VAR_10);
    }
  }
  return (VAR_9==0 ? VAR_4 : VAR_3);
}
