
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_cgroup_storage_key {int dummy; } ;
typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(bool VAR_4)
{
 enum bpf_map_type VAR_5 = VAR_4 ? VAR_1 :
  VAR_0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, sizeof(struct bpf_cgroup_storage_key),
       VAR_2, 0, 0);
 if (VAR_6 < 0) {
  if (FUNC_2(VAR_5))
   return -1;
  FUNC_1("Failed to create cgroup storage '%s'!\n",
         FUNC_3(VAR_3));
 }

 return VAR_6;
}
