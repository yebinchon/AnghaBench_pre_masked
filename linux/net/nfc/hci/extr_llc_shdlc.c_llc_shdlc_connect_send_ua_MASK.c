
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_shdlc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct llc_shdlc*,int ) ;
 int FUNC_1 (struct llc_shdlc*,struct sk_buff*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct llc_shdlc *VAR_2)
{
 struct sk_buff *VAR_3;

 FUNC_2("\n");

 VAR_3 = FUNC_0(VAR_2, 0);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3, VAR_1);
}
