
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_type {int name_off; } ;
struct btf {int dummy; } ;
struct bpf_prog_info {size_t nr_jited_ksyms; size_t func_info_rec_size; char* name; scalar_t__ func_info; scalar_t__ prog_tags; } ;
struct bpf_func_info {int type_id; } ;


 size_t VAR_0 ;
 char* FUNC_0 (struct btf*,int ) ;
 struct btf_type* FUNC_1 (struct btf*,int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*,int,char*,...) ;
 scalar_t__ FUNC_3 (char*,int,int ,size_t) ;
 void** FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, int VAR_3,
        struct bpf_prog_info *VAR_4,
        struct btf *VAR_5,
        u32 VAR_6)
{
 FUNC_4 (*VAR_1)[VAR_0] = (void *)(uintptr_t)(VAR_4->prog_tags);
 void *VAR_7 = (void *)(uintptr_t)(VAR_4->func_info);
 u32 VAR_8 = VAR_4->nr_jited_ksyms;
 const struct bpf_func_info *VAR_9;
 const char *VAR_10 = ((void*)0);
 const struct btf_type *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_2, VAR_3, "bpf_prog_");
 VAR_12 += FUNC_3(VAR_2 + VAR_12, VAR_3 - VAR_12,
     VAR_1[VAR_6], VAR_0);
 if (VAR_5) {
  VAR_9 = VAR_7 + VAR_6 * VAR_4->func_info_rec_size;
  VAR_11 = FUNC_1(VAR_5, VAR_9->type_id);
  VAR_10 = FUNC_0(VAR_5, VAR_11->name_off);
 } else if (VAR_6 == 0 && VAR_8 == 1) {

  if (VAR_4->name[0])
   VAR_10 = VAR_4->name;
 } else
  VAR_10 = "F";
 if (VAR_10)
  VAR_12 += FUNC_2(VAR_2 + VAR_12, VAR_3 - VAR_12,
         "_%s", VAR_10);
 return VAR_12;
}
