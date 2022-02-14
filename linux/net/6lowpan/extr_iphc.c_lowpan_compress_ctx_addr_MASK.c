
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int tmp ;
struct net_device {int dummy; } ;
struct lowpan_iphc_ctx {int plen; int pfx; } ;
struct in6_addr {int* s6_addr; } ;
struct TYPE_2__ {int lltype; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct in6_addr*,struct in6_addr const*) ;
 int FUNC_2 (struct in6_addr*,int *,int ) ;
 TYPE_1__* FUNC_3 (struct net_device const*) ;
 int FUNC_4 (struct net_device const*,struct lowpan_iphc_ctx const*,struct in6_addr const*,unsigned char const*) ;
 int FUNC_5 (struct in6_addr const*,struct lowpan_iphc_ctx const*,unsigned char const*) ;
 size_t* VAR_4 ;
 int FUNC_6 (size_t**,int*,int) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (struct in6_addr*,int ,int) ;

__attribute__((used)) static u8 FUNC_9(u8 **VAR_5, const struct net_device *VAR_6,
       const struct in6_addr *VAR_7,
       const struct lowpan_iphc_ctx *VAR_8,
       const unsigned char *VAR_9, bool VAR_10)
{
 struct in6_addr VAR_11 = {};
 u8 VAR_12;

 switch (FUNC_3(VAR_6)->lltype) {
 case 128:
  if (FUNC_5(VAR_7, VAR_8,
          VAR_9)) {
   VAR_12 = VAR_3;
   goto out;
  }
  break;
 default:
  if (FUNC_4(VAR_6, VAR_8, VAR_7, VAR_9)) {
   VAR_12 = VAR_3;
   goto out;
  }
  break;
 }

 FUNC_8(&VAR_11, 0, sizeof(VAR_11));

 VAR_11.s6_addr[11] = 0xFF;
 VAR_11.s6_addr[12] = 0xFE;
 FUNC_7(&VAR_11.s6_addr[14], &VAR_7->s6_addr[14], 2);

 FUNC_2(&VAR_11, &VAR_8->pfx, VAR_8->plen);
 if (FUNC_1(&VAR_11, VAR_7)) {
  FUNC_6(VAR_5, &VAR_7->s6_addr[14], 2);
  VAR_12 = VAR_2;
  goto out;
 }

 FUNC_8(&VAR_11, 0, sizeof(VAR_11));

 FUNC_7(&VAR_11.s6_addr[8], &VAR_7->s6_addr[8], 8);

 FUNC_2(&VAR_11, &VAR_8->pfx, VAR_8->plen);
 if (FUNC_1(&VAR_11, VAR_7)) {
  FUNC_6(VAR_5, &VAR_7->s6_addr[8], 8);
  VAR_12 = VAR_1;
  goto out;
 }

 FUNC_0(1, "context found but no address mode matched\n");
 return VAR_0;
out:

 if (VAR_10)
  return VAR_4[VAR_12];
 else
  return VAR_12;
}
