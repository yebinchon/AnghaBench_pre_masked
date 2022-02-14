
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_filter {int dummy; } ;
struct rnd_state {int dummy; } ;
struct TYPE_3__ {unsigned int len; struct sock_filter* insns; } ;
struct TYPE_4__ {TYPE_1__ ptr; } ;
struct bpf_test {TYPE_2__ u; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sock_filter FUNC_0 (int,int ) ;
 struct sock_filter* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct rnd_state*,unsigned long long) ;
 int FUNC_3 (struct rnd_state*) ;

__attribute__((used)) static int FUNC_4(struct bpf_test *VAR_8)
{
 unsigned int VAR_9 = VAR_4;
 struct sock_filter *VAR_10;
 struct rnd_state VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10), VAR_7);
 if (!VAR_10)
  return -VAR_6;

 FUNC_2(&VAR_11, 3141592653589793238ULL);

 for (VAR_12 = 0; VAR_12 < VAR_9 - 1; VAR_12++) {
  __u32 VAR_13 = FUNC_3(&VAR_11);

  VAR_10[VAR_12] = FUNC_0(VAR_2 | VAR_1 | VAR_3, VAR_13);
 }

 VAR_10[VAR_9 - 1] = FUNC_0(VAR_5 | VAR_0, 0);

 VAR_8->u.ptr.insns = VAR_10;
 VAR_8->u.ptr.len = VAR_9;

 return 0;
}
