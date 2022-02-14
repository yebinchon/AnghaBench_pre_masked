
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_5__ {TYPE_1__ ipv6; } ;
struct TYPE_6__ {int label; TYPE_2__ u; } ;
struct ip_tunnel_info {int mode; TYPE_3__ key; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

__attribute__((used)) static int FUNC_4(const struct nft_ctx *VAR_7,
       const struct nlattr *VAR_8,
       struct ip_tunnel_info *VAR_9)
{
 struct nlattr *VAR_10[VAR_4 + 1];
 int VAR_11;

 VAR_11 = FUNC_3(VAR_10, VAR_4, VAR_8,
       VAR_6, ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_10[VAR_2])
  return -VAR_0;

 if (VAR_10[VAR_5]) {
  FUNC_0(&VAR_9->key.u.ipv6.src,
         FUNC_1(VAR_10[VAR_5]),
         sizeof(struct in6_addr));
 }
 if (VAR_10[VAR_2]) {
  FUNC_0(&VAR_9->key.u.ipv6.dst,
         FUNC_1(VAR_10[VAR_2]),
         sizeof(struct in6_addr));
 }
 if (VAR_10[VAR_3])
  VAR_9->key.label = FUNC_2(VAR_10[VAR_3]);

 VAR_9->mode |= VAR_1;

 return 0;
}
