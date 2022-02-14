
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct iphdr {int ihl; int version; int tot_len; } ;


 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_3(const struct sk_buff *VAR_0)
{
 const struct iphdr *VAR_1;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->ihl < 5 ||
     VAR_1->version != 4)
  return -1;

 VAR_3 = FUNC_1(VAR_1->tot_len);
 if (VAR_0->len < VAR_2 + VAR_3 ||
     VAR_3 < (VAR_1->ihl * 4))
                return -1;

 return 0;
}
