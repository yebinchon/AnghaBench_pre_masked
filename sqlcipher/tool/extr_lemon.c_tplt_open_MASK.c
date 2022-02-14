
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lemon {char* filename; int errorcnt; int argv0; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (int ,char*,int ) ;
 int VAR_0 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ VAR_1 ;

FILE *FUNC_6(struct lemon *VAR_2)
{
  static char VAR_3[] = "lempar.c";
  char VAR_4[1000];
  FILE *VAR_5;
  char *VAR_6;
  char *VAR_7;


  if (VAR_1 != 0) {
    if( FUNC_0(VAR_1,004)==-1 ){
      FUNC_2(VAR_0,"Can't find the parser driver template file \"%s\".\n",
        VAR_1);
      VAR_2->errorcnt++;
      return 0;
    }
    VAR_5 = FUNC_1(VAR_1,"rb");
    if( VAR_5==0 ){
      FUNC_2(VAR_0,"Can't open the template file \"%s\".\n",
              VAR_1);
      VAR_2->errorcnt++;
      return 0;
    }
    return VAR_5;
  }

  VAR_7 = FUNC_5(VAR_2->filename,'.');
  if( VAR_7 ){
    FUNC_3(VAR_4,"%.*s.lt",(int)(VAR_7-VAR_2->filename),VAR_2->filename);
  }else{
    FUNC_3(VAR_4,"%s.lt",VAR_2->filename);
  }
  if( FUNC_0(VAR_4,004)==0 ){
    VAR_6 = VAR_4;
  }else if( FUNC_0(VAR_3,004)==0 ){
    VAR_6 = VAR_3;
  }else{
    VAR_6 = FUNC_4(VAR_2->argv0,VAR_3,0);
  }
  if( VAR_6==0 ){
    FUNC_2(VAR_0,"Can't find the parser driver template file \"%s\".\n",
    VAR_3);
    VAR_2->errorcnt++;
    return 0;
  }
  VAR_5 = FUNC_1(VAR_6,"rb");
  if( VAR_5==0 ){
    FUNC_2(VAR_0,"Can't open the template file \"%s\".\n",VAR_3);
    VAR_2->errorcnt++;
    return 0;
  }
  return VAR_5;
}
