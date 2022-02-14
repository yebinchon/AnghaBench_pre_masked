
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
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sock_filter FUNC_0 (int,int) ;
 struct sock_filter* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bpf_test *VAR_13)
{
 unsigned int VAR_14 = VAR_6;
 struct sock_filter *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_1(VAR_14, sizeof(*VAR_15), VAR_12);
 if (!VAR_15)
  return -VAR_11;

 for (VAR_16 = 0; VAR_16 < VAR_14 - 3; VAR_16++)
  VAR_15[VAR_16] = FUNC_0(VAR_5 | VAR_2 | VAR_7, 0);

 VAR_15[VAR_14 - 3] = FUNC_0(VAR_4 | VAR_3, 0xabababab);
 VAR_15[VAR_14 - 2] = FUNC_0(VAR_1 | VAR_10 | VAR_9, 0);
 VAR_15[VAR_14 - 1] = FUNC_0(VAR_8 | VAR_0, 0);

 VAR_13->u.ptr.insns = VAR_15;
 VAR_13->u.ptr.len = VAR_14;

 return 0;
}
