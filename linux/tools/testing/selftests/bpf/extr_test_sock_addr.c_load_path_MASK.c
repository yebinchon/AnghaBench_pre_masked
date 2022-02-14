
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_addr_test {scalar_t__ expected_result; int expected_attach_type; } ;
struct bpf_prog_load_attr {char const* file; int prog_flags; int expected_attach_type; int prog_type; } ;
struct bpf_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct bpf_prog_load_attr*,int ,int) ;

__attribute__((used)) static int FUNC_3(const struct sock_addr_test *VAR_3, const char *VAR_4)
{
 struct bpf_prog_load_attr VAR_5;
 struct bpf_object *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5, 0, sizeof(struct bpf_prog_load_attr));
 VAR_5.file = VAR_4;
 VAR_5.prog_type = VAR_1;
 VAR_5.expected_attach_type = VAR_3->expected_attach_type;
 VAR_5.prog_flags = VAR_0;

 if (FUNC_0(&VAR_5, &VAR_6, &VAR_7)) {
  if (VAR_3->expected_result != VAR_2)
   FUNC_1(">>> Loading program (%s) error.\n", VAR_4);
  return -1;
 }

 return VAR_7;
}
