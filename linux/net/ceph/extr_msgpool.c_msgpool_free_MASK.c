
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msgpool {int name; } ;
struct ceph_msg {int * pool; } ;


 int FUNC_0 (struct ceph_msg*) ;
 int FUNC_1 (char*,int ,struct ceph_msg*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct ceph_msgpool *VAR_2 = VAR_1;
 struct ceph_msg *VAR_3 = VAR_0;

 FUNC_1("msgpool_release %s %p\n", VAR_2->name, VAR_3);
 VAR_3->pool = ((void*)0);
 FUNC_0(VAR_3);
}
