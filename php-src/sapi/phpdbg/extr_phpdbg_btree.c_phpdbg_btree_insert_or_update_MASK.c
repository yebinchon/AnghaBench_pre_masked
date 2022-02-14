
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_6__ {int idx; void* ptr; } ;
struct TYPE_7__ {TYPE_1__ result; struct TYPE_7__** branches; } ;
typedef TYPE_2__ phpdbg_btree_branch ;
struct TYPE_8__ {int depth; int count; int persistent; TYPE_2__* branch; } ;
typedef TYPE_3__ phpdbg_btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int ) ;

int FUNC_1(phpdbg_btree *VAR_4, zend_ulong VAR_5, void *VAR_6, int VAR_7) {
 int VAR_8 = VAR_4->depth - 1;
 phpdbg_btree_branch **VAR_9 = &VAR_4->branch;

 do {
  if (*VAR_9 == ((void*)0)) {
   break;
  }
  VAR_9 = &(*VAR_9)->branches[(VAR_5 >> VAR_8) % 2];
 } while (VAR_8--);

 if (*VAR_9 == ((void*)0)) {
  if (!(VAR_7 & VAR_1)) {
   return VAR_0;
  }

  {
   phpdbg_btree_branch *VAR_10 = *VAR_9 = FUNC_0((VAR_8 + 2) * sizeof(phpdbg_btree_branch), VAR_4->persistent);
   do {
    (*VAR_9)->branches[!((VAR_5 >> VAR_8) % 2)] = ((void*)0);
    VAR_9 = &(*VAR_9)->branches[(VAR_5 >> VAR_8) % 2];
    *VAR_9 = ++VAR_10;
   } while (VAR_8--);
   VAR_4->count++;
  }
 } else if (!(VAR_7 & VAR_2)) {
  return VAR_0;
 }

 (*VAR_9)->result.idx = VAR_5;
 (*VAR_9)->result.ptr = VAR_6;

 return VAR_3;
}
