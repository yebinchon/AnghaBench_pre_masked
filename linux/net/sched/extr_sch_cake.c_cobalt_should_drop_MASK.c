
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cobalt_vars {int count; int ecn_marked; int dropping; scalar_t__ p_drop; void* drop_next; int rec_inv_sqrt; } ;
struct cobalt_params {int target; int mtu_time; int interval; } ;
typedef void* ktime_t ;


 int FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct cobalt_vars*) ;
 void* FUNC_4 (void*,int ) ;
 void* FUNC_5 (void*,void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static bool FUNC_8(struct cobalt_vars *VAR_0,
          struct cobalt_params *VAR_1,
          ktime_t VAR_2,
          struct sk_buff *VAR_3,
          u32 VAR_4)
{
 bool VAR_5, VAR_6, VAR_7 = 0;
 ktime_t VAR_8;
 u64 VAR_9;
 VAR_9 = FUNC_6(FUNC_5(VAR_2, FUNC_2(VAR_3)));
 VAR_8 = FUNC_5(VAR_2, VAR_0->drop_next);
 VAR_6 = VAR_9 > VAR_1->target &&
        VAR_9 > VAR_1->mtu_time * VAR_4 * 2 &&
        VAR_9 > VAR_1->mtu_time * 4;
 VAR_5 = VAR_0->count && FUNC_6(VAR_8) >= 0;

 VAR_0->ecn_marked = 0;

 if (VAR_6) {
  if (!VAR_0->dropping) {
   VAR_0->dropping = 1;
   VAR_0->drop_next = FUNC_1(VAR_2,
        VAR_1->interval,
        VAR_0->rec_inv_sqrt);
  }
  if (!VAR_0->count)
   VAR_0->count = 1;
 } else if (VAR_0->dropping) {
  VAR_0->dropping = 0;
 }

 if (VAR_5 && VAR_0->dropping) {

  VAR_7 = !(VAR_0->ecn_marked = FUNC_0(VAR_3));

  VAR_0->count++;
  if (!VAR_0->count)
   VAR_0->count--;
  FUNC_3(VAR_0);
  VAR_0->drop_next = FUNC_1(VAR_0->drop_next,
       VAR_1->interval,
       VAR_0->rec_inv_sqrt);
  VAR_8 = FUNC_5(VAR_2, VAR_0->drop_next);
 } else {
  while (VAR_5) {
   VAR_0->count--;
   FUNC_3(VAR_0);
   VAR_0->drop_next = FUNC_1(VAR_0->drop_next,
        VAR_1->interval,
        VAR_0->rec_inv_sqrt);
   VAR_8 = FUNC_5(VAR_2, VAR_0->drop_next);
   VAR_5 = VAR_0->count && FUNC_6(VAR_8) >= 0;
  }
 }


 if (VAR_0->p_drop)
  VAR_7 |= (FUNC_7() < VAR_0->p_drop);


 if (!VAR_0->count)
  VAR_0->drop_next = FUNC_4(VAR_2, VAR_1->interval);
 else if (FUNC_6(VAR_8) > 0 && !VAR_7)
  VAR_0->drop_next = VAR_2;

 return VAR_7;
}
