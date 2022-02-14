
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nData; scalar_t__ pData; } ;
typedef TYPE_1__ DataBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,char const*,int) ;

__attribute__((used)) static void FUNC_3(DataBuffer *VAR_0,
                             const char *VAR_1, int VAR_2){
  FUNC_0( VAR_2>0 && VAR_1!=((void*)0) );
  FUNC_1(VAR_0, VAR_2);
  FUNC_2(VAR_0->pData+VAR_0->nData, VAR_1, VAR_2);
  VAR_0->nData += VAR_2;
}
