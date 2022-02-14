
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_test {scalar_t__ result; int prog_file; } ;
struct bpf_prog_load_attr {int prog_type; int file; } ;
struct bpf_object {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct bpf_prog_load_attr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sysctl_test *VAR_2)
{
 struct bpf_prog_load_attr VAR_3;
 struct bpf_object *VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3, 0, sizeof(struct bpf_prog_load_attr));
 VAR_3.file = VAR_2->prog_file;
 VAR_3.prog_type = VAR_0;

 if (FUNC_0(&VAR_3, &VAR_4, &VAR_5)) {
  if (VAR_2->result != VAR_1)
   FUNC_1(">>> Loading program (%s) error.\n",
    VAR_2->prog_file);
  return -1;
 }

 return VAR_5;
}
