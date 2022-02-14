
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {struct bpf_object* obj; int section_name; int * caps; } ;
struct bpf_object {int nr_programs; struct bpf_program* programs; int caps; } ;
typedef int progs ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_program*) ;
 int FUNC_1 (void*,size_t,char*,int,struct bpf_program*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;
 struct bpf_program* FUNC_4 (struct bpf_program*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct bpf_object *VAR_1, void *VAR_2, size_t VAR_3,
   char *VAR_4, int VAR_5)
{
 struct bpf_program VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_6.caps = &VAR_1->caps;
 VAR_7 = VAR_1->programs;
 VAR_8 = VAR_1->nr_programs;

 VAR_7 = FUNC_4(VAR_7, VAR_8 + 1, sizeof(VAR_7[0]));
 if (!VAR_7) {





  FUNC_3("failed to alloc a new program under section '%s'\n",
      VAR_4);
  FUNC_0(&VAR_6);
  return -VAR_0;
 }

 FUNC_2("found program %s\n", VAR_6.section_name);
 VAR_1->programs = VAR_7;
 VAR_1->nr_programs = VAR_8 + 1;
 VAR_6.obj = VAR_1;
 VAR_7[VAR_8] = VAR_6;
 return 0;
}
