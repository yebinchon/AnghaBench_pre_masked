
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u64 ;
struct TYPE_30__ {int regs; scalar_t__ abi; int mask; } ;
struct TYPE_29__ {size_t size; int data; } ;
struct TYPE_28__ {int regs; scalar_t__ abi; int mask; } ;
struct TYPE_22__ {size_t nr; } ;
struct TYPE_23__ {TYPE_1__ group; } ;
struct perf_sample {size_t raw_size; TYPE_9__ intr_regs; TYPE_8__ user_stack; TYPE_7__ user_regs; TYPE_6__* branch_stack; int raw_data; TYPE_5__* callchain; TYPE_2__ read; } ;
struct TYPE_27__ {size_t nr; } ;
struct TYPE_26__ {size_t nr; } ;
struct TYPE_25__ {int id; int value; } ;
struct TYPE_24__ {int * values; int nr; } ;
struct TYPE_21__ {int * entries; int nr; } ;
struct TYPE_20__ {int * ips; int nr; } ;
struct TYPE_19__ {int abi; int mask; } ;
struct TYPE_18__ {TYPE_4__ one; TYPE_3__ group; int time_running; int time_enabled; } ;
struct TYPE_17__ {int abi; int mask; } ;
struct TYPE_16__ {int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_15__* VAR_24 ;
 TYPE_14__* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ) ;
 int VAR_28 ;
 TYPE_13__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_3 (int ,int ,size_t) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_4 (char*) ;
 int VAR_34 ;
 TYPE_12__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 TYPE_11__ VAR_40 ;
 TYPE_10__ VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static bool FUNC_5(const struct perf_sample *VAR_43,
    const struct perf_sample *VAR_44,
    u64 VAR_45, u64 VAR_46)
{
 size_t VAR_47;

 if (VAR_45 & VAR_9)
  FUNC_0(VAR_28);

 if (VAR_45 & VAR_10)
  FUNC_0(VAR_30);

 if (VAR_45 & VAR_19) {
  FUNC_0(VAR_33);
  FUNC_0(VAR_37);
 }

 if (VAR_45 & VAR_20)
  FUNC_0(VAR_38);

 if (VAR_45 & VAR_3)
  FUNC_0(VAR_23);

 if (VAR_45 & VAR_8)
  FUNC_0(VAR_28);

 if (VAR_45 & VAR_18)
  FUNC_0(VAR_36);

 if (VAR_45 & VAR_6)
  FUNC_0(VAR_26);

 if (VAR_45 & VAR_11)
  FUNC_0(VAR_31);

 if (VAR_45 & VAR_14) {
  if (VAR_46 & VAR_0)
   FUNC_0(VAR_35.group.nr);
  else
   FUNC_0(VAR_35.one.value);
  if (VAR_46 & VAR_1)
   FUNC_0(VAR_35.time_enabled);
  if (VAR_46 & VAR_2)
   FUNC_0(VAR_35.time_running);

  if (VAR_46 & VAR_0) {
   for (VAR_47 = 0; VAR_47 < VAR_43->read.group.nr; VAR_47++)
    FUNC_1(VAR_35.group.values[VAR_47]);
  } else {
   FUNC_0(VAR_35.one.id);
  }
 }

 if (VAR_45 & VAR_5) {
  FUNC_0(VAR_25->nr);
  for (VAR_47 = 0; VAR_47 < VAR_43->callchain->nr; VAR_47++)
   FUNC_0(VAR_25->ips[VAR_47]);
 }

 if (VAR_45 & VAR_13) {
  FUNC_0(VAR_34);
  if (FUNC_3(VAR_43->raw_data, VAR_44->raw_data, VAR_43->raw_size)) {
   FUNC_4("Samples differ at 'raw_data'\n");
   return 0;
  }
 }

 if (VAR_45 & VAR_4) {
  FUNC_0(VAR_24->nr);
  for (VAR_47 = 0; VAR_47 < VAR_43->branch_stack->nr; VAR_47++)
   FUNC_1(VAR_24->entries[VAR_47]);
 }

 if (VAR_45 & VAR_16) {
  size_t VAR_48 = FUNC_2(VAR_43->user_regs.mask) * sizeof(u64);

  FUNC_0(VAR_40.mask);
  FUNC_0(VAR_40.abi);
  if (VAR_43->user_regs.abi &&
      (!VAR_43->user_regs.regs || !VAR_44->user_regs.regs ||
       FUNC_3(VAR_43->user_regs.regs, VAR_44->user_regs.regs, VAR_48))) {
   FUNC_4("Samples differ at 'user_regs'\n");
   return 0;
  }
 }

 if (VAR_45 & VAR_17) {
  FUNC_0(VAR_41.size);
  if (FUNC_3(VAR_43->user_stack.data, VAR_44->user_stack.data,
      VAR_43->user_stack.size)) {
   FUNC_4("Samples differ at 'user_stack'\n");
   return 0;
  }
 }

 if (VAR_45 & VAR_22)
  FUNC_0(VAR_42);

 if (VAR_45 & VAR_7)
  FUNC_0(VAR_27);

 if (VAR_45 & VAR_21)
  FUNC_0(VAR_39);

 if (VAR_45 & VAR_15) {
  size_t VAR_49 = FUNC_2(VAR_43->intr_regs.mask) * sizeof(u64);

  FUNC_0(VAR_29.mask);
  FUNC_0(VAR_29.abi);
  if (VAR_43->intr_regs.abi &&
      (!VAR_43->intr_regs.regs || !VAR_44->intr_regs.regs ||
       FUNC_3(VAR_43->intr_regs.regs, VAR_44->intr_regs.regs, VAR_49))) {
   FUNC_4("Samples differ at 'intr_regs'\n");
   return 0;
  }
 }

 if (VAR_45 & VAR_12)
  FUNC_0(VAR_32);

 return 1;
}
