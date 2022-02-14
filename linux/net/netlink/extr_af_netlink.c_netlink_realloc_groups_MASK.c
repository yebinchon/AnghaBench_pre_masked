
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {size_t sk_protocol; } ;
struct netlink_sock {unsigned int ngroups; int groups; } ;
struct TYPE_2__ {unsigned int groups; int registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned long* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_3 ;
 struct netlink_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_4)
{
 struct netlink_sock *VAR_5 = FUNC_5(VAR_4);
 unsigned int VAR_6;
 unsigned long *VAR_7;
 int VAR_8 = 0;

 FUNC_3();

 VAR_6 = VAR_3[VAR_4->sk_protocol].groups;
 if (!VAR_3[VAR_4->sk_protocol].registered) {
  VAR_8 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_5->ngroups >= VAR_6)
  goto out_unlock;

 VAR_7 = FUNC_1(VAR_5->groups, FUNC_0(VAR_6), VAR_2);
 if (VAR_7 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto out_unlock;
 }
 FUNC_2((char *)VAR_7 + FUNC_0(VAR_5->ngroups), 0,
        FUNC_0(VAR_6) - FUNC_0(VAR_5->ngroups));

 VAR_5->groups = VAR_7;
 VAR_5->ngroups = VAR_6;
 out_unlock:
 FUNC_4();
 return VAR_8;
}
