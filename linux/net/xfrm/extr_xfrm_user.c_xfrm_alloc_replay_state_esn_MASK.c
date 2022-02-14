
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_replay_state_esn {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_replay_state_esn*) ;
 struct xfrm_replay_state_esn* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct xfrm_replay_state_esn*,struct xfrm_replay_state_esn*,unsigned int) ;
 struct xfrm_replay_state_esn* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 unsigned int FUNC_5 (struct xfrm_replay_state_esn*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_replay_state_esn **VAR_2,
           struct xfrm_replay_state_esn **VAR_3,
           struct nlattr *VAR_4)
{
 struct xfrm_replay_state_esn *VAR_5, *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9;

 if (!VAR_4)
  return 0;

 VAR_7 = FUNC_3(VAR_4);
 VAR_8 = FUNC_5(VAR_7);
 VAR_9 = FUNC_4(VAR_4) >= (int)VAR_8 ? VAR_8 : sizeof(*VAR_7);

 VAR_5 = FUNC_1(VAR_8, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_8, VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 FUNC_2(VAR_5, VAR_7, VAR_9);
 FUNC_2(VAR_6, VAR_7, VAR_9);

 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;

 return 0;
}
