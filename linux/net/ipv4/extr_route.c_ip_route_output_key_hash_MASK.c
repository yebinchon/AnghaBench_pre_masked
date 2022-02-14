
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct flowi4 {int flowi4_tos; int flowi4_scope; int flowi4_iif; } ;
struct fib_result {int tclassid; int * table; int * fi; int type; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct flowi4*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtable* FUNC_1 (struct net*,struct flowi4*,struct fib_result*,struct sk_buff const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct rtable *FUNC_4(struct net *VAR_6, struct flowi4 *VAR_7,
     const struct sk_buff *VAR_8)
{
 __u8 VAR_9 = FUNC_0(VAR_7);
 struct fib_result VAR_10 = {
  .type = VAR_2,
  .fi = ((void*)0),
  .table = ((void*)0),
  .tclassid = 0,
 };
 struct rtable *VAR_11;

 VAR_7->flowi4_iif = VAR_1;
 VAR_7->flowi4_tos = VAR_9 & VAR_0;
 VAR_7->flowi4_scope = ((VAR_9 & VAR_3) ?
    VAR_4 : VAR_5);

 FUNC_2();
 VAR_11 = FUNC_1(VAR_6, VAR_7, &VAR_10, VAR_8);
 FUNC_3();

 return VAR_11;
}
