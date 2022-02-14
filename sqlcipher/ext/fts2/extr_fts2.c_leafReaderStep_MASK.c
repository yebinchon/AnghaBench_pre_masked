
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nData; } ;
struct TYPE_5__ {int nData; scalar_t__ pData; TYPE_4__ term; } ;
typedef TYPE_1__ LeafReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(LeafReader *VAR_0){
  int VAR_1, VAR_2, VAR_3, VAR_4;
  FUNC_0( !FUNC_3(VAR_0) );


  VAR_1 = FUNC_2(VAR_0->pData, &VAR_2);
  FUNC_0( VAR_1+VAR_2<=VAR_0->nData );
  VAR_0->pData += VAR_1+VAR_2;
  VAR_0->nData -= VAR_1+VAR_2;

  if( !FUNC_3(VAR_0) ){



    VAR_1 = FUNC_2(VAR_0->pData, &VAR_3);
    VAR_1 += FUNC_2(VAR_0->pData+VAR_1, &VAR_4);
    FUNC_0( VAR_1+VAR_4<VAR_0->nData );
    VAR_0->term.nData = VAR_3;
    FUNC_1(&VAR_0->term, VAR_0->pData+VAR_1, VAR_4);

    VAR_0->pData += VAR_1+VAR_4;
    VAR_0->nData -= VAR_1+VAR_4;
  }
}
