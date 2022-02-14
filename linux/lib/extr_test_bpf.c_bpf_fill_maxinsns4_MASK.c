
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_filter {int dummy; } ;
struct TYPE_4__ {unsigned int len; struct sock_filter* insns; } ;
struct TYPE_3__ {TYPE_2__ ptr; } ;
struct bpf_test {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sock_filter FUNC_0 (int,int) ;
 struct sock_filter* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bpf_test *VAR_5)
{
 unsigned int VAR_6 = VAR_1 + 1;
 struct sock_filter *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return -VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_7[VAR_8] = FUNC_0(VAR_2 | VAR_0, 0xfefefefe);

 VAR_5->u.ptr.insns = VAR_7;
 VAR_5->u.ptr.len = VAR_6;

 return 0;
}
