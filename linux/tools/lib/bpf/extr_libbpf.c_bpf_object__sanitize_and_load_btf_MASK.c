
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int * btf_ext; int * btf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_object*) ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (struct bpf_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct bpf_object *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->btf)
  return 0;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 VAR_2 = FUNC_4(VAR_1->btf);
 if (VAR_2) {
  FUNC_6("Error loading %s into kernel: %d.\n",
      VAR_0, VAR_2);
  FUNC_3(VAR_1->btf);
  VAR_1->btf = ((void*)0);

  if (VAR_1->btf_ext) {
   FUNC_5(VAR_1->btf_ext);
   VAR_1->btf_ext = ((void*)0);
  }

  if (FUNC_0(VAR_1))
   return VAR_2;
 }
 return 0;
}
