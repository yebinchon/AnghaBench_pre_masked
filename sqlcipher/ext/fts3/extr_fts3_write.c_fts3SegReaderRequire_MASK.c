
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* aNode; size_t nNode; int nPopulate; scalar_t__ pBlob; } ;
typedef TYPE_1__ Fts3SegReader ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(Fts3SegReader *VAR_1, char *VAR_2, int VAR_3){
  int VAR_4 = VAR_0;
  FUNC_0( !VAR_1->pBlob
       || (VAR_2>=VAR_1->aNode && VAR_2<&VAR_1->aNode[VAR_1->nNode])
  );
  while( VAR_1->pBlob && VAR_4==VAR_0
     && (VAR_2 - VAR_1->aNode + VAR_3)>VAR_1->nPopulate
  ){
    VAR_4 = FUNC_1(VAR_1);
  }
  return VAR_4;
}
