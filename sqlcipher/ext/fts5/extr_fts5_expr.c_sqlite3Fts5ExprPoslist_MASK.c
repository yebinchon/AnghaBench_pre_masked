
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {TYPE_1__* pRoot; TYPE_3__** apExprPhrase; } ;
struct TYPE_10__ {scalar_t__ bEof; scalar_t__ iRowid; } ;
struct TYPE_8__ {int n; int * p; } ;
struct TYPE_9__ {TYPE_2__ poslist; TYPE_4__* pNode; } ;
struct TYPE_7__ {scalar_t__ iRowid; } ;
typedef TYPE_3__ Fts5ExprPhrase ;
typedef TYPE_4__ Fts5ExprNode ;
typedef TYPE_5__ Fts5Expr ;



int FUNC_0(Fts5Expr *VAR_0, int VAR_1, const u8 **VAR_2){
  int VAR_3;
  Fts5ExprPhrase *VAR_4 = VAR_0->apExprPhrase[VAR_1];
  Fts5ExprNode *VAR_5 = VAR_4->pNode;
  if( VAR_5->bEof==0 && VAR_5->iRowid==VAR_0->pRoot->iRowid ){
    *VAR_2 = VAR_4->poslist.p;
    VAR_3 = VAR_4->poslist.n;
  }else{
    *VAR_2 = 0;
    VAR_3 = 0;
  }
  return VAR_3;
}
