
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct bpf_map_data {size_t elf_offset; int def; int name; } ;
struct bpf_load_map_def {int dummy; } ;
struct TYPE_11__ {int d_size; scalar_t__ d_buf; } ;
struct TYPE_10__ {int st_shndx; size_t st_value; int st_name; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_7 (int *,struct bpf_load_map_def*,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_1__*,int,int,int ) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct bpf_map_data *VAR_5, int VAR_6,
     Elf *VAR_7, Elf_Data *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 bool VAR_12 = 0;
 Elf_Data *VAR_13;
 int VAR_14, VAR_15;
 GElf_Sym *VAR_16;
 Elf_Scn *VAR_17;
 int VAR_18;

 if (VAR_6 < 0)
  return -VAR_1;
 if (!VAR_8)
  return -VAR_1;


 VAR_17 = FUNC_3(VAR_7, VAR_6);
 if (VAR_17)
  VAR_13 = FUNC_2(VAR_17, ((void*)0));
 if (!VAR_17 || !VAR_13) {
  FUNC_9("Failed to get Elf_Data from maps section %d\n",
         VAR_6);
  return -VAR_1;
 }


 VAR_16 = FUNC_1(VAR_2+1, sizeof(GElf_Sym));
 for (VAR_14 = 0, VAR_15 = 0; VAR_14 < VAR_8->d_size / sizeof(GElf_Sym); VAR_14++) {
  FUNC_0(VAR_15 < VAR_2+1);
  if (!FUNC_6(VAR_8, VAR_14, &VAR_16[VAR_15]))
   continue;
  if (VAR_16[VAR_15].st_shndx != VAR_6)
   continue;

  VAR_15++;
 }


 FUNC_10(VAR_16, VAR_15, sizeof(GElf_Sym), VAR_3);
 VAR_10 = VAR_13->d_size / VAR_15;
 VAR_11 = sizeof(struct bpf_load_map_def);
 if (VAR_10 < VAR_11) {




  VAR_11 = VAR_10;
 } else if (VAR_10 > VAR_11) {






  VAR_12 = 1;
 }


 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  struct bpf_load_map_def *VAR_19;
  unsigned char *VAR_20, *VAR_21;
  const char *VAR_22;
  size_t VAR_23;

  VAR_22 = FUNC_4(VAR_7, VAR_9, VAR_16[VAR_14].st_name);
  VAR_5[VAR_14].name = FUNC_11(VAR_22);
  if (!VAR_5[VAR_14].name) {
   FUNC_9("strdup(%s): %s(%d)\n", VAR_22,
          FUNC_12(VAR_4), VAR_4);
   FUNC_5(VAR_16);
   return -VAR_4;
  }


  VAR_23 = VAR_16[VAR_14].st_value;
  VAR_19 = (struct bpf_load_map_def *)(VAR_13->d_buf + VAR_23);
  VAR_5[VAR_14].elf_offset = VAR_23;
  FUNC_8(&VAR_5[VAR_14].def, 0, sizeof(struct bpf_load_map_def));
  FUNC_7(&VAR_5[VAR_14].def, VAR_19, VAR_11);


  if (VAR_12) {
   VAR_20 = (unsigned char *) VAR_19 + VAR_11;
   VAR_21 = (unsigned char *) VAR_19 + VAR_10;
   for (; VAR_20 < VAR_21; VAR_20++) {
    if (*VAR_20 != 0) {
     FUNC_5(VAR_16);
     return -VAR_0;
    }
   }
  }
 }

 FUNC_5(VAR_16);
 return VAR_15;
}
