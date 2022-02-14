
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pParent; } ;
typedef TYPE_1__ RtreeNode ;



__attribute__((used)) static int FUNC_0(const RtreeNode *VAR_0, const RtreeNode *VAR_1){
  do{
    if( VAR_0==VAR_1 ) return 1;
    VAR_1 = VAR_1->pParent;
  }while( VAR_1 );
  return 0;
}
