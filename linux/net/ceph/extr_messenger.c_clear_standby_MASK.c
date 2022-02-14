
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {scalar_t__ state; int connect_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ceph_connection*,int ) ;
 int FUNC_2 (char*,struct ceph_connection*) ;

__attribute__((used)) static void FUNC_3(struct ceph_connection *VAR_4)
{

 if (VAR_4->state == VAR_3) {
  FUNC_2("clear_standby %p and ++connect_seq\n", VAR_4);
  VAR_4->state = VAR_2;
  VAR_4->connect_seq++;
  FUNC_0(FUNC_1(VAR_4, VAR_1));
  FUNC_0(FUNC_1(VAR_4, VAR_0));
 }
}
