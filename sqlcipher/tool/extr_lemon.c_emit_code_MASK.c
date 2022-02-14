
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {char* codePrefix; char* code; int line; char* codeSuffix; } ;
struct lemon {int outname; int nolinenosflag; int filename; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2(
  FILE *VAR_0,
  struct rule *VAR_1,
  struct lemon *VAR_2,
  int *VAR_3
){
 const char *VAR_4;


 if( VAR_1->codePrefix && VAR_1->codePrefix[0] ){
   FUNC_0(VAR_0, "{%s", VAR_1->codePrefix);
   for(VAR_4=VAR_1->codePrefix; *VAR_4; VAR_4++){ if( *VAR_4=='\n' ) (*VAR_3)++; }
 }


 if( VAR_1->code ){
   if( !VAR_2->nolinenosflag ){
     (*VAR_3)++;
     FUNC_1(VAR_0,VAR_1->line,VAR_2->filename);
   }
   FUNC_0(VAR_0,"{%s",VAR_1->code);
   for(VAR_4=VAR_1->code; *VAR_4; VAR_4++){ if( *VAR_4=='\n' ) (*VAR_3)++; }
   FUNC_0(VAR_0,"}\n"); (*VAR_3)++;
   if( !VAR_2->nolinenosflag ){
     (*VAR_3)++;
     FUNC_1(VAR_0,*VAR_3,VAR_2->outname);
   }
 }


 if( VAR_1->codeSuffix && VAR_1->codeSuffix[0] ){
   FUNC_0(VAR_0, "%s", VAR_1->codeSuffix);
   for(VAR_4=VAR_1->codeSuffix; *VAR_4; VAR_4++){ if( *VAR_4=='\n' ) (*VAR_3)++; }
 }

 if( VAR_1->codePrefix ){
   FUNC_0(VAR_0, "}\n"); (*VAR_3)++;
 }

 return;
}
