
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int dummy; } ;
struct net {int user_ns; } ;
struct fib_table {int dummy; } ;
struct fib_config {int fc_mx; int fc_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct fib_table* FUNC_0 (struct net*,int ) ;
 struct fib_table* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,struct fib_table*,struct fib_config*,int *) ;
 int FUNC_3 (struct net*,struct fib_table*,struct fib_config*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net*,unsigned int,struct rtentry*,struct fib_config*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct net *VAR_5, unsigned int VAR_6, struct rtentry *VAR_7)
{
 struct fib_config VAR_8;
 int VAR_9;

 switch (VAR_6) {
 case 129:
 case 128:
  if (!FUNC_5(VAR_5->user_ns, VAR_0))
   return -VAR_3;

  FUNC_7();
  VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7, &VAR_8);
  if (VAR_9 == 0) {
   struct fib_table *VAR_10;

   if (VAR_6 == 128) {
    VAR_10 = FUNC_0(VAR_5, VAR_8.fc_table);
    if (VAR_10)
     VAR_9 = FUNC_2(VAR_5, VAR_10, &VAR_8,
              ((void*)0));
    else
     VAR_9 = -VAR_4;
   } else {
    VAR_10 = FUNC_1(VAR_5, VAR_8.fc_table);
    if (VAR_10)
     VAR_9 = FUNC_3(VAR_5, VAR_10,
              &VAR_8, ((void*)0));
    else
     VAR_9 = -VAR_2;
   }


   FUNC_4(VAR_8.fc_mx);
  }
  FUNC_8();
  return VAR_9;
 }
 return -VAR_1;
}
