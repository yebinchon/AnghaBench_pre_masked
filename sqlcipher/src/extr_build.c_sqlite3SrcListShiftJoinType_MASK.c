
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nSrc; TYPE_2__* a; } ;
struct TYPE_5__ {int jointype; } ;
struct TYPE_6__ {TYPE_1__ fg; } ;
typedef TYPE_3__ SrcList ;



void FUNC_0(SrcList *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=VAR_0->nSrc-1; VAR_1>0; VAR_1--){
      VAR_0->a[VAR_1].fg.jointype = VAR_0->a[VAR_1-1].fg.jointype;
    }
    VAR_0->a[0].fg.jointype = 0;
  }
}
