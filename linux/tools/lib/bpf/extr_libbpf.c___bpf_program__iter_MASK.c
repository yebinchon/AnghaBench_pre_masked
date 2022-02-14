
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct bpf_program {struct bpf_object const* obj; } const bpf_program ;
struct bpf_object {size_t nr_programs; struct bpf_program const* programs; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static struct bpf_program *
FUNC_1(const struct bpf_program *VAR_0, const struct bpf_object *VAR_1,
      bool VAR_2)
{
 size_t VAR_3 = VAR_1->nr_programs;
 ssize_t VAR_4;

 if (!VAR_3)
  return ((void*)0);

 if (!VAR_0)

  return VAR_2 ? &VAR_1->programs[0] :
   &VAR_1->programs[VAR_3 - 1];

 if (VAR_0->obj != VAR_1) {
  FUNC_0("error: program handler doesn't match object\n");
  return ((void*)0);
 }

 VAR_4 = (VAR_0 - VAR_1->programs) + (VAR_2 ? 1 : -1);
 if (VAR_4 >= VAR_1->nr_programs || VAR_4 < 0)
  return ((void*)0);
 return &VAR_1->programs[VAR_4];
}
