
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int title; TYPE_1__* gnode; } ;
struct TYPE_4__ {int idx; } ;
typedef TYPE_2__ RANode ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(RANode *VAR_0, void *VAR_1) {
 FUNC_0 ("  node [\n"
  "    id  %d\n"
  "    label  \"%s\"\n"
  "  ]\n", VAR_0->gnode->idx, VAR_0->title);
}
