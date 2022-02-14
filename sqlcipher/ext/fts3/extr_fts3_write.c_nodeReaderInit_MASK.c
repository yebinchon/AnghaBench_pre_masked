
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* aNode; int nNode; int iOff; int iChild; } ;
typedef TYPE_1__ NodeReader ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,int *) ;

__attribute__((used)) static int FUNC_3(NodeReader *VAR_0, const char *VAR_1, int VAR_2){
  FUNC_0(VAR_0, 0, sizeof(NodeReader));
  VAR_0->aNode = VAR_1;
  VAR_0->nNode = VAR_2;


  if( VAR_0->aNode[0] ){

    VAR_0->iOff = 1 + FUNC_2(&VAR_0->aNode[1], &VAR_0->iChild);
  }else{
    VAR_0->iOff = 1;
  }

  return FUNC_1(VAR_0);
}
