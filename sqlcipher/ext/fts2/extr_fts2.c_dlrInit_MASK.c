
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* pData; int nData; scalar_t__ iDocid; scalar_t__ nElement; int iType; } ;
typedef int DocListType ;
typedef TYPE_1__ DLReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(DLReader *VAR_0, DocListType VAR_1,
                    const char *VAR_2, int VAR_3){
  FUNC_0( VAR_2!=((void*)0) && VAR_3!=0 );
  VAR_0->iType = VAR_1;
  VAR_0->pData = VAR_2;
  VAR_0->nData = VAR_3;
  VAR_0->nElement = 0;
  VAR_0->iDocid = 0;


  FUNC_1(VAR_0);
}
