
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int iCsrId; int iSpecial; int ePlan; } ;
struct TYPE_7__ {int zErrMsg; } ;
struct TYPE_8__ {TYPE_1__ base; int pIndex; } ;
struct TYPE_9__ {TYPE_2__ p; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(
  Fts5FullTable *VAR_3,
  Fts5Cursor *VAR_4,
  const char *VAR_5
){
  int VAR_6 = VAR_2;
  const char *VAR_7 = VAR_5;
  int VAR_8;

  while( VAR_7[0]==' ' ) VAR_7++;
  for(VAR_8=0; VAR_7[VAR_8] && VAR_7[VAR_8]!=' '; VAR_8++);

  FUNC_0( VAR_3->p.base.zErrMsg==0 );
  VAR_4->ePlan = VAR_0;

  if( 0==FUNC_3("reads", VAR_7, VAR_8) ){
    VAR_4->iSpecial = FUNC_1(VAR_3->p.pIndex);
  }
  else if( 0==FUNC_3("id", VAR_7, VAR_8) ){
    VAR_4->iSpecial = VAR_4->iCsrId;
  }
  else{

    VAR_3->p.base.zErrMsg = FUNC_2("unknown special query: %.*s", VAR_8, VAR_7);
    VAR_6 = VAR_1;
  }

  return VAR_6;
}
