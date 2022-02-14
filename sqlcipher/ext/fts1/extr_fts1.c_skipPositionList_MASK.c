
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iType; } ;
struct TYPE_5__ {TYPE_2__* pDoclist; } ;
typedef TYPE_1__ DocListReader ;
typedef TYPE_2__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_1(DocListReader *VAR_1){
  DocList *VAR_2 = VAR_1->pDoclist;
  if( VAR_2 && VAR_2->iType>=VAR_0 ){
    int VAR_3;
    while( FUNC_0(VAR_1, &VAR_3)!=-1 ){}
  }
}
