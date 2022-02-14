
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int protocol; } ;
struct net_device {int hard_header_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_2(const struct sk_buff *VAR_1,
    struct net_device *VAR_2)
{
 int VAR_3 = VAR_1->len - VAR_2->hard_header_len;

 if (!FUNC_1(VAR_1) &&
     FUNC_0(VAR_1->protocol))
  VAR_3 -= VAR_0;






 return VAR_3 > 0 ? VAR_3 : 0;
}
