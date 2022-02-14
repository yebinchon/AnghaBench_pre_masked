
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_prog_info {int nr_map_ids; int map_ids; } ;
typedef int info ;
typedef int __u32 ;


 int FUNC_0 (int,struct bpf_prog_info*,int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static void FUNC_7(int VAR_2, u32 VAR_3)
{
 struct bpf_prog_info VAR_4 = {};
 __u32 VAR_5 = sizeof(VAR_4);
 __u32 VAR_6[VAR_3];
 unsigned int VAR_7;
 int VAR_8;

 VAR_4.nr_map_ids = VAR_3;
 VAR_4.map_ids = FUNC_6(VAR_6);

 VAR_8 = FUNC_0(VAR_2, &VAR_4, &VAR_5);
 if (VAR_8 || !VAR_4.nr_map_ids)
  return;

 if (VAR_0) {
  FUNC_2(VAR_1, "map_ids");
  FUNC_3(VAR_1);
  for (VAR_7 = 0; VAR_7 < VAR_4.nr_map_ids; VAR_7++)
   FUNC_4(VAR_1, VAR_6[VAR_7]);
  FUNC_1(VAR_1);
 } else {
  FUNC_5("  map_ids ");
  for (VAR_7 = 0; VAR_7 < VAR_4.nr_map_ids; VAR_7++)
   FUNC_5("%u%s", VAR_6[VAR_7],
          VAR_7 == VAR_4.nr_map_ids - 1 ? "" : ",");
 }
}
