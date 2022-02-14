
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
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sock_filter FUNC_0 (int,unsigned int,int ,int ) ;
 struct sock_filter FUNC_1 (int,int) ;
 struct sock_filter* FUNC_2 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bpf_test *VAR_7)
{
 unsigned int VAR_8 = VAR_3;
 struct sock_filter *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8, sizeof(*VAR_9), VAR_6);
 if (!VAR_9)
  return -VAR_5;

 VAR_9[0] = FUNC_0(VAR_1 | VAR_0, VAR_8 - 2, 0, 0);

 for (VAR_10 = 1; VAR_10 < VAR_8 - 1; VAR_10++)
  VAR_9[VAR_10] = FUNC_1(VAR_4 | VAR_2, 0xfefefefe);

 VAR_9[VAR_8 - 1] = FUNC_1(VAR_4 | VAR_2, 0xabababab);

 VAR_7->u.ptr.insns = VAR_9;
 VAR_7->u.ptr.len = VAR_8;

 return 0;
}
