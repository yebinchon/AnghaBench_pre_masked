
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tgpar ;
struct xt_tgchk_param {char const* table; unsigned int hook_mask; int targinfo; struct xt_target* target; scalar_t__ family; struct ebt_entry* entryinfo; struct xt_tgchk_param* net; } ;
struct xt_target {scalar_t__ family; int me; } ;
struct xt_mtchk_param {char const* table; unsigned int hook_mask; int targinfo; struct xt_target* target; scalar_t__ family; struct ebt_entry* entryinfo; struct xt_mtchk_param* net; } ;
struct net {char const* table; unsigned int hook_mask; int targinfo; struct xt_target* target; scalar_t__ family; struct ebt_entry* entryinfo; struct net* net; } ;
struct ebt_table_info {scalar_t__* hook_entry; } ;
struct ebt_standard_target {int verdict; } ;
struct TYPE_4__ {struct xt_target* target; int name; } ;
struct ebt_entry_target {size_t target_size; int data; TYPE_2__ u; } ;
struct ebt_entry {int bitmask; int invflags; size_t next_offset; size_t target_offset; int ethproto; } ;
struct TYPE_3__ {scalar_t__ chaininfo; } ;
struct ebt_cl_stack {unsigned int hookmask; TYPE_1__ cs; } ;
typedef int mtpar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ebt_entry*,int ,struct xt_tgchk_param*,unsigned int*) ;
 int VAR_4 ;
 int FUNC_1 (struct ebt_entry*,int ,struct xt_tgchk_param*,unsigned int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct xt_target*) ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct xt_target*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ebt_entry_target* FUNC_4 (struct ebt_entry*) ;
 struct xt_target VAR_15 ;
 int FUNC_5 (struct xt_tgchk_param*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xt_tgchk_param*,size_t,int ,int) ;
 struct xt_target* FUNC_9 (scalar_t__,int ,int ) ;

__attribute__((used)) static inline int
FUNC_10(struct ebt_entry *VAR_16, struct net *VAR_17,
  const struct ebt_table_info *VAR_18,
  const char *VAR_19, unsigned int *VAR_20,
  struct ebt_cl_stack *VAR_21, unsigned int VAR_22)
{
 struct ebt_entry_target *VAR_23;
 struct xt_target *VAR_24;
 unsigned int VAR_25, VAR_26, VAR_27 = 0, VAR_28 = 0;
 size_t VAR_29;
 int VAR_30;
 struct xt_mtchk_param VAR_31;
 struct xt_tgchk_param VAR_32;


 if (VAR_16->bitmask == 0)
  return 0;

 if (VAR_16->bitmask & ~VAR_1)
  return -VAR_6;

 if (VAR_16->invflags & ~VAR_2)
  return -VAR_6;

 if ((VAR_16->bitmask & VAR_4) && (VAR_16->bitmask & VAR_0))
  return -VAR_6;


 for (VAR_25 = 0; VAR_25 < VAR_9; VAR_25++) {
  if (!VAR_18->hook_entry[VAR_25])
   continue;
  if ((char *)VAR_18->hook_entry[VAR_25] < (char *)VAR_16)
   VAR_27 = VAR_25;
  else
   break;
 }



 if (VAR_25 < VAR_9)
  VAR_28 = (1 << VAR_27) | (1 << VAR_9);
 else {
  for (VAR_25 = 0; VAR_25 < VAR_22; VAR_25++)
   if ((char *)(VAR_21[VAR_25].cs.chaininfo) > (char *)VAR_16)
    break;
  if (VAR_25 == 0)
   VAR_28 = (1 << VAR_27) | (1 << VAR_9);
  else
   VAR_28 = VAR_21[VAR_25 - 1].hookmask;
 }
 VAR_25 = 0;

 FUNC_5(&VAR_31, 0, sizeof(VAR_31));
 FUNC_5(&VAR_32, 0, sizeof(VAR_32));
 VAR_31.net = VAR_32.net = VAR_17;
 VAR_31.table = VAR_32.table = VAR_19;
 VAR_31.entryinfo = VAR_32.entryinfo = VAR_16;
 VAR_31.hook_mask = VAR_32.hook_mask = VAR_28;
 VAR_31.family = VAR_32.family = VAR_8;
 VAR_30 = FUNC_0(VAR_16, VAR_11, &VAR_31, &VAR_25);
 if (VAR_30 != 0)
  goto cleanup_matches;
 VAR_26 = 0;
 VAR_30 = FUNC_1(VAR_16, VAR_12, &VAR_32, &VAR_26);
 if (VAR_30 != 0)
  goto cleanup_watchers;
 VAR_23 = FUNC_4(VAR_16);
 VAR_29 = VAR_16->next_offset - VAR_16->target_offset;

 VAR_24 = FUNC_9(VAR_8, VAR_23->u.name, 0);
 if (FUNC_2(VAR_24)) {
  VAR_30 = FUNC_3(VAR_24);
  goto cleanup_watchers;
 }


 if (VAR_24->family != VAR_8) {
  FUNC_6(VAR_24->me);
  VAR_30 = -VAR_7;
  goto cleanup_watchers;
 }

 VAR_23->u.target = VAR_24;
 if (VAR_23->u.target == &VAR_15) {
  if (VAR_29 < sizeof(struct ebt_standard_target)) {
   VAR_30 = -VAR_5;
   goto cleanup_watchers;
  }
  if (((struct ebt_standard_target *)VAR_23)->verdict <
     -VAR_10) {
   VAR_30 = -VAR_5;
   goto cleanup_watchers;
  }
 } else if (VAR_23->target_size > VAR_29 - sizeof(struct ebt_entry_target)) {
  FUNC_6(VAR_23->u.target->me);
  VAR_30 = -VAR_5;
  goto cleanup_watchers;
 }

 VAR_32.target = VAR_24;
 VAR_32.targinfo = VAR_23->data;
 VAR_30 = FUNC_8(&VAR_32, VAR_23->target_size,
       FUNC_7(VAR_16->ethproto), VAR_16->invflags & VAR_3);
 if (VAR_30 < 0) {
  FUNC_6(VAR_24->me);
  goto cleanup_watchers;
 }
 (*VAR_20)++;
 return 0;
cleanup_watchers:
 FUNC_1(VAR_16, VAR_14, VAR_17, &VAR_26);
cleanup_matches:
 FUNC_0(VAR_16, VAR_13, VAR_17, &VAR_25);
 return VAR_30;
}
