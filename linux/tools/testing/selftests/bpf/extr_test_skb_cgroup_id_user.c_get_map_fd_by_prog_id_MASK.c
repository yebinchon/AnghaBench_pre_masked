
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int nr_map_ids; int map_ids; } ;
typedef int info ;
typedef int __u64 ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct bpf_prog_info*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(int VAR_0)
{
 struct bpf_prog_info VAR_1 = {};
 __u32 VAR_2 = sizeof(VAR_1);
 __u32 VAR_3[1];
 int VAR_4 = -1;
 int VAR_5 = -1;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 < 0) {
  FUNC_4("Failed to get fd by prog id %d", VAR_0);
  goto err;
 }

 VAR_1.nr_map_ids = 1;
 VAR_1.map_ids = (__u64) (unsigned long) VAR_3;

 if (FUNC_1(VAR_4, &VAR_1, &VAR_2)) {
  FUNC_4("Failed to get info by prog fd %d", VAR_4);
  goto err;
 }

 if (!VAR_1.nr_map_ids) {
  FUNC_4("No maps found for prog fd %d", VAR_4);
  goto err;
 }

 VAR_5 = FUNC_0(VAR_3[0]);
 if (VAR_5 < 0)
  FUNC_4("Failed to get fd by map id %d", VAR_3[0]);
err:
 if (VAR_4 >= 0)
  FUNC_3(VAR_4);
 return VAR_5;
}
