
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ user; } ;
struct TYPE_23__ {int flow; int idx; TYPE_1__* old; TYPE_1__* cur; } ;
struct TYPE_22__ {int content; int type; } ;
struct TYPE_21__ {scalar_t__ data; } ;
typedef TYPE_1__ RGraphNode ;
typedef TYPE_2__ RAnalEsilDFGNode ;
typedef TYPE_3__ RAnalEsilDFG ;
typedef TYPE_4__ RAnalEsil ;
typedef int (* AddConstraintStringConsume1UseOldNewCB ) (int ,int ,int ,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 TYPE_1__* FUNC_0 (TYPE_3__*,char*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 char* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ,char*,char const*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static bool FUNC_12(RAnalEsil *VAR_5, const char *VAR_6, AddConstraintStringConsume1UseOldNewCB VAR_7) {
 RAnalEsilDFG *VAR_8 = (RAnalEsilDFG *)VAR_5->user;
 char *VAR_9 = FUNC_6 (VAR_5);

 if (!VAR_9) {
  return 0;
 }
 RAnalEsilDFGNode *VAR_10 = FUNC_4 (VAR_8, VAR_9);



 FUNC_10 (VAR_10->content, ",%s", VAR_6);
 RGraphNode *VAR_11 = FUNC_9 (VAR_8->flow, VAR_10);
 const int VAR_12 = FUNC_5 (VAR_5, VAR_9);
 RGraphNode *VAR_13 = ((void*)0);
 if (VAR_12 == VAR_4) {
  VAR_13 = FUNC_0 (VAR_8, VAR_9);
 } else if (VAR_12 == VAR_3) {
  RGraphNode *VAR_14 = FUNC_9 (VAR_8->flow, FUNC_4 (VAR_8, VAR_9));
  RAnalEsilDFGNode *VAR_15 = FUNC_4 (VAR_8, VAR_9);
  VAR_15->type = VAR_0;
  FUNC_10 (VAR_15->content, ":const_%d", VAR_8->idx++);
  VAR_13 = FUNC_9 (VAR_8->flow, VAR_15);
  FUNC_8 (VAR_8->flow, VAR_14, VAR_13);
 } else {
  VAR_13 = FUNC_1 (VAR_8, VAR_9);
 }
 FUNC_3 (VAR_9);

 FUNC_8 (VAR_8->flow, VAR_13, VAR_11);

 RGraphNode *VAR_16 = VAR_8->cur;
 RGraphNode *VAR_17 = VAR_8->old;
 RAnalEsilDFGNode *VAR_18 = FUNC_4 (VAR_8, "result_");
 VAR_18->type = VAR_2;
 FUNC_10 (VAR_18->content, "%d", VAR_8->idx++);
 if (VAR_7) {
  RAnalEsilDFGNode *VAR_19 = (RAnalEsilDFGNode *)VAR_13->data;
  RAnalEsilDFGNode *VAR_20 = (RAnalEsilDFGNode *)VAR_16->data;
  RAnalEsilDFGNode *VAR_21 = (RAnalEsilDFGNode *)VAR_17->data;
  VAR_7 (VAR_18->content, FUNC_11 (VAR_19->content),
   FUNC_11 (VAR_20->content), FUNC_11 (VAR_21->content));
 }
 RGraphNode *VAR_22 = FUNC_9 (VAR_8->flow, VAR_18);
 FUNC_2 (VAR_8, FUNC_11 (VAR_18->content), VAR_22);
 FUNC_8 (VAR_8->flow, VAR_16, VAR_11);
 FUNC_8 (VAR_8->flow, VAR_17, VAR_11);
 FUNC_8 (VAR_8->flow, VAR_11, VAR_22);
 return FUNC_7 (VAR_5, FUNC_11 (VAR_18->content));
}
