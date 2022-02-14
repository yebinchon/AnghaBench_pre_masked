
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nRef; } ;
typedef TYPE_1__ RtreeNode ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(RtreeNode *VAR_0){
  if( VAR_0 ){
    FUNC_0( VAR_0->nRef>0 );
    VAR_0->nRef++;
  }
}
