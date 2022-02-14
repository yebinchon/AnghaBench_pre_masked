
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lemon {char* tokenprefix; int nterminal; TYPE_1__** symbols; } ;
struct TYPE_2__ {int name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (struct lemon*,char*,char*) ;
 int FUNC_4 (int *,char*,char const*,int,int) ;
 int FUNC_5 (char*,char*,char const*,int,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

void FUNC_7(struct lemon *VAR_2)
{
  FILE *VAR_3, *VAR_4;
  const char *VAR_5;
  char VAR_6[VAR_1];
  char VAR_7[VAR_1];
  int VAR_8;

  if( VAR_2->tokenprefix ) VAR_5 = VAR_2->tokenprefix;
  else VAR_5 = "";
  VAR_4 = FUNC_3(VAR_2,".h","rb");
  if( VAR_4 ){
    int VAR_9;
    for(VAR_8=1; VAR_8<VAR_2->nterminal && FUNC_2(VAR_6,VAR_1,VAR_4); VAR_8++){
      FUNC_5(VAR_7,"#define %s%-30s %3d\n",
                    VAR_5,VAR_2->symbols[VAR_8]->name,VAR_8);
      if( FUNC_6(VAR_6,VAR_7) ) break;
    }
    VAR_9 = FUNC_1(VAR_4);
    FUNC_0(VAR_4);
    if( VAR_8==VAR_2->nterminal && VAR_9==VAR_0 ){

      return;
    }
  }
  VAR_3 = FUNC_3(VAR_2,".h","wb");
  if( VAR_3 ){
    for(VAR_8=1; VAR_8<VAR_2->nterminal; VAR_8++){
      FUNC_4(VAR_3,"#define %s%-30s %3d\n",VAR_5,VAR_2->symbols[VAR_8]->name,VAR_8);
    }
    FUNC_0(VAR_3);
  }
  return;
}
