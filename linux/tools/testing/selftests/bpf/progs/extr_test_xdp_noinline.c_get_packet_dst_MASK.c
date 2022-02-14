
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vip_meta {int flags; int vip_num; } ;
struct real_pos_lru {int atime; int pos; } ;
struct real_definition {int dummy; } ;
struct TYPE_2__ {scalar_t__ proto; int srcv6; int * port16; } ;
struct packet_description {TYPE_1__ flow; } ;
struct lb_stats {int v2; int v1; } ;
typedef int __u64 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int *,int*) ;
 int FUNC_2 (void*,TYPE_1__*,struct real_pos_lru*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct packet_description*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) __attribute__ ((noinline))
static bool FUNC_5(struct real_definition **VAR_4,
      struct packet_description *VAR_5,
      struct vip_meta *VAR_6,
      bool VAR_7, void *VAR_8)
{
 struct real_pos_lru VAR_9 = { };
 bool VAR_10 = VAR_7;
 __u32 *VAR_11, VAR_12, VAR_13;
 __u64 VAR_14;

 if (VAR_6->flags & (1 << 2))
  VAR_10 = 1;
 if (VAR_6->flags & (1 << 3)) {
  VAR_5->flow.port16[0] = VAR_5->flow.port16[1];
  FUNC_4(VAR_5->flow.srcv6, 0, 16);
 }
 VAR_12 = FUNC_3(VAR_5, VAR_10);
 if (VAR_12 != 0x358459b7 &&
     VAR_12 != 0x2f4bc6bb )
  return 0;
 VAR_13 = 2 * VAR_6->vip_num + VAR_12 % 2;
 VAR_11 = FUNC_1(&VAR_1, &VAR_13);
 if (!VAR_11)
  return 0;
 VAR_13 = *VAR_11;
 *VAR_4 = FUNC_1(&VAR_2, &VAR_13);
 if (!(*VAR_4))
  return 0;
 if (!(VAR_6->flags & (1 << 1))) {
  __u32 VAR_15 = 512 + 2;
  struct lb_stats *VAR_16 =
      FUNC_1(&VAR_3, &VAR_15);

  if (!VAR_16)
   return 1;
  VAR_14 = FUNC_0();
  if ((VAR_14 - VAR_16->v2) >> 32 > 0xffFFFF) {
   VAR_16->v1 = 1;
   VAR_16->v2 = VAR_14;
  } else {
   VAR_16->v1 += 1;
   if (VAR_16->v1 >= 1)
    return 1;
  }
  if (VAR_5->flow.proto == VAR_0)
   VAR_9.atime = VAR_14;
  VAR_9.pos = VAR_13;
  FUNC_2(VAR_8, &VAR_5->flow, &VAR_9, 0);
 }
 return 1;
}
