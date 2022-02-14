
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* aBuf; int (* xToken ) (int ,int,char*,int,int,int) ;int pCtx; } ;
typedef TYPE_1__ PorterContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char,int ) ;
 int FUNC_2 (char*,int*) ;
 scalar_t__ FUNC_3 (char*,int*) ;
 scalar_t__ FUNC_4 (char*,int*) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (char*,int*) ;
 scalar_t__ FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (char*,int) ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (int ,int,char*,int,int,int) ;
 int FUNC_14 (int ,int,char const*,int,int,int) ;

__attribute__((used)) static int FUNC_15(
  void *VAR_1,
  int VAR_2,
  const char *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6
){
  PorterContext *VAR_7 = (PorterContext*)VAR_1;

  char *VAR_8;
  int VAR_9;

  if( VAR_4>VAR_0 || VAR_4<3 ) goto pass_through;
  VAR_8 = VAR_7->aBuf;
  VAR_9 = VAR_4;
  FUNC_12(VAR_8, VAR_3, VAR_9);


  FUNC_2(VAR_8, &VAR_9);
  if( FUNC_3(VAR_8, &VAR_9) ){
    if( FUNC_4(VAR_8, &VAR_9)==0 ){
      char VAR_10 = VAR_8[VAR_9-1];
      if( FUNC_1(VAR_10, 0)==0
       && VAR_10!='l' && VAR_10!='s' && VAR_10!='z' && VAR_10==VAR_8[VAR_9-2]
      ){
        VAR_9--;
      }else if( FUNC_8(VAR_8, VAR_9) && FUNC_10(VAR_8, VAR_9) ){
        VAR_8[VAR_9++] = 'e';
      }
    }
  }


  if( VAR_8[VAR_9-1]=='y' && FUNC_11(VAR_8, VAR_9-1) ){
    VAR_8[VAR_9-1] = 'i';
  }


  FUNC_5(VAR_8, &VAR_9);
  FUNC_6(VAR_8, &VAR_9);
  FUNC_7(VAR_8, &VAR_9);


  FUNC_0( VAR_9>0 );
  if( VAR_8[VAR_9-1]=='e' ){
    if( FUNC_9(VAR_8, VAR_9-1)
     || (FUNC_8(VAR_8, VAR_9-1) && !FUNC_10(VAR_8, VAR_9-1))
    ){
      VAR_9--;
    }
  }


  if( VAR_9>1 && VAR_8[VAR_9-1]=='l'
   && VAR_8[VAR_9-2]=='l' && FUNC_9(VAR_8, VAR_9-1)
  ){
    VAR_9--;
  }

  return VAR_7->xToken(VAR_7->pCtx, VAR_2, VAR_8, VAR_9, VAR_5, VAR_6);

 pass_through:
  return VAR_7->xToken(VAR_7->pCtx, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
