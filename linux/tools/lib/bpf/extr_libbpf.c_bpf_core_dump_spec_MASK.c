
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {int name_off; } ;
struct bpf_core_spec {int raw_len; int len; TYPE_1__* spec; scalar_t__ offset; int * raw_spec; int btf; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ idx; scalar_t__ name; int type_id; } ;


 char* FUNC_0 (int ,int ) ;
 struct btf_type* FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_3(int VAR_0, const struct bpf_core_spec *VAR_1)
{
 const struct btf_type *VAR_2;
 const char *VAR_3;
 __u32 VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->spec[0].type_id;
 VAR_2 = FUNC_1(VAR_1->btf, VAR_4);
 VAR_3 = FUNC_0(VAR_1->btf, VAR_2->name_off);
 FUNC_2(VAR_0, "[%u] %s + ", VAR_4, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1->raw_len; VAR_5++)
  FUNC_2(VAR_0, "%d%s", VAR_1->raw_spec[VAR_5],
        VAR_5 == VAR_1->raw_len - 1 ? " => " : ":");

 FUNC_2(VAR_0, "%u @ &x", VAR_1->offset);

 for (VAR_5 = 0; VAR_5 < VAR_1->len; VAR_5++) {
  if (VAR_1->spec[VAR_5].name)
   FUNC_2(VAR_0, ".%s", VAR_1->spec[VAR_5].name);
  else
   FUNC_2(VAR_0, "[%u]", VAR_1->spec[VAR_5].idx);
 }

}
