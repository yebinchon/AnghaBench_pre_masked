
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_object {int * btf; int * btf_ext; } ;
struct TYPE_4__ {int d_size; int d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bpf_object*) ;
 int FUNC_4 (struct bpf_object*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(struct bpf_object *VAR_3,
    Elf_Data *VAR_4,
    Elf_Data *VAR_5)
{
 bool VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = 0;

 if (VAR_4) {
  VAR_3->btf = FUNC_6(VAR_4->d_buf, VAR_4->d_size);
  if (FUNC_0(VAR_3->btf)) {
   FUNC_9("Error loading ELF section %s: %d.\n",
       VAR_0, VAR_7);
   goto out;
  }
  VAR_7 = FUNC_4(VAR_3, VAR_3->btf);
  if (VAR_7) {
   FUNC_9("Error finalizing %s: %d.\n",
       VAR_0, VAR_7);
   goto out;
  }
 }
 if (VAR_5) {
  if (!VAR_3->btf) {
   FUNC_8("Ignore ELF section %s because its depending ELF section %s is not found.\n",
     VAR_1, VAR_0);
   goto out;
  }
  VAR_3->btf_ext = FUNC_7(VAR_5->d_buf,
         VAR_5->d_size);
  if (FUNC_0(VAR_3->btf_ext)) {
   FUNC_9("Error loading ELF section %s: %ld. Ignored and continue.\n",
       VAR_1, FUNC_2(VAR_3->btf_ext));
   VAR_3->btf_ext = ((void*)0);
   goto out;
  }
 }
out:
 if (VAR_7 || FUNC_0(VAR_3->btf)) {
  if (VAR_6)
   VAR_7 = VAR_7 ? : FUNC_2(VAR_3->btf);
  else
   VAR_7 = 0;
  if (!FUNC_1(VAR_3->btf))
   FUNC_5(VAR_3->btf);
  VAR_3->btf = ((void*)0);
 }
 if (VAR_6 && !VAR_3->btf) {
  FUNC_9("BTF is required, but is missing or corrupted.\n");
  return VAR_7 == 0 ? -VAR_2 : VAR_7;
 }
 return 0;
}
