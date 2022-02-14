
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_13__ {int atoms; TYPE_3__* cfg; } ;
struct TYPE_9__ {scalar_t__ idx; } ;
struct TYPE_8__ {scalar_t__ idx; } ;
struct TYPE_12__ {TYPE_2__ last; TYPE_1__ first; } ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {int g; } ;
typedef TYPE_4__ RGraphNode ;
typedef TYPE_5__ RAnalEsilBB ;
typedef TYPE_6__ EsilCfgGen ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1, void *VAR_2) {
 EsilCfgGen *VAR_3 = (EsilCfgGen *)VAR_2;
 RGraphNode *VAR_4 = (RGraphNode *)VAR_1;
 RAnalEsilBB *VAR_5 = (RAnalEsilBB *)VAR_4->data;
 FUNC_0 (VAR_3->cfg->g, VAR_4);
 ut32 VAR_6;
 for (VAR_6 = VAR_5->first.idx; VAR_6 <= VAR_5->last.idx; VAR_6++) {
  FUNC_1 (VAR_3->atoms, VAR_6);
 }
 return 0;
}
