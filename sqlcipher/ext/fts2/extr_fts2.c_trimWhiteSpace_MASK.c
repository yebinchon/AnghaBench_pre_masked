
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pData; int nData; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
typedef TYPE_2__ StringBuffer ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(StringBuffer *VAR_0){
  while( FUNC_0(VAR_0) ){
    VAR_0->b.pData[--VAR_0->b.nData-1] = '\0';
  }
}
