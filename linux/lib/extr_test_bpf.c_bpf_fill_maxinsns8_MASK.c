
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_filter {int dummy; } ;
struct TYPE_3__ {unsigned int len; struct sock_filter* insns; } ;
struct TYPE_4__ {TYPE_1__ ptr; } ;
struct bpf_test {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sock_filter FUNC_0 (int,int,int ,int ) ;
 struct sock_filter FUNC_1 (int,int) ;
 struct sock_filter* FUNC_2 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bpf_test *VAR_9)
{
 unsigned int VAR_10 = VAR_5;
 struct sock_filter *VAR_11;
 int VAR_12, VAR_13 = VAR_10 - 3;

 VAR_11 = FUNC_2(VAR_10, sizeof(*VAR_11), VAR_8);
 if (!VAR_11)
  return -VAR_7;

 VAR_11[0] = FUNC_1(VAR_4 | VAR_1, 0xffffffff);

 for (VAR_12 = 1; VAR_12 < VAR_10 - 1; VAR_12++)
  VAR_11[VAR_12] = FUNC_0(VAR_3 | VAR_2, 0xffffffff, VAR_13--, 0);

 VAR_11[VAR_10 - 1] = FUNC_1(VAR_6 | VAR_0, 0);

 VAR_9->u.ptr.insns = VAR_11;
 VAR_9->u.ptr.len = VAR_10;

 return 0;
}
