
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_13__ {scalar_t__ off; } ;
struct TYPE_12__ {int rebasing_buffer; TYPE_2__* rebase_info; int cache_buf; } ;
struct TYPE_11__ {int count; TYPE_4__* obj; int * buf; scalar_t__ eob; scalar_t__ off; } ;
struct TYPE_10__ {int n_ranges; int multiplier; TYPE_1__* ranges; } ;
struct TYPE_9__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_3__ RRebaseCtx ;
typedef int ROnRebaseFunc ;
typedef TYPE_4__ RKernelCacheObj ;
typedef int RIODesc ;
typedef TYPE_5__ RIO ;


 int FUNC_0 (int ,int ,scalar_t__,int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(RKernelCacheObj *VAR_1, RIO *VAR_2, RIODesc *VAR_3, ut8 *VAR_4, int VAR_5) {
 if (VAR_1->rebasing_buffer) {
  return;
 }
 VAR_1->rebasing_buffer = 1;

 ut64 VAR_6 = VAR_2->off;
 ut64 VAR_7 = VAR_6 + VAR_5;
 int VAR_8 = 0;
 RRebaseCtx VAR_9;

 VAR_9.off = VAR_6;
 VAR_9.eob = VAR_7;
 VAR_9.buf = VAR_4;
 VAR_9.count = VAR_5;
 VAR_9.obj = VAR_1;

 for (; VAR_8 < VAR_1->rebase_info->n_ranges; VAR_8++) {
  ut64 VAR_10 = VAR_1->rebase_info->ranges[VAR_8].offset;
  ut64 VAR_11 = VAR_10 + VAR_1->rebase_info->ranges[VAR_8].size;
  if (VAR_11 >= VAR_6 && VAR_10 <= VAR_7) {
   FUNC_0 (VAR_1->cache_buf, VAR_1->rebase_info->multiplier, VAR_10,
    (ROnRebaseFunc) VAR_0, &VAR_9);
  }
 }

 VAR_1->rebasing_buffer = 0;
}
