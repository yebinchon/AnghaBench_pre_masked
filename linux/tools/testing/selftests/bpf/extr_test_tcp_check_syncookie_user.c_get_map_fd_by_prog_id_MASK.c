
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int nr_map_ids; scalar_t__ type; int map_ids; } ;
typedef int info ;
typedef int __u64 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct bpf_prog_info*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_1, bool *VAR_2)
{
 struct bpf_prog_info VAR_3 = {};
 __u32 VAR_4 = sizeof(VAR_3);
 __u32 VAR_5[1];
 int VAR_6 = -1;
 int VAR_7 = -1;

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6 < 0) {
  FUNC_4("Failed to get fd by prog id %d", VAR_1);
  goto err;
 }

 VAR_3.nr_map_ids = 1;
 VAR_3.map_ids = (__u64)(unsigned long)VAR_5;

 if (FUNC_1(VAR_6, &VAR_3, &VAR_4)) {
  FUNC_4("Failed to get info by prog fd %d", VAR_6);
  goto err;
 }

 if (!VAR_3.nr_map_ids) {
  FUNC_4("No maps found for prog fd %d", VAR_6);
  goto err;
 }

 *VAR_2 = VAR_3.type == VAR_0;

 VAR_7 = FUNC_0(VAR_5[0]);
 if (VAR_7 < 0)
  FUNC_4("Failed to get fd by map id %d", VAR_5[0]);
err:
 if (VAR_6 >= 0)
  FUNC_3(VAR_6);
 return VAR_7;
}
