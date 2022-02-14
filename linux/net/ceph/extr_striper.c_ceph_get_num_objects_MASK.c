
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_file_layout {int stripe_count; int object_size; int stripe_unit; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int*) ;

u64 FUNC_3(struct ceph_file_layout *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = (u64)VAR_0->stripe_count * VAR_0->object_size;
 u64 VAR_3 = FUNC_0(VAR_1, VAR_2);
 u64 VAR_4;
 u64 VAR_5 = 0;

 FUNC_2(VAR_1, VAR_2, &VAR_4);
 if (VAR_4 > 0 &&
     VAR_4 < (u64)VAR_0->stripe_count * VAR_0->stripe_unit)
  VAR_5 = VAR_0->stripe_count -
       FUNC_1(VAR_4, VAR_0->stripe_unit);

 return VAR_3 * VAR_0->stripe_count - VAR_5;
}
