
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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 struct sock_filter FUNC_0 (int,scalar_t__) ;
 struct sock_filter* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bpf_test *VAR_15)
{
 unsigned int VAR_16 = VAR_4;
 struct sock_filter *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_1(VAR_16, sizeof(*VAR_17), VAR_12);
 if (!VAR_17)
  return -VAR_11;

 for (VAR_18 = 0; VAR_18 < VAR_16 - 4; VAR_18++)
  VAR_17[VAR_18] = FUNC_0(VAR_3 | VAR_9 | VAR_1, VAR_14 +
         VAR_13);

 VAR_17[VAR_16 - 4] = FUNC_0(VAR_5 | VAR_8, 0);
 VAR_17[VAR_16 - 3] = FUNC_0(VAR_3 | VAR_9 | VAR_1, VAR_14 +
       VAR_13);
 VAR_17[VAR_16 - 2] = FUNC_0(VAR_2 | VAR_7 | VAR_10, 0);
 VAR_17[VAR_16 - 1] = FUNC_0(VAR_6 | VAR_0, 0);

 VAR_15->u.ptr.insns = VAR_17;
 VAR_15->u.ptr.len = VAR_16;

 return 0;
}
