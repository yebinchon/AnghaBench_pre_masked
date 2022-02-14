
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_15__ {int blocks; int atoms; } ;
struct TYPE_11__ {scalar_t__ idx; } ;
struct TYPE_10__ {scalar_t__ idx; } ;
struct TYPE_14__ {int expr; TYPE_2__ last; TYPE_1__ first; } ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef int RStrBuf ;
typedef TYPE_3__ RGraphVisitor ;
typedef TYPE_4__ RGraphNode ;
typedef TYPE_5__ RAnalEsilBB ;
typedef TYPE_6__ EsilCfgGen ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_4__*,int ,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

void FUNC_9 (RGraphNode *VAR_1, RGraphVisitor *VAR_2) {
 RAnalEsilBB *VAR_3 = (RAnalEsilBB *)VAR_1->data;
 EsilCfgGen *VAR_4 = (EsilCfgGen *)VAR_2->data;
 RStrBuf *VAR_5 = FUNC_7 ((char *)FUNC_0 (VAR_4->atoms, VAR_3->first.idx));
 FUNC_3 (VAR_5, ",");
 ut32 VAR_6;
 for (VAR_6 = VAR_3->first.idx + 1; VAR_6 <= VAR_3->last.idx; VAR_6++) {

  FUNC_4 (VAR_5, "%s,", (char *)FUNC_1 (VAR_4->atoms, VAR_6));
 }
 VAR_3->expr = FUNC_8 (FUNC_6 (VAR_5));
 FUNC_5 (VAR_5);
 FUNC_2 (VAR_4->blocks, VAR_1, VAR_0, ((void*)0));
}
