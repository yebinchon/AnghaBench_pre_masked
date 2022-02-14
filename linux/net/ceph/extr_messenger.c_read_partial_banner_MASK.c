
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int peer_addr_for_me; int actual_peer_addr; int * in_banner; int in_base_pos; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct ceph_connection*,int ) ;
 int FUNC_2 (struct ceph_connection*,int,int,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ceph_connection *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 FUNC_1("read_partial_banner %p at %d\n", VAR_1, VAR_1->in_base_pos);


 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = VAR_2;
 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_2, VAR_1->in_banner);
 if (VAR_4 <= 0)
  goto out;

 VAR_2 = sizeof (VAR_1->actual_peer_addr);
 VAR_3 += VAR_2;
 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_2, &VAR_1->actual_peer_addr);
 if (VAR_4 <= 0)
  goto out;
 FUNC_0(&VAR_1->actual_peer_addr);

 VAR_2 = sizeof (VAR_1->peer_addr_for_me);
 VAR_3 += VAR_2;
 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_2, &VAR_1->peer_addr_for_me);
 if (VAR_4 <= 0)
  goto out;
 FUNC_0(&VAR_1->peer_addr_for_me);

out:
 return VAR_4;
}
