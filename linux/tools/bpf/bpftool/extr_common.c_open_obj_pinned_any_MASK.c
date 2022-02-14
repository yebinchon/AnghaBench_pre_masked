
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_obj_type { ____Placeholder_bpf_obj_type } bpf_obj_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(char *VAR_0, enum bpf_obj_type VAR_1)
{
 enum bpf_obj_type VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, 0);
 if (VAR_3 < 0)
  return -1;

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(VAR_3);
  return VAR_2;
 }
 if (VAR_2 != VAR_1) {
  FUNC_4("incorrect object type: %s", FUNC_2(VAR_2));
  FUNC_0(VAR_3);
  return -1;
 }

 return VAR_3;
}
