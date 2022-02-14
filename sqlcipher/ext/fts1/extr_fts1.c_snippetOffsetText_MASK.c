
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zBuf ;
struct snippetMatch {int nByte; int iStart; int iTerm; int iCol; } ;
struct TYPE_7__ {int nMatch; int nOffset; int zOffset; struct snippetMatch* aMatch; } ;
struct TYPE_6__ {int len; int s; } ;
typedef TYPE_1__ StringBuffer ;
typedef TYPE_2__ Snippet ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(Snippet *VAR_0){
  int VAR_1;
  int VAR_2 = 0;
  StringBuffer VAR_3;
  char VAR_4[200];
  if( VAR_0->zOffset ) return;
  FUNC_1(&VAR_3);
  for(VAR_1=0; VAR_1<VAR_0->nMatch; VAR_1++){
    struct snippetMatch *VAR_5 = &VAR_0->aMatch[VAR_1];
    VAR_4[0] = ' ';
    FUNC_2(sizeof(VAR_4)-1, &VAR_4[VAR_2>0], "%d %d %d %d",
        VAR_5->iCol, VAR_5->iTerm, VAR_5->iStart, VAR_5->nByte);
    FUNC_0(&VAR_3, VAR_4);
    VAR_2++;
  }
  VAR_0->zOffset = VAR_3.s;
  VAR_0->nOffset = VAR_3.len;
}
