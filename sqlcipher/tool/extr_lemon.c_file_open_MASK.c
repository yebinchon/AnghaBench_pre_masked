
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lemon {char* outname; int errorcnt; } ;
typedef int FILE ;


 char* FUNC_0 (struct lemon*,char const*) ;
 int * FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;

FILE *FUNC_4(
  struct lemon *VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  FILE *VAR_4;

  if( VAR_1->outname ) FUNC_3(VAR_1->outname);
  VAR_1->outname = FUNC_0(VAR_1, VAR_2);
  VAR_4 = FUNC_1(VAR_1->outname,VAR_3);
  if( VAR_4==0 && *VAR_3=='w' ){
    FUNC_2(VAR_0,"Can't open file \"%s\".\n",VAR_1->outname);
    VAR_1->errorcnt++;
    return 0;
  }
  return VAR_4;
}
