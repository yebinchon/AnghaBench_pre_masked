
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {scalar_t__ replay_esn; } ;
struct xfrm_replay_state {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct xfrm_lifetime_cur {int dummy; } ;
struct xfrm_aevent_id {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_4(struct xfrm_state *VAR_0)
{
 unsigned int VAR_1 = VAR_0->replay_esn ?
         FUNC_3(VAR_0->replay_esn) :
         sizeof(struct xfrm_replay_state);

 return FUNC_0(sizeof(struct xfrm_aevent_id))
        + FUNC_1(VAR_1)
        + FUNC_2(sizeof(struct xfrm_lifetime_cur))
        + FUNC_1(sizeof(struct xfrm_mark))
        + FUNC_1(4)
        + FUNC_1(4);
}
