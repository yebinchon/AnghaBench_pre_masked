
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int e_shstrndx; } ;
struct TYPE_8__ {int * elf; TYPE_3__ ehdr; } ;
struct bpf_object {int path; TYPE_1__ efile; } ;
struct TYPE_11__ {size_t d_size; } ;
struct TYPE_9__ {int sh_name; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef TYPE_3__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_4__ Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int ,int ) ;
 TYPE_2__* FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (char*,int,char const*,...) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6(const struct bpf_object *VAR_2,
       const char *VAR_3, size_t *VAR_4)
{
 const GElf_Ehdr *VAR_5 = &VAR_2->efile.ehdr;
 Elf *VAR_6 = VAR_2->efile.elf;
 Elf_Scn *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 while ((VAR_7 = FUNC_1(VAR_6, VAR_7)) != ((void*)0)) {
  const char *VAR_9;
  Elf_Data *VAR_10;
  GElf_Shdr VAR_11;

  VAR_8++;
  if (FUNC_3(VAR_7, &VAR_11) != &VAR_11) {
   FUNC_4("failed to get section(%d) header from %s\n",
       VAR_8, VAR_2->path);
   return -VAR_0;
  }

  VAR_9 = FUNC_2(VAR_6, VAR_5->e_shstrndx, VAR_11.sh_name);
  if (!VAR_9) {
   FUNC_4("failed to get section(%d) name from %s\n",
       VAR_8, VAR_2->path);
   return -VAR_0;
  }

  if (FUNC_5(VAR_3, VAR_9))
   continue;

  VAR_10 = FUNC_0(VAR_7, 0);
  if (!VAR_10) {
   FUNC_4("failed to get section(%d) data from %s(%s)\n",
       VAR_8, VAR_3, VAR_2->path);
   return -VAR_0;
  }

  *VAR_4 = VAR_10->d_size;
  return 0;
 }

 return -VAR_1;
}
