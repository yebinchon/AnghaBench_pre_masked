
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_replay_state_esn {int bmp_len; int replay_window; } ;
struct nlattr {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 struct xfrm_replay_state_esn* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 unsigned int FUNC_2 (struct xfrm_replay_state_esn*) ;

__attribute__((used)) static inline int FUNC_3(struct xfrm_replay_state_esn *VAR_1,
      struct nlattr *VAR_2)
{
 struct xfrm_replay_state_esn *VAR_3;
 unsigned int VAR_4;

 if (!VAR_1 || !VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_3);



 if (FUNC_1(VAR_2) < (int)VAR_4 ||
     FUNC_2(VAR_1) != VAR_4 ||
     VAR_1->bmp_len != VAR_3->bmp_len)
  return -VAR_0;

 if (VAR_3->replay_window > VAR_3->bmp_len * sizeof(__u32) * 8)
  return -VAR_0;

 return 0;
}
