
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int *) ;

__attribute__((used)) static bool FUNC_3(struct ceph_connection *VAR_0,
     unsigned long VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1));

 return FUNC_2(VAR_1, &VAR_0->flags);
}
