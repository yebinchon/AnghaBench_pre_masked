
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int ps; } ;
struct TYPE_14__ {scalar_t__ tag; TYPE_2__ u; } ;
struct TYPE_11__ {int ps; } ;
struct TYPE_13__ {scalar_t__ tag; TYPE_1__ u; } ;
typedef TYPE_3__ TTree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4 (TTree *VAR_2) {
  TTree *VAR_3 = FUNC_2(VAR_2);
  FUNC_0(VAR_2->tag == VAR_0 || VAR_2->tag == VAR_1);
  while (VAR_3->tag == VAR_2->tag) {
    int VAR_4 = VAR_2->u.ps - 1;
    int VAR_5 = VAR_3->u.ps - 1;
    int VAR_6 = VAR_4 - VAR_5 - 1;
    FUNC_1(FUNC_2(VAR_2), FUNC_2(VAR_3), VAR_5 * sizeof(TTree));
    VAR_2->u.ps = VAR_5 + 1;
    FUNC_3(VAR_2)->tag = VAR_2->tag;
    FUNC_3(VAR_2)->u.ps = VAR_6 + 1;
  }
}
