
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_spg {int shard; int pgid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void**,int ) ;
 int FUNC_1 (void**,int,int,scalar_t__) ;
 int FUNC_2 (void**,int *) ;

__attribute__((used)) static void FUNC_3(void **VAR_1, const struct ceph_spg *VAR_2)
{
 FUNC_1(VAR_1, 1, 1, VAR_0 + 1);
 FUNC_2(VAR_1, &VAR_2->pgid);
 FUNC_0(VAR_1, VAR_2->shard);
}
