
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int d_align; long long d_off; int d_size; void* d_version; void* d_type; void* d_buf; } ;
struct TYPE_5__ {int sh_name; int sh_addr; scalar_t__ sh_entsize; void* sh_flags; void* sh_type; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef int Elf ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(Elf *VAR_4, void* VAR_5, uint64_t VAR_6,
        uint64_t VAR_7, uint64_t VAR_8)
{
 Elf_Data *VAR_9;
 Elf_Scn *VAR_10;
 Elf_Shdr *VAR_11;
 uint64_t VAR_12 = VAR_7 - VAR_6;




 VAR_10 = FUNC_2(VAR_4);
 if (!VAR_10) {
  FUNC_3("cannot create section");
  return -1;
 }

 VAR_9 = FUNC_1(VAR_10);
 if (!VAR_9) {
  FUNC_3("cannot get new data");
  return -1;
 }

 VAR_9->d_align = 8;
 VAR_9->d_off = 0LL;
 VAR_9->d_buf = VAR_5;
 VAR_9->d_type = VAR_0;
 VAR_9->d_size = VAR_12;
 VAR_9->d_version = VAR_1;

 VAR_11 = FUNC_0(VAR_10);
 if (!VAR_11) {
  FUNC_3("cannot get section header");
  return -1;
 }

 VAR_11->sh_name = 104;
 VAR_11->sh_type = VAR_3;
 VAR_11->sh_addr = VAR_8;
 VAR_11->sh_flags = VAR_2;
 VAR_11->sh_entsize = 0;




 VAR_10 = FUNC_2(VAR_4);
 if (!VAR_10) {
  FUNC_3("cannot create section");
  return -1;
 }

 VAR_9 = FUNC_1(VAR_10);
 if (!VAR_9) {
  FUNC_3("cannot get new data");
  return -1;
 }

 VAR_9->d_align = 4;
 VAR_9->d_off = 0LL;
 VAR_9->d_buf = VAR_5 + VAR_12;
 VAR_9->d_type = VAR_0;
 VAR_9->d_size = VAR_6;
 VAR_9->d_version = VAR_1;

 VAR_11 = FUNC_0(VAR_10);
 if (!VAR_11) {
  FUNC_3("cannot get section header");
  return -1;
 }

 VAR_11->sh_name = 90;
 VAR_11->sh_type = VAR_3;
 VAR_11->sh_addr = VAR_8 + VAR_12;
 VAR_11->sh_flags = VAR_2;
 VAR_11->sh_entsize = 0;

 return 0;
}
