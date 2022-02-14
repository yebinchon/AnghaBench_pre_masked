
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pAndInfo; } ;
struct TYPE_10__ {scalar_t__ eOperator; TYPE_3__ u; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_7__ {int nTerm; TYPE_4__* a; } ;
struct TYPE_8__ {TYPE_1__ wc; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static WhereTerm *FUNC_0(WhereTerm *VAR_1, int VAR_2){
  if( VAR_1->eOperator!=VAR_0 ){
    return VAR_2==0 ? VAR_1 : 0;
  }
  if( VAR_2<VAR_1->u.pAndInfo->wc.nTerm ){
    return &VAR_1->u.pAndInfo->wc.a[VAR_2];
  }
  return 0;
}
