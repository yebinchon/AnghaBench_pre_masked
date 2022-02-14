
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg {int seed; int pool; } ;


 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,int ) ;
 int FUNC_2 (void**,int) ;

__attribute__((used)) static void FUNC_3(void **VAR_0, const struct ceph_pg *VAR_1)
{
 FUNC_2(VAR_0, 1);
 FUNC_1(VAR_0, VAR_1->pool);
 FUNC_0(VAR_0, VAR_1->seed);
 FUNC_0(VAR_0, -1);
}
