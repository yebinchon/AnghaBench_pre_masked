
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ipvs_property; } ;
struct ip_vs_conn {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_2,
         struct ip_vs_conn *VAR_3)
{
 int VAR_4 = VAR_1;

 VAR_2->ipvs_property = 1;
 if (FUNC_3(VAR_3->flags & VAR_0))
  VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == VAR_1) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }
 return VAR_4;
}
