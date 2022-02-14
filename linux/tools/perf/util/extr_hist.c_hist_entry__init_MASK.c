
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct res_sample {int dummy; } ;
struct TYPE_23__ {int map; } ;
struct TYPE_17__ {int node; } ;
struct TYPE_19__ {int map; } ;
struct TYPE_18__ {int map; } ;
struct TYPE_24__ {TYPE_3__ to; TYPE_2__ from; } ;
struct hist_entry {size_t callchain_size; int leaf; TYPE_8__* stat_acc; TYPE_7__ ms; TYPE_6__* mem_info; TYPE_8__* branch_info; TYPE_8__* raw_data; TYPE_8__* srcline; void* hroot_out; void* hroot_in; int thread; TYPE_1__ pairs; int res_samples; int raw_size; int callchain; TYPE_8__ stat; } ;
struct TYPE_25__ {int report_hierarchy; scalar_t__ res_sample; scalar_t__ use_callchain; scalar_t__ cumulate_callchain; } ;
struct TYPE_21__ {int map; } ;
struct TYPE_20__ {int map; } ;
struct TYPE_22__ {TYPE_5__ daddr; TYPE_4__ iaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hist_entry*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_8__*,TYPE_8__*,int) ;
 TYPE_8__* FUNC_9 (TYPE_8__*,int ) ;
 int FUNC_10 (TYPE_8__*,int ,int) ;
 TYPE_8__* FUNC_11 (TYPE_8__*) ;
 TYPE_9__ VAR_2 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_8__**) ;

__attribute__((used)) static int FUNC_14(struct hist_entry *VAR_3,
       struct hist_entry *VAR_4,
       bool VAR_5,
       size_t VAR_6)
{
 *VAR_3 = *VAR_4;
 VAR_3->callchain_size = VAR_6;

 if (VAR_2.cumulate_callchain) {
  VAR_3->stat_acc = FUNC_4(sizeof(VAR_3->stat));
  if (VAR_3->stat_acc == ((void*)0))
   return -VAR_0;
  FUNC_8(VAR_3->stat_acc, &VAR_3->stat, sizeof(VAR_3->stat));
  if (!VAR_5)
   FUNC_10(&VAR_3->stat, 0, sizeof(VAR_3->stat));
 }

 FUNC_5(VAR_3->ms.map);

 if (VAR_3->branch_info) {





  VAR_3->branch_info = FUNC_4(sizeof(*VAR_3->branch_info));
  if (VAR_3->branch_info == ((void*)0))
   goto err;

  FUNC_8(VAR_3->branch_info, VAR_4->branch_info,
         sizeof(*VAR_3->branch_info));

  FUNC_5(VAR_3->branch_info->from.map);
  FUNC_5(VAR_3->branch_info->to.map);
 }

 if (VAR_3->mem_info) {
  FUNC_5(VAR_3->mem_info->iaddr.map);
  FUNC_5(VAR_3->mem_info->daddr.map);
 }

 if (FUNC_3(VAR_3) && VAR_2.use_callchain)
  FUNC_1(VAR_3->callchain);

 if (VAR_3->raw_data) {
  VAR_3->raw_data = FUNC_9(VAR_3->raw_data, VAR_3->raw_size);
  if (VAR_3->raw_data == ((void*)0))
   goto err_infos;
 }

 if (VAR_3->srcline) {
  VAR_3->srcline = FUNC_11(VAR_3->srcline);
  if (VAR_3->srcline == ((void*)0))
   goto err_rawdata;
 }

 if (VAR_2.res_sample) {
  VAR_3->res_samples = FUNC_2(sizeof(struct res_sample),
     VAR_2.res_sample);
  if (!VAR_3->res_samples)
   goto err_srcline;
 }

 FUNC_0(&VAR_3->pairs.node);
 FUNC_12(VAR_3->thread);
 VAR_3->hroot_in = VAR_1;
 VAR_3->hroot_out = VAR_1;

 if (!VAR_2.report_hierarchy)
  VAR_3->leaf = 1;

 return 0;

err_srcline:
 FUNC_13(&VAR_3->srcline);

err_rawdata:
 FUNC_13(&VAR_3->raw_data);

err_infos:
 if (VAR_3->branch_info) {
  FUNC_6(VAR_3->branch_info->from.map);
  FUNC_6(VAR_3->branch_info->to.map);
  FUNC_13(&VAR_3->branch_info);
 }
 if (VAR_3->mem_info) {
  FUNC_6(VAR_3->mem_info->iaddr.map);
  FUNC_6(VAR_3->mem_info->daddr.map);
 }
err:
 FUNC_7(VAR_3->ms.map);
 FUNC_13(&VAR_3->stat_acc);
 return -VAR_0;
}
