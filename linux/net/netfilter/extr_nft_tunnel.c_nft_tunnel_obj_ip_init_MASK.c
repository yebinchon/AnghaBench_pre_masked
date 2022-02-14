
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_4__ {void* dst; void* src; } ;
struct TYPE_5__ {TYPE_1__ ipv4; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct ip_tunnel_info {TYPE_3__ key; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_5,
      const struct nlattr *VAR_6,
      struct ip_tunnel_info *VAR_7)
{
 struct nlattr *VAR_8[VAR_2 + 1];
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_2, VAR_6,
       VAR_4, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_8[VAR_1])
  return -VAR_0;

 if (VAR_8[VAR_3])
  VAR_7->key.u.ipv4.src = FUNC_0(VAR_8[VAR_3]);
 if (VAR_8[VAR_1])
  VAR_7->key.u.ipv4.dst = FUNC_0(VAR_8[VAR_1]);

 return 0;
}
