
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_object {int dummy; } ;


 struct bpf_program* FUNC_0 (struct bpf_program*,struct bpf_object const*,int) ;
 scalar_t__ FUNC_1 (struct bpf_program*,struct bpf_object const*) ;

struct bpf_program *
FUNC_2(struct bpf_program *VAR_0, const struct bpf_object *VAR_1)
{
 struct bpf_program *VAR_2 = VAR_0;

 do {
  VAR_2 = FUNC_0(VAR_2, VAR_1, 0);
 } while (VAR_2 && FUNC_1(VAR_2, VAR_1));

 return VAR_2;
}
