
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* gnode; } ;
struct TYPE_5__ {int idx; } ;
typedef TYPE_2__ RANode ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(RANode *VAR_0, RANode *VAR_1, void *VAR_2) {
 FUNC_0 ("  edge [\n"
  "    source  %d\n"
  "    target  %d\n"
  "  ]\n", VAR_0->gnode->idx, VAR_1->gnode->idx
  );
}
