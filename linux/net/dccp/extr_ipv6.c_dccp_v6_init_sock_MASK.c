
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int * icsk_af_ops; } ;


 int FUNC_0 (struct sock*,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1)
{
 static __u8 VAR_2;
 int VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == 0) {
  if (FUNC_2(!VAR_2))
   VAR_2 = 1;
  FUNC_1(VAR_1)->icsk_af_ops = &VAR_0;
 }

 return VAR_3;
}
