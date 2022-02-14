
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct tcf_block*) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct tcf_block*,int) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0, struct tcf_block *VAR_1,
         bool VAR_2)
{
 if (!FUNC_0(VAR_1))
  FUNC_3(VAR_1, VAR_2);

 if (VAR_0) {
  if (VAR_2)
   FUNC_1(VAR_0);
  else
   FUNC_2(VAR_0);
 }
}
