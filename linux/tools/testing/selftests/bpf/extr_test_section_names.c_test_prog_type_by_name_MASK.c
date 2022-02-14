
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc; int prog_type; int expected_attach_type; } ;
struct sec_name_test {int sec_name; TYPE_1__ expected_load; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static int FUNC_2(const struct sec_name_test *VAR_0)
{
 enum bpf_attach_type VAR_1;
 enum bpf_prog_type VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->sec_name, &VAR_2,
          &VAR_1);

 if (VAR_3 != VAR_0->expected_load.rc) {
  FUNC_1("prog: unexpected rc=%d for %s", VAR_3, VAR_0->sec_name);
  return -1;
 }

 if (VAR_3)
  return 0;

 if (VAR_2 != VAR_0->expected_load.prog_type) {
  FUNC_1("prog: unexpected prog_type=%d for %s", VAR_2,
        VAR_0->sec_name);
  return -1;
 }

 if (VAR_1 != VAR_0->expected_load.expected_attach_type) {
  FUNC_1("prog: unexpected expected_attach_type=%d for %s",
        VAR_1, VAR_0->sec_name);
  return -1;
 }

 return 0;
}
