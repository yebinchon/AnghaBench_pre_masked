
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_14__ {scalar_t__ n; scalar_t__ nAlloc; int a; int member_2; int member_1; int member_0; } ;
struct TYPE_12__ {int n; int a; } ;
struct TYPE_13__ {int iChild; int nDoclist; int aDoclist; TYPE_1__ term; scalar_t__ aNode; } ;
typedef TYPE_2__ NodeReader ;
typedef TYPE_3__ Blob ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (int ,int ,char const*,int) ;
 int FUNC_5 (TYPE_2__*,char const*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(
  const char *VAR_1,
  int VAR_2,
  Blob *VAR_3,
  const char *VAR_4,
  int VAR_5,
  sqlite3_int64 *VAR_6
){
  NodeReader VAR_7;
  Blob VAR_8 = {0, 0, 0};
  int VAR_9 = VAR_0;
  int VAR_10 = VAR_1[0]=='\0';


  FUNC_1(VAR_3, VAR_2, &VAR_9);
  if( VAR_9!=VAR_0 ) return VAR_9;
  VAR_3->n = 0;


  for(VAR_9 = FUNC_5(&VAR_7, VAR_1, VAR_2);
      VAR_9==VAR_0 && VAR_7.aNode;
      VAR_9 = FUNC_6(&VAR_7)
  ){
    if( VAR_3->n==0 ){
      int VAR_11 = FUNC_4(VAR_7.term.a, VAR_7.term.n, VAR_4, VAR_5);
      if( VAR_11<0 || (VAR_10==0 && VAR_11==0) ) continue;
      FUNC_3(VAR_3, (int)VAR_1[0], VAR_7.iChild);
      *VAR_6 = VAR_7.iChild;
    }
    VAR_9 = FUNC_2(
        VAR_3, &VAR_8, VAR_7.term.a, VAR_7.term.n,
        VAR_7.aDoclist, VAR_7.nDoclist
    );
    if( VAR_9!=VAR_0 ) break;
  }
  if( VAR_3->n==0 ){
    FUNC_3(VAR_3, (int)VAR_1[0], VAR_7.iChild);
    *VAR_6 = VAR_7.iChild;
  }
  FUNC_0( VAR_3->n<=VAR_3->nAlloc );

  FUNC_7(&VAR_7);
  FUNC_8(VAR_8.a);
  return VAR_9;
}
