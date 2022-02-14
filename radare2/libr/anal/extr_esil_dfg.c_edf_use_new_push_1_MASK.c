
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ user; } ;
struct TYPE_17__ {int flow; int idx; TYPE_1__* cur; } ;
struct TYPE_16__ {int content; int type; } ;
struct TYPE_15__ {scalar_t__ data; } ;
typedef TYPE_1__ RGraphNode ;
typedef TYPE_2__ RAnalEsilDFGNode ;
typedef TYPE_3__ RAnalEsilDFG ;
typedef TYPE_4__ RAnalEsil ;
typedef int (* AddConstraintStringUseNewCB ) (int ,int ) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(RAnalEsil *VAR_1, const char *VAR_2, AddConstraintStringUseNewCB VAR_3) {
 RAnalEsilDFG *VAR_4 = (RAnalEsilDFG *)VAR_1->user;
 RGraphNode *VAR_5 = FUNC_4 (VAR_4->flow, FUNC_1 (VAR_4, VAR_2));
 RGraphNode *VAR_6 = VAR_4->cur;
 if (!VAR_6) {
  return 0;
 }
 RAnalEsilDFGNode *VAR_7 = FUNC_1 (VAR_4, "result_");
 VAR_7->type = VAR_0;
 FUNC_5 (VAR_7->content, "%d", VAR_4->idx++);
 if (VAR_3) {
  RAnalEsilDFGNode *VAR_8 = (RAnalEsilDFGNode *)VAR_6->data;
  VAR_3 (VAR_7->content, FUNC_6 (VAR_8->content));
 }
 RGraphNode *VAR_9 = FUNC_4 (VAR_4->flow, VAR_7);
 FUNC_0 (VAR_4, FUNC_6 (VAR_7->content), VAR_9);
 FUNC_3 (VAR_4->flow, VAR_6, VAR_5);
 FUNC_3 (VAR_4->flow, VAR_5, VAR_9);
 return FUNC_2 (VAR_1, FUNC_6 (VAR_7->content));
}
