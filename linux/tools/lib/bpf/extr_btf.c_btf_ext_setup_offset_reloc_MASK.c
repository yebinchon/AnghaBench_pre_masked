
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_ext_sec_setup_param {int min_rec_size; char* desc; int * ext_info; int len; int off; } ;
struct btf_ext {int offset_reloc_info; TYPE_1__* hdr; } ;
struct bpf_offset_reloc {int dummy; } ;
struct TYPE_2__ {int offset_reloc_len; int offset_reloc_off; } ;


 int FUNC_0 (struct btf_ext*,struct btf_ext_sec_setup_param*) ;

__attribute__((used)) static int FUNC_1(struct btf_ext *VAR_0)
{
 struct btf_ext_sec_setup_param VAR_1 = {
  .off = VAR_0->hdr->offset_reloc_off,
  .len = VAR_0->hdr->offset_reloc_len,
  .min_rec_size = sizeof(struct bpf_offset_reloc),
  .ext_info = &VAR_0->offset_reloc_info,
  .desc = "offset_reloc",
 };

 return FUNC_0(VAR_0, &VAR_1);
}
