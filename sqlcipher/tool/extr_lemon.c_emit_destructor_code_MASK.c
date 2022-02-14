
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; char* destructor; int destLineno; int dtnum; } ;
struct lemon {char* tokendest; char* vardest; int outname; int nolinenosflag; int filename; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (int *,int,int ) ;

void FUNC_4(
  FILE *VAR_1,
  struct symbol *VAR_2,
  struct lemon *VAR_3,
  int *VAR_4
){
 char *VAR_5 = 0;

 if( VAR_2->type==VAR_0 ){
   VAR_5 = VAR_3->tokendest;
   if( VAR_5==0 ) return;
   FUNC_1(VAR_1,"{\n"); (*VAR_4)++;
 }else if( VAR_2->destructor ){
   VAR_5 = VAR_2->destructor;
   FUNC_1(VAR_1,"{\n"); (*VAR_4)++;
   if( !VAR_3->nolinenosflag ){
     (*VAR_4)++;
     FUNC_3(VAR_1,VAR_2->destLineno,VAR_3->filename);
   }
 }else if( VAR_3->vardest ){
   VAR_5 = VAR_3->vardest;
   if( VAR_5==0 ) return;
   FUNC_1(VAR_1,"{\n"); (*VAR_4)++;
 }else{
   FUNC_0( 0 );
 }
 for(; *VAR_5; VAR_5++){
   if( *VAR_5=='$' && VAR_5[1]=='$' ){
     FUNC_1(VAR_1,"(yypminor->yy%d)",VAR_2->dtnum);
     VAR_5++;
     continue;
   }
   if( *VAR_5=='\n' ) (*VAR_4)++;
   FUNC_2(*VAR_5,VAR_1);
 }
 FUNC_1(VAR_1,"\n"); (*VAR_4)++;
 if (!VAR_3->nolinenosflag) {
   (*VAR_4)++; FUNC_3(VAR_1,*VAR_4,VAR_3->outname);
 }
 FUNC_1(VAR_1,"}\n"); (*VAR_4)++;
 return;
}
