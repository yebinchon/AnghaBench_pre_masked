
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rt6_info {int rt6i_flags; int from; } ;
struct fib6_node {int fn_sernum; } ;
struct fib6_info {int fib6_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct rt6_info*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_4)
{
 struct rt6_info *VAR_5;

 FUNC_0(VAR_4, VAR_1, VAR_0, 0);

 VAR_5 = (struct rt6_info *) FUNC_5(VAR_4);
 if (VAR_5) {
  FUNC_2();
  if (VAR_5->rt6i_flags & VAR_2) {
   FUNC_4(VAR_5);
  } else {
   struct fib6_info *VAR_6;
   struct fib6_node *VAR_7;

   VAR_6 = FUNC_1(VAR_5->from);
   if (VAR_6) {
    VAR_7 = FUNC_1(VAR_6->fib6_node);
    if (VAR_7 && (VAR_5->rt6i_flags & VAR_3))
     VAR_7->fn_sernum = -1;
   }
  }
  FUNC_3();
 }
}
