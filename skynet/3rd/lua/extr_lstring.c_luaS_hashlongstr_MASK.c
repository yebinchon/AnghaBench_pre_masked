
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lnglen; } ;
struct TYPE_6__ {scalar_t__ tt; int extra; unsigned int hash; TYPE_1__ u; } ;
typedef TYPE_2__ TString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int) ;

unsigned int FUNC_3 (TString *VAR_1) {
  FUNC_2(VAR_1->tt == VAR_0);
  if (VAR_1->extra == 0) {
    VAR_1->hash = FUNC_1(FUNC_0(VAR_1), VAR_1->u.lnglen, VAR_1->hash);
    VAR_1->extra = 1;
  }
  return VAR_1->hash;
}
