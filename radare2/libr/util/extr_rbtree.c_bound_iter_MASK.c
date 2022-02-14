
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; TYPE_1__** path; } ;
struct TYPE_7__ {struct TYPE_7__** child; } ;
typedef TYPE_1__ RBNode ;
typedef TYPE_2__ RBIter ;
typedef int (* RBComparator ) (void*,TYPE_1__*,void*) ;



__attribute__((used)) static inline RBIter FUNC_0(RBNode *VAR_0, void *VAR_1, RBComparator VAR_2, bool VAR_3, bool VAR_4, void *VAR_5) {
 RBIter VAR_6;
 VAR_6.len = 0;
 while (VAR_0) {
  int VAR_7 = VAR_2 (VAR_1, VAR_0, VAR_5);
  if (VAR_3 ? VAR_7 < 0 : VAR_7 <= 0) {
   if (!VAR_4) {
    VAR_6.path[VAR_6.len++] = VAR_0;
   }
   VAR_0 = VAR_0->child[0];
  } else {
   if (VAR_4) {
    VAR_6.path[VAR_6.len++] = VAR_0;
   }
   VAR_0 = VAR_0->child[1];
  }
 }
 return VAR_6;
}
