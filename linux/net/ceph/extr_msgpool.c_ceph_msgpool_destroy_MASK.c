
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msgpool {int pool; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ceph_msgpool *VAR_0)
{
 FUNC_0("msgpool %s destroy\n", VAR_0->name);
 FUNC_1(VAR_0->pool);
}
