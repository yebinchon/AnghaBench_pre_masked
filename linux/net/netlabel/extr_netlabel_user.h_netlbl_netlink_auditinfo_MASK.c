
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int sessionid; int loginuid; int secid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_1,
         struct netlbl_audit *VAR_2)
{
 FUNC_2(VAR_0, &VAR_2->secid);
 VAR_2->loginuid = FUNC_0(VAR_0);
 VAR_2->sessionid = FUNC_1(VAR_0);
}
