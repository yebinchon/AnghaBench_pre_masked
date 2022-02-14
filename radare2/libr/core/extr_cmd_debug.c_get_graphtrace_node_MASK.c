
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct trace_node {int addr; } ;
typedef int Sdb ;
typedef int RGraphNode ;
typedef int RGraph ;


 char* VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,struct trace_node*) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ) ;

__attribute__((used)) static RGraphNode *FUNC_4 (RGraph *VAR_2, Sdb *VAR_3, struct trace_node *VAR_4) {
 RGraphNode *VAR_5;
 char VAR_6[VAR_1];

 FUNC_3 (VAR_6, VAR_1, VAR_0, VAR_4->addr);
 VAR_5 = (RGraphNode *)(size_t)FUNC_1 (VAR_3, VAR_6, ((void*)0));
 if (!VAR_5) {
  VAR_5 = FUNC_0 (VAR_2, VAR_4);
  FUNC_2 (VAR_3, VAR_6, (ut64)(size_t)VAR_5, 0);
 }
 return VAR_5;
}
