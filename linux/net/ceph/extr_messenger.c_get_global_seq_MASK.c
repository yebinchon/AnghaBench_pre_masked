
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ceph_messenger {scalar_t__ global_seq; int global_seq_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct ceph_messenger *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 FUNC_0(&VAR_0->global_seq_lock);
 if (VAR_0->global_seq < VAR_1)
  VAR_0->global_seq = VAR_1;
 VAR_2 = ++VAR_0->global_seq;
 FUNC_1(&VAR_0->global_seq_lock);
 return VAR_2;
}
