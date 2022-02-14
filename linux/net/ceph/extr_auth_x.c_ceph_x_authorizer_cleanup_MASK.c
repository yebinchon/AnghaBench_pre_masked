
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_authorizer {int * buf; int session_key; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_x_authorizer *VAR_0)
{
 FUNC_1(&VAR_0->session_key);
 if (VAR_0->buf) {
  FUNC_0(VAR_0->buf);
  VAR_0->buf = ((void*)0);
 }
}
