
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctphdr {scalar_t__ checksum; } ;
struct net {int dummy; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 struct sctphdr* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct net *VAR_1, struct sk_buff *VAR_2)
{
 struct sctphdr *VAR_3 = FUNC_2(VAR_2);
 __le32 VAR_4 = VAR_3->checksum;
 __le32 VAR_5 = FUNC_1(VAR_2, 0);

 if (VAR_5 != VAR_4) {

  FUNC_0(VAR_1, VAR_0);
  return -1;
 }
 return 0;
}
