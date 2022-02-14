
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ps; } ;
struct TYPE_11__ {TYPE_1__ u; int tag; } ;
typedef TYPE_2__ TTree ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static TTree *FUNC_3 (TTree *VAR_1, TTree *VAR_2, int VAR_3) {
  VAR_1->tag = VAR_0; VAR_1->u.ps = VAR_3 + 1;
  FUNC_0(FUNC_1(VAR_1), VAR_2, VAR_3 * sizeof(TTree));
  return FUNC_2(VAR_1);
}
