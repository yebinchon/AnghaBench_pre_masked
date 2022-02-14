
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int,int*,int*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char const*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char const*,int ) ;
 char* VAR_3 ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 char* FUNC_9 (int) ;
 int FUNC_10 () ;

int FUNC_11(int VAR_5, char **VAR_6)
{
 const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 1;
 int VAR_10 = 0;
 int VAR_11 = -1;
 int VAR_12 = -1;
 int VAR_13 = -1;
 int VAR_14;

 while ((VAR_14 = FUNC_6(VAR_5, VAR_6, "F:U:v:")) != -1) {
  switch (VAR_14) {

  case 'F':
   VAR_7 = VAR_3;
   break;
  case 'U':
   VAR_7 = VAR_3;
   VAR_9 = 0;
   break;
  case 'v':
   VAR_8 = VAR_3;
   break;
  default:
   FUNC_10();
   goto out;
  }
 }

 if (!VAR_8 || !VAR_7) {
  FUNC_10();
  goto out;
 }

 VAR_12 = FUNC_7(VAR_8, VAR_1);
 if (VAR_12 < 0) {
  FUNC_5(VAR_4, "open(%s,...): %s(%d)\n",
   VAR_8, FUNC_9(VAR_2), VAR_2);
  goto out;
 }

 if (VAR_9) {
  VAR_11 = FUNC_0(VAR_0,
       sizeof(uint32_t), sizeof(uint32_t),
       1, 0);
  if (VAR_11 < 0) {
   FUNC_5(VAR_4,
    "bpf_create_map(BPF_MAP_TYPE_CGROUP_ARRAY,...): %s(%d)\n",
    FUNC_9(VAR_2), VAR_2);
   goto out;
  }
 } else {
  VAR_11 = FUNC_2(VAR_7);
  if (VAR_11 < 0) {
   FUNC_5(VAR_4, "bpf_obj_get(%s): %s(%d)\n",
    VAR_7, FUNC_9(VAR_2), VAR_2);
   goto out;
  }
 }

 VAR_13 = FUNC_1(VAR_11, &VAR_10, &VAR_12, 0);
 if (VAR_13) {
  FUNC_8("bpf_map_update_elem");
  goto out;
 }

 if (VAR_9) {
  VAR_13 = FUNC_3(VAR_11, VAR_7);
  if (VAR_13) {
   FUNC_5(VAR_4, "bpf_obj_pin(..., %s): %s(%d)\n",
    VAR_7, FUNC_9(VAR_2), VAR_2);
   goto out;
  }
 }

out:
 if (VAR_11 != -1)
  FUNC_4(VAR_11);
 if (VAR_12 != -1)
  FUNC_4(VAR_12);
 return VAR_13;
}
