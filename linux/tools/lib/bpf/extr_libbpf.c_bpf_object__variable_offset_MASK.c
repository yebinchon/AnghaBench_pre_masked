
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int strtabidx; int elf; TYPE_3__* symbols; } ;
struct bpf_object {TYPE_1__ efile; } ;
typedef int __u32 ;
struct TYPE_8__ {int d_size; } ;
struct TYPE_7__ {int st_value; int st_name; int st_info; } ;
typedef TYPE_2__ GElf_Sym ;
typedef TYPE_3__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,size_t,TYPE_2__*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

int FUNC_6(const struct bpf_object *VAR_5, const char *VAR_6,
    __u32 *VAR_7)
{
 Elf_Data *VAR_8 = VAR_5->efile.symbols;
 const char *VAR_9;
 size_t VAR_10;

 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8->d_size / sizeof(GElf_Sym); VAR_10++) {
  GElf_Sym VAR_11;

  if (!FUNC_3(VAR_8, VAR_10, &VAR_11))
   continue;
  if (FUNC_0(VAR_11.st_info) != VAR_3 ||
      FUNC_1(VAR_11.st_info) != VAR_4)
   continue;

  VAR_9 = FUNC_2(VAR_5->efile.elf, VAR_5->efile.strtabidx,
       VAR_11.st_name);
  if (!VAR_9) {
   FUNC_4("failed to get sym name string for var %s\n",
       VAR_6);
   return -VAR_1;
  }
  if (FUNC_5(VAR_6, VAR_9) == 0) {
   *VAR_7 = VAR_11.st_value;
   return 0;
  }
 }

 return -VAR_2;
}
