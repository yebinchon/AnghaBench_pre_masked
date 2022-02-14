
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int red; struct TYPE_6__** child; } ;
typedef int (* RBNodeSum ) (TYPE_1__*) ;
typedef TYPE_1__ RBNode ;



__attribute__((used)) static inline RBNode *FUNC_0(RBNode *VAR_0, int VAR_1, RBNodeSum VAR_2) {
 RBNode *VAR_3 = VAR_0->child[VAR_1], *VAR_4 = VAR_3->child[!VAR_1];
 VAR_3->child[!VAR_1] = VAR_4->child[VAR_1];
 VAR_4->child[VAR_1] = VAR_3;
 VAR_0->child[VAR_1] = VAR_4->child[!VAR_1];
 VAR_4->child[!VAR_1] = VAR_0;
 VAR_0->red = VAR_3->red = 1;
 VAR_4->red = 0;
 if (VAR_2) {
  VAR_2 (VAR_0);
  VAR_2 (VAR_3);
 }
 return VAR_4;
}
