
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_var_secinfo {int offset; int type; } ;
struct btf_type {int size; void* info; int name_off; } ;
struct btf_member {int offset; int type; int name_off; } ;
struct btf {int dummy; } ;
struct TYPE_2__ {int btf_datasec; int btf_func; } ;
struct bpf_object {struct btf* btf; TYPE_1__ caps; } ;
typedef int __u32 ;


 void* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct btf*) ;
 scalar_t__ FUNC_3 (struct btf*,int ) ;
 scalar_t__ FUNC_4 (struct btf*,int) ;
 scalar_t__ FUNC_5 (struct btf_type*) ;
 scalar_t__ FUNC_6 (struct btf_type*) ;
 scalar_t__ FUNC_7 (struct btf_type*) ;
 scalar_t__ FUNC_8 (struct btf_type*) ;
 struct btf_member* FUNC_9 (struct btf_type*) ;
 struct btf_var_secinfo* FUNC_10 (struct btf_type*) ;
 int FUNC_11 (struct btf_type*) ;

__attribute__((used)) static void FUNC_12(struct bpf_object *VAR_4)
{
 bool VAR_5 = VAR_4->caps.btf_datasec;
 bool VAR_6 = VAR_4->caps.btf_func;
 struct btf *VAR_7 = VAR_4->btf;
 struct btf_type *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (!VAR_4->btf || (VAR_6 && VAR_5))
  return;

 for (VAR_9 = 1; VAR_9 <= FUNC_2(VAR_7); VAR_9++) {
  VAR_8 = (struct btf_type *)FUNC_4(VAR_7, VAR_9);

  if (!VAR_5 && FUNC_8(VAR_8)) {

   VAR_8->info = FUNC_0(VAR_1, 0, 0);





   VAR_8->size = 1;
   *(int *)(VAR_8 + 1) = FUNC_1(0, 0, 8);
  } else if (!VAR_5 && FUNC_5(VAR_8)) {

   const struct btf_var_secinfo *VAR_12 = FUNC_10(VAR_8);
   struct btf_member *VAR_13 = FUNC_9(VAR_8);
   struct btf_type *VAR_14;
   char *VAR_15;

   VAR_15 = (char *)FUNC_3(VAR_7, VAR_8->name_off);
   while (*VAR_15) {
    if (*VAR_15 == '.')
     *VAR_15 = '_';
    VAR_15++;
   }

   VAR_11 = FUNC_11(VAR_8);
   VAR_8->info = FUNC_0(VAR_2, 0, VAR_11);
   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++, VAR_12++, VAR_13++) {

    VAR_13->offset = VAR_12->offset * 8;
    VAR_13->type = VAR_12->type;

    VAR_14 = (void *)FUNC_4(VAR_7, VAR_12->type);
    VAR_13->name_off = VAR_14->name_off;
   }
  } else if (!VAR_6 && FUNC_7(VAR_8)) {

   VAR_11 = FUNC_11(VAR_8);
   VAR_8->info = FUNC_0(VAR_0, 0, VAR_11);
   VAR_8->size = sizeof(__u32);
  } else if (!VAR_6 && FUNC_6(VAR_8)) {

   VAR_8->info = FUNC_0(VAR_3, 0, 0);
  }
 }
}
