
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxlan_metadata {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int gbp; } ;
struct TYPE_4__ {TYPE_1__ vxlan; } ;
struct nft_tunnel_opts {int len; int flags; TYPE_2__ u; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct nlattr *VAR_5,
         struct nft_tunnel_opts *VAR_6)
{
 struct nlattr *VAR_7[VAR_2 + 1];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_5,
       VAR_4, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_7[VAR_1])
  return -VAR_0;

 VAR_6->u.vxlan.gbp = FUNC_2(FUNC_0(VAR_7[VAR_1]));

 VAR_6->len = sizeof(struct vxlan_metadata);
 VAR_6->flags = VAR_3;

 return 0;
}
