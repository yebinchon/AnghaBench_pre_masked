
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_object {TYPE_2__* btf_ext; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ offset_reloc_info; } ;


 int FUNC_0 (struct bpf_object*,char const*) ;

__attribute__((used)) static int
FUNC_1(struct bpf_object *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->btf_ext->offset_reloc_info.len)
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
