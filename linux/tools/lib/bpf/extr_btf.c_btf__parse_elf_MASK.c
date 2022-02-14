
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct btf_ext {int dummy; } ;
typedef struct btf_ext btf ;
struct TYPE_11__ {int d_size; int d_buf; } ;
struct TYPE_10__ {int e_shstrndx; } ;
struct TYPE_9__ {int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btf_ext* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct btf_ext*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct btf_ext*) ;
 int FUNC_3 (struct btf_ext*) ;
 struct btf_ext* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 struct btf_ext* FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int,int ,int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int *) ;
 char* FUNC_14 (int *,int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_9 ;
 int FUNC_16 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_17 (int *,TYPE_1__*) ;
 int FUNC_18 (char const*,int ) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (char*,int ) ;
 int FUNC_21 (int) ;

struct btf *FUNC_22(const char *VAR_10, struct btf_ext **VAR_11)
{
 Elf_Data *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14 = 0, VAR_15 = -1, VAR_16 = 0;
 struct btf *VAR_17 = ((void*)0);
 Elf_Scn *VAR_18 = ((void*)0);
 Elf *VAR_19 = ((void*)0);
 GElf_Ehdr VAR_20;

 if (FUNC_15(VAR_4) == VAR_5) {
  FUNC_19("failed to init libelf for %s\n", VAR_10);
  return FUNC_0(-VAR_7);
 }

 VAR_15 = FUNC_18(VAR_10, VAR_8);
 if (VAR_15 < 0) {
  VAR_14 = -VAR_9;
  FUNC_19("failed to open %s: %s\n", VAR_10, FUNC_21(VAR_9));
  return FUNC_0(VAR_14);
 }

 VAR_14 = -VAR_6;

 VAR_19 = FUNC_8(VAR_15, VAR_2, ((void*)0));
 if (!VAR_19) {
  FUNC_19("failed to open %s as ELF file\n", VAR_10);
  goto done;
 }
 if (!FUNC_16(VAR_19, &VAR_20)) {
  FUNC_19("failed to get EHDR from %s\n", VAR_10);
  goto done;
 }
 if (!FUNC_5(&VAR_20)) {
  FUNC_19("non-native ELF endianness is not supported\n");
  goto done;
 }
 if (!FUNC_13(FUNC_11(VAR_19, VAR_20.e_shstrndx), ((void*)0))) {
  FUNC_19("failed to get e_shstrndx from %s\n", VAR_10);
  goto done;
 }

 while ((VAR_18 = FUNC_12(VAR_19, VAR_18)) != ((void*)0)) {
  GElf_Shdr VAR_21;
  char *VAR_22;

  VAR_16++;
  if (FUNC_17(VAR_18, &VAR_21) != &VAR_21) {
   FUNC_19("failed to get section(%d) header from %s\n",
       VAR_16, VAR_10);
   goto done;
  }
  VAR_22 = FUNC_14(VAR_19, VAR_20.e_shstrndx, VAR_21.sh_name);
  if (!VAR_22) {
   FUNC_19("failed to get section(%d) name from %s\n",
       VAR_16, VAR_10);
   goto done;
  }
  if (FUNC_20(VAR_22, VAR_0) == 0) {
   VAR_12 = FUNC_10(VAR_18, 0);
   if (!VAR_12) {
    FUNC_19("failed to get section(%d, %s) data from %s\n",
        VAR_16, VAR_22, VAR_10);
    goto done;
   }
   continue;
  } else if (VAR_11 && FUNC_20(VAR_22, VAR_1) == 0) {
   VAR_13 = FUNC_10(VAR_18, 0);
   if (!VAR_13) {
    FUNC_19("failed to get section(%d, %s) data from %s\n",
        VAR_16, VAR_22, VAR_10);
    goto done;
   }
   continue;
  }
 }

 VAR_14 = 0;

 if (!VAR_12) {
  VAR_14 = -VAR_3;
  goto done;
 }
 VAR_17 = FUNC_4(VAR_12->d_buf, VAR_12->d_size);
 if (FUNC_1(VAR_17))
  goto done;

 if (VAR_11 && VAR_13) {
  *VAR_11 = FUNC_6(VAR_13->d_buf,
     VAR_13->d_size);
  if (FUNC_1(*VAR_11))
   goto done;
 } else if (VAR_11) {
  *VAR_11 = ((void*)0);
 }
done:
 if (VAR_19)
  FUNC_9(VAR_19);
 FUNC_7(VAR_15);

 if (VAR_14)
  return FUNC_0(VAR_14);




 if (FUNC_1(VAR_17))
  return VAR_17;
 if (VAR_11 && FUNC_1(*VAR_11)) {
  FUNC_3(VAR_17);
  VAR_14 = FUNC_2(*VAR_11);
  return FUNC_0(VAR_14);
 }
 return VAR_17;
}
