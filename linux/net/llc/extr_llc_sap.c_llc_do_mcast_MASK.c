
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct llc_sap*,struct sk_buff*,struct sock*) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct llc_sap *VAR_1, struct sk_buff *VAR_2,
    struct sock **VAR_3, int VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_1(VAR_2, VAR_0);
  if (!VAR_5) {
   FUNC_2(VAR_3[VAR_6]);
   continue;
  }

  FUNC_0(VAR_1, VAR_5, VAR_3[VAR_6]);
  FUNC_2(VAR_3[VAR_6]);
 }
}
