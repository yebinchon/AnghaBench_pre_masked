
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* parent; scalar_t__ depth; } ;
struct TYPE_4__ {scalar_t__ depth; } ;
typedef int RTreeVisitor ;
typedef TYPE_2__ RTreeNode ;



__attribute__((used)) static void FUNC_0 (RTreeNode *VAR_0, RTreeVisitor *VAR_1) {
 VAR_0->depth = VAR_0->parent ? VAR_0->parent->depth + 1 : 0;
}
