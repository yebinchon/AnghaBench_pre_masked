
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int flags; int needs_free_netdev; int features; int * header_ops; int * netdev_ops; int priv_flags; int broadcast; } ;
struct ipv6hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_7)
{
 FUNC_0(VAR_7->broadcast, 0xff, VAR_0);

 VAR_7->hard_header_len = sizeof(struct ipv6hdr);
 VAR_7->flags = VAR_1 | VAR_2;
 VAR_7->priv_flags |= VAR_3;

 VAR_7->netdev_ops = &VAR_6;
 VAR_7->header_ops = &VAR_5;
 VAR_7->needs_free_netdev = 1;
 VAR_7->features |= VAR_4;
}
