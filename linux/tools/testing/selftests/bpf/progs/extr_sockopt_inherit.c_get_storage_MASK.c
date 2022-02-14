
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_inherit {int dummy; } ;
struct bpf_sockopt {scalar_t__ optname; int sk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sockopt_inherit* FUNC_0 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline struct sockopt_inherit *FUNC_1(struct bpf_sockopt *VAR_6)
{
 if (VAR_6->optname == VAR_1)
  return FUNC_0(&VAR_3, VAR_6->sk, 0,
       VAR_0);
 else if (VAR_6->optname == VAR_2)
  return FUNC_0(&VAR_4, VAR_6->sk, 0,
       VAR_0);
 else
  return FUNC_0(&VAR_5, VAR_6->sk, 0,
       VAR_0);
}
