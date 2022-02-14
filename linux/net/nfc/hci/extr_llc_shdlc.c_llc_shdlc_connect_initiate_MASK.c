
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_shdlc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct llc_shdlc*,int) ;
 int FUNC_1 (struct llc_shdlc*,struct sk_buff*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct llc_shdlc *VAR_4)
{
 struct sk_buff *VAR_5;

 FUNC_2("\n");

 VAR_5 = FUNC_0(VAR_4, 2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_2 ? 1 : 0);

 return FUNC_1(VAR_4, VAR_5, VAR_3);
}
