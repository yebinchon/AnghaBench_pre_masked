
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct buffer_ext {int dummy; } ;
struct TYPE_6__ {int d_align; long long d_off; void* d_version; void* d_size; void* d_type; void* d_buf; } ;
struct TYPE_5__ {int sh_name; scalar_t__ sh_entsize; scalar_t__ sh_flags; scalar_t__ sh_addr; void* sh_type; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (struct buffer_ext*) ;
 int FUNC_1 (struct buffer_ext*) ;
 void* FUNC_2 (struct buffer_ext*) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,void*,int,struct buffer_ext*,struct buffer_ext*,struct buffer_ext*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(Elf *VAR_4, uint64_t VAR_5, void *VAR_6, int VAR_7)
{
 Elf_Data *VAR_8;
 Elf_Scn *VAR_9;
 Elf_Shdr *VAR_10;
 struct buffer_ext VAR_11, VAR_12, VAR_13;
 int VAR_14;

 FUNC_1(&VAR_11);
 FUNC_1(&VAR_12);
 FUNC_1(&VAR_13);

 VAR_14 = FUNC_7(VAR_5, VAR_6, VAR_7, &VAR_11, &VAR_13, &VAR_12);
 if (VAR_14)
  return -1;



 VAR_9 = FUNC_5(VAR_4);
 if (!VAR_9) {
  FUNC_8("cannot create section");
  return -1;
 }

 VAR_8 = FUNC_4(VAR_9);
 if (!VAR_8) {
  FUNC_8("cannot get new data");
  return -1;
 }

 VAR_8->d_align = 1;
 VAR_8->d_off = 0LL;
 VAR_8->d_buf = FUNC_0(&VAR_11);
 VAR_8->d_type = VAR_1;
 VAR_8->d_size = FUNC_2(&VAR_11);
 VAR_8->d_version = VAR_2;

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10) {
  FUNC_8("cannot get section header");
  return -1;
 }

 VAR_10->sh_name = 52;
 VAR_10->sh_type = VAR_3;
 VAR_10->sh_addr = 0;
 VAR_10->sh_flags = 0;
 VAR_10->sh_entsize = 0;




 VAR_9 = FUNC_5(VAR_4);
 if (!VAR_9) {
  FUNC_8("cannot create section");
  return -1;
 }

 VAR_8 = FUNC_4(VAR_9);
 if (!VAR_8) {
  FUNC_8("cannot get new data");
  return -1;
 }

 VAR_8->d_align = 1;
 VAR_8->d_off = 0LL;
 VAR_8->d_buf = FUNC_0(&VAR_12);
 VAR_8->d_type = VAR_1;
 VAR_8->d_size = FUNC_2(&VAR_12);
 VAR_8->d_version = VAR_2;

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10) {
  FUNC_8("cannot get section header");
  return -1;
 }

 VAR_10->sh_name = 64;
 VAR_10->sh_type = VAR_3;
 VAR_10->sh_addr = 0;
 VAR_10->sh_flags = 0;
 VAR_10->sh_entsize = 0;




 VAR_9 = FUNC_5(VAR_4);
 if (!VAR_9) {
  FUNC_8("cannot create section");
  return -1;
 }

 VAR_8 = FUNC_4(VAR_9);
 if (!VAR_8) {
  FUNC_8("cannot get new data");
  return -1;
 }

 VAR_8->d_align = 1;
 VAR_8->d_off = 0LL;
 VAR_8->d_buf = FUNC_0(&VAR_13);
 VAR_8->d_type = VAR_1;
 VAR_8->d_size = FUNC_2(&VAR_13);
 VAR_8->d_version = VAR_2;

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10) {
  FUNC_8("cannot get section header");
  return -1;
 }

 VAR_10->sh_name = 76;
 VAR_10->sh_type = VAR_3;
 VAR_10->sh_addr = 0;
 VAR_10->sh_flags = 0;
 VAR_10->sh_entsize = 0;




 if (FUNC_6(VAR_4, VAR_0) < 0) {
  FUNC_8("elf_update debug failed");
  return -1;
 }
 return 0;
}
