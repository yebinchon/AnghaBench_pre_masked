
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
 int VAR_9 ;
 struct sock_filter FUNC_0 (int,unsigned int,int ,int ) ;
 struct sock_filter FUNC_1 (int,int) ;
 struct sock_filter* FUNC_2 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bpf_test *VAR_10)
{
 unsigned int VAR_11 = VAR_5;
 struct sock_filter *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_2(VAR_11, sizeof(*VAR_12), VAR_9);
 if (!VAR_12)
  return -VAR_8;

 VAR_12[0] = FUNC_0(VAR_2 | VAR_1, VAR_11 - 2, 0, 0);

 for (VAR_13 = 1; VAR_13 < VAR_11 - 1; VAR_13++)
  VAR_12[VAR_13] = FUNC_1(VAR_4 | VAR_0 | VAR_6, 0);

 VAR_12[VAR_11 - 1] = FUNC_1(VAR_7 | VAR_3, 0xabababab);

 VAR_10->u.ptr.insns = VAR_12;
 VAR_10->u.ptr.len = VAR_11;

 return 0;
}
