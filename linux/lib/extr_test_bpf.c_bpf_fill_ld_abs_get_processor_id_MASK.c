
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
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sock_filter FUNC_0 (int,int) ;
 struct sock_filter* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bpf_test *VAR_11)
{
 unsigned int VAR_12 = VAR_4;
 struct sock_filter *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(VAR_12, sizeof(*VAR_13), VAR_8);
 if (!VAR_13)
  return -VAR_7;

 for (VAR_14 = 0; VAR_14 < VAR_12 - 1; VAR_14 += 2) {
  VAR_13[VAR_14] = FUNC_0(VAR_3 | VAR_1 | VAR_0, 0);
  VAR_13[VAR_14 + 1] = FUNC_0(VAR_3 | VAR_6 | VAR_0,
      VAR_10 + VAR_9);
 }

 VAR_13[VAR_12 - 1] = FUNC_0(VAR_5 | VAR_2, 0xbee);

 VAR_11->u.ptr.insns = VAR_13;
 VAR_11->u.ptr.len = VAR_12;

 return 0;
}
