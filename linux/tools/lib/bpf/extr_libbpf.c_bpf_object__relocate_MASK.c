
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int section_name; } ;
struct bpf_object {size_t nr_programs; struct bpf_program* programs; scalar_t__ btf_ext; } ;


 int FUNC_0 (struct bpf_object*,char const*) ;
 int FUNC_1 (struct bpf_program*,struct bpf_object*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct bpf_object *VAR_0, const char *VAR_1)
{
 struct bpf_program *VAR_2;
 size_t VAR_3;
 int VAR_4;

 if (VAR_0->btf_ext) {
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4) {
   FUNC_2("failed to perform CO-RE relocations: %d\n",
       VAR_4);
   return VAR_4;
  }
 }
 for (VAR_3 = 0; VAR_3 < VAR_0->nr_programs; VAR_3++) {
  VAR_2 = &VAR_0->programs[VAR_3];

  VAR_4 = FUNC_1(VAR_2, VAR_0);
  if (VAR_4) {
   FUNC_2("failed to relocate '%s'\n",
       VAR_2->section_name);
   return VAR_4;
  }
 }
 return 0;
}
