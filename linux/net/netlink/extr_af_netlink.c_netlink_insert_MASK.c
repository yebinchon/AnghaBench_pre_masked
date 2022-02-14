
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {size_t sk_protocol; } ;
struct netlink_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ portid; scalar_t__ bound; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_table*,struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct netlink_table* VAR_4 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_5, u32 VAR_6)
{
 struct netlink_table *VAR_7 = &VAR_4[VAR_5->sk_protocol];
 int VAR_8;

 FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_5)->portid == VAR_6 ? 0 : -VAR_1;
 if (FUNC_2(VAR_5)->bound)
  goto err;

 FUNC_2(VAR_5)->portid = VAR_6;
 FUNC_5(VAR_5);

 VAR_8 = FUNC_0(VAR_7, VAR_5);
 if (VAR_8) {



  if (FUNC_7(VAR_8 == -VAR_1))
   VAR_8 = -VAR_3;
  if (VAR_8 == -VAR_2)
   VAR_8 = -VAR_0;
  FUNC_6(VAR_5);
  goto err;
 }


 FUNC_4();
 FUNC_2(VAR_5)->bound = VAR_6;

err:
 FUNC_3(VAR_5);
 return VAR_8;
}
