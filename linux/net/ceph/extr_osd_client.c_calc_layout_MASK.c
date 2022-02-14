
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ceph_file_layout {int dummy; } ;


 int FUNC_0 (struct ceph_file_layout*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ceph_file_layout *VAR_0, u64 VAR_1, u64 *VAR_2,
   u64 *VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 u64 VAR_6 = *VAR_2;
 u32 VAR_7;


 FUNC_0(VAR_0, VAR_1, VAR_6, VAR_3,
       VAR_4, &VAR_7);
 *VAR_5 = VAR_7;
 if (*VAR_5 < VAR_6) {
  *VAR_2 = *VAR_5;
  FUNC_1(" skipping last %llu, final file extent %llu~%llu\n",
       VAR_6 - *VAR_2, VAR_1, *VAR_2);
 }

 FUNC_1("calc_layout objnum=%llx %llu~%llu\n", *VAR_3, *VAR_4, *VAR_5);
 return 0;
}
