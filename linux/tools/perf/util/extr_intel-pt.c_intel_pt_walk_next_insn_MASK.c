
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct intel_pt_queue {TYPE_4__* pt; struct thread* thread; } ;
struct intel_pt_insn {scalar_t__ length; scalar_t__ branch; int buf; int rel; int op; } ;
struct intel_pt_cache_entry {scalar_t__ insn_cnt; scalar_t__ byte_cnt; scalar_t__ branch; scalar_t__ length; int insn; int rel; int op; } ;
struct addr_location {TYPE_2__* map; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_12__ {int is_64_bit; TYPE_1__ data; } ;
struct TYPE_11__ {struct thread* unknown_thread; struct machine* machine; } ;
struct TYPE_10__ {scalar_t__ (* map_ip ) (TYPE_2__*,scalar_t__) ;scalar_t__ end; TYPE_5__* dso; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_5__*,struct machine*,scalar_t__,unsigned char*,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,struct machine*,scalar_t__,scalar_t__,scalar_t__,struct intel_pt_insn*) ;
 struct intel_pt_cache_entry* FUNC_3 (TYPE_5__*,struct machine*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_5 (unsigned char*,scalar_t__,int,struct intel_pt_insn*) ;
 int FUNC_6 (struct intel_pt_insn*,scalar_t__) ;
 int FUNC_7 (struct intel_pt_insn*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (struct thread*,scalar_t__,scalar_t__,struct addr_location*) ;

__attribute__((used)) static int FUNC_12(struct intel_pt_insn *VAR_7,
       uint64_t *VAR_8, uint64_t *VAR_9,
       uint64_t VAR_10, uint64_t VAR_11,
       void *VAR_12)
{
 struct intel_pt_queue *VAR_13 = VAR_12;
 struct machine *VAR_14 = VAR_13->pt->machine;
 struct thread *VAR_15;
 struct addr_location VAR_16;
 unsigned char VAR_17[VAR_5];
 ssize_t VAR_18;
 int VAR_19;
 u8 VAR_20;
 u64 VAR_21, VAR_22, VAR_23;
 u64 VAR_24 = 0;
 bool VAR_25 = 1;

 VAR_7->length = 0;

 if (VAR_10 && *VAR_9 == VAR_10)
  goto out_no_cache;

 VAR_20 = FUNC_4(VAR_13->pt, *VAR_9);

 VAR_15 = VAR_13->thread;
 if (!VAR_15) {
  if (VAR_20 != VAR_6)
   return -VAR_2;
  VAR_15 = VAR_13->pt->unknown_thread;
 }

 while (1) {
  if (!FUNC_11(VAR_15, VAR_20, *VAR_9, &VAR_16) || !VAR_16.map->dso)
   return -VAR_2;

  if (VAR_16.map->dso->data.status == VAR_0 &&
      FUNC_1(VAR_16.map->dso,
       VAR_1))
   return -VAR_3;

  VAR_21 = VAR_16.map->map_ip(VAR_16.map, *VAR_9);

  if (!VAR_10 && VAR_25) {
   struct intel_pt_cache_entry *VAR_26;

   VAR_26 = FUNC_3(VAR_16.map->dso, VAR_14, VAR_21);
   if (VAR_26 &&
       (!VAR_11 || VAR_26->insn_cnt <= VAR_11)) {
    *VAR_8 = VAR_26->insn_cnt;
    *VAR_9 += VAR_26->byte_cnt;
    VAR_7->op = VAR_26->op;
    VAR_7->branch = VAR_26->branch;
    VAR_7->length = VAR_26->length;
    VAR_7->rel = VAR_26->rel;
    FUNC_9(VAR_7->buf, VAR_26->insn,
           VAR_5);
    FUNC_7(VAR_7, *VAR_9);
    return 0;
   }
  }

  VAR_22 = VAR_21;
  VAR_23 = *VAR_9;


  FUNC_8(VAR_16.map);

  VAR_19 = VAR_16.map->dso->is_64_bit;

  while (1) {
   VAR_18 = FUNC_0(VAR_16.map->dso, VAR_14,
          VAR_21, VAR_17,
          VAR_5);
   if (VAR_18 <= 0)
    return -VAR_2;

   if (FUNC_5(VAR_17, VAR_18, VAR_19, VAR_7))
    return -VAR_2;

   FUNC_6(VAR_7, *VAR_9);

   VAR_24 += 1;

   if (VAR_7->branch != VAR_4)
    goto out;

   if (VAR_11 && VAR_24 >= VAR_11)
    goto out_no_cache;

   *VAR_9 += VAR_7->length;

   if (VAR_10 && *VAR_9 == VAR_10)
    goto out_no_cache;

   if (*VAR_9 >= VAR_16.map->end)
    break;

   VAR_21 += VAR_7->length;
  }
  VAR_25 = 0;
 }
out:
 *VAR_8 = VAR_24;

 if (!VAR_25)
  goto out_no_cache;





 if (VAR_10) {
  struct intel_pt_cache_entry *VAR_27;

  VAR_27 = FUNC_3(VAR_16.map->dso, VAR_14, VAR_22);
  if (VAR_27)
   return 0;
 }


 FUNC_2(VAR_16.map->dso, VAR_14, VAR_22, VAR_24,
      *VAR_9 - VAR_23, VAR_7);

 return 0;

out_no_cache:
 *VAR_8 = VAR_24;
 return 0;
}
