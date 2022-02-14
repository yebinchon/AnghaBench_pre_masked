
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int src; int dst; } ;
struct TYPE_7__ {int src; int dst; } ;
struct TYPE_9__ {TYPE_3__ ipv4; TYPE_2__ ipv6; } ;
struct TYPE_10__ {int tun_flags; TYPE_4__ u; int tun_id; } ;
struct ip_tunnel_info {int mode; TYPE_5__ key; } ;
struct TYPE_6__ {struct ip_tunnel_info tun_info; } ;
struct metadata_dst {scalar_t__ type; TYPE_1__ u; } ;
struct in6_addr {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 struct metadata_dst* FUNC_1 (int ,scalar_t__,int ) ;

struct metadata_dst *FUNC_2(struct metadata_dst *VAR_3,
          gfp_t VAR_4)
{
 struct metadata_dst *VAR_5;
 struct ip_tunnel_info *VAR_6, *VAR_7;

 if (!VAR_3 || VAR_3->type != VAR_2 ||
     VAR_3->u.tun_info.mode & VAR_1)

  return ((void*)0);

 VAR_5 = FUNC_1(0, VAR_2, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = &VAR_5->u.tun_info;
 VAR_7 = &VAR_3->u.tun_info;
 VAR_6->key.tun_id = VAR_7->key.tun_id;
 if (VAR_7->mode & VAR_0)
  FUNC_0(&VAR_6->key.u.ipv6.dst, &VAR_7->key.u.ipv6.src,
         sizeof(struct in6_addr));
 else
  VAR_6->key.u.ipv4.dst = VAR_7->key.u.ipv4.src;
 VAR_6->key.tun_flags = VAR_7->key.tun_flags;
 VAR_6->mode = VAR_7->mode | VAR_1;

 return VAR_5;
}
