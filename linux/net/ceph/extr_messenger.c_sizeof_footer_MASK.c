
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg_footer_old {int dummy; } ;
struct ceph_msg_footer {int dummy; } ;
struct ceph_connection {int peer_features; } ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(struct ceph_connection *VAR_1)
{
 return (VAR_1->peer_features & VAR_0) ?
     sizeof(struct ceph_msg_footer) :
     sizeof(struct ceph_msg_footer_old);
}
