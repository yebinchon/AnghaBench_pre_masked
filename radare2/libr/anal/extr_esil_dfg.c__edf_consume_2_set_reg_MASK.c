
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {char* current_opstr; scalar_t__ user; } ;
struct TYPE_15__ {int * cur; int flow; int idx; int * old; } ;
struct TYPE_14__ {int type; int content; } ;
typedef int RGraphNode ;
typedef TYPE_1__ RAnalEsilDFGNode ;
typedef TYPE_2__ RAnalEsilDFG ;
typedef TYPE_3__ RAnalEsil ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int * FUNC_0 (TYPE_2__*,char*) ;
 int * FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,int *) ;
 int * FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,char*) ;
 void* FUNC_6 (TYPE_3__*,char*) ;
 char* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int *,int *) ;
 int * FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,char*,char*,...) ;

__attribute__((used)) static bool FUNC_11(RAnalEsil *VAR_7, const bool VAR_8) {
 const char *VAR_9 = VAR_7->current_opstr;
 RAnalEsilDFG *VAR_10 = (RAnalEsilDFG *)VAR_7->user;
 char *VAR_11 = FUNC_7 (VAR_7);
 char *VAR_12 = FUNC_7 (VAR_7);

 if (!VAR_12 || !VAR_11) {
  FUNC_4 (VAR_11);
  FUNC_4 (VAR_12);
  return 0;
 }

 int VAR_13 = FUNC_6 (VAR_7, VAR_11);
 if (VAR_13 == VAR_4) {
  FUNC_4 (VAR_11);
  FUNC_4 (VAR_12);
  return 0;
 }

 const int VAR_14 = FUNC_6 (VAR_7, VAR_12);
 RGraphNode *VAR_15 = ((void*)0);
 if (VAR_14 == VAR_6) {
  VAR_15 = FUNC_1 (VAR_10, VAR_12);
 } else if (VAR_14 == VAR_5) {
  RGraphNode *VAR_16 = FUNC_9 (VAR_10->flow, FUNC_5 (VAR_10, VAR_12));
  RAnalEsilDFGNode *VAR_17 = FUNC_5 (VAR_10, VAR_12);
  VAR_17->type = VAR_0;
  FUNC_10 (VAR_17->content, ":const_%d", VAR_10->idx++);
  VAR_15 = FUNC_9 (VAR_10->flow, VAR_17);
  FUNC_8 (VAR_10->flow, VAR_16, VAR_15);
 } else {
  VAR_15 = FUNC_3 (VAR_10, VAR_12);
 }

 RGraphNode *VAR_18 = VAR_8 ? FUNC_0 (VAR_10, VAR_11) : FUNC_1 (VAR_10, VAR_11);
 RGraphNode *VAR_19 = VAR_18;

 if (!VAR_15 || !VAR_18) {
  FUNC_4 (VAR_12);
  FUNC_4 (VAR_11);
  return 0;
 }

 RAnalEsilDFGNode *VAR_20 = FUNC_5 (VAR_10, VAR_12);
 FUNC_10 (VAR_20->content, ",%s,%s", VAR_11, VAR_9);
 VAR_20->type = VAR_1;
 FUNC_4 (VAR_12);

 RGraphNode *VAR_21 = FUNC_9 (VAR_10->flow, VAR_20);
 FUNC_8 (VAR_10->flow, VAR_18, VAR_21);
 FUNC_8 (VAR_10->flow, VAR_15, VAR_21);
 VAR_10->old = VAR_19;
 RAnalEsilDFGNode *VAR_22 = FUNC_5 (VAR_10, VAR_11);
 VAR_22->type = VAR_2 | VAR_3;

 FUNC_10 (VAR_22->content, ":var_%d", VAR_10->idx++);
 VAR_18 = FUNC_9 (VAR_10->flow, VAR_22);
 FUNC_8 (VAR_10->flow, VAR_21, VAR_18);
 FUNC_2 (VAR_10, VAR_11, VAR_18);
 VAR_10->cur = VAR_18;
 FUNC_4 (VAR_11);
 return 1;
}
