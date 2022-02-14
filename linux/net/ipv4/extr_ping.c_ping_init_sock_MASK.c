
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_family; int sk_ipv6only; } ;
struct net {int dummy; } ;
struct group_info {int ngroups; int * gid; } ;
typedef int kgid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct group_info* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net*,int *,int *) ;
 int FUNC_4 (struct group_info*) ;
 struct net* FUNC_5 (struct sock*) ;

int FUNC_6(struct sock *VAR_2)
{
 struct net *VAR_3 = FUNC_5(VAR_2);
 kgid_t VAR_4 = FUNC_0();
 struct group_info *VAR_5;
 int VAR_6;
 kgid_t VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_2->sk_family == VAR_0)
  VAR_2->sk_ipv6only = 1;

 FUNC_3(VAR_3, &VAR_7, &VAR_8);
 if (FUNC_2(VAR_7, VAR_4) && FUNC_2(VAR_4, VAR_8))
  return 0;

 VAR_5 = FUNC_1();
 for (VAR_6 = 0; VAR_6 < VAR_5->ngroups; VAR_6++) {
  kgid_t VAR_10 = VAR_5->gid[VAR_6];

  if (FUNC_2(VAR_7, VAR_10) && FUNC_2(VAR_10, VAR_8))
   goto out_release_group;
 }

 VAR_9 = -VAR_1;

out_release_group:
 FUNC_4(VAR_5);
 return VAR_9;
}
