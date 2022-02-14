
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_ext_sec_setup_param {int min_rec_size; char* desc; int * ext_info; int len; int off; } ;
struct btf_ext {int line_info; TYPE_1__* hdr; } ;
struct bpf_line_info_min {int dummy; } ;
struct TYPE_2__ {int line_info_len; int line_info_off; } ;


 int FUNC_0 (struct btf_ext*,struct btf_ext_sec_setup_param*) ;

__attribute__((used)) static int FUNC_1(struct btf_ext *VAR_0)
{
 struct btf_ext_sec_setup_param VAR_1 = {
  .off = VAR_0->hdr->line_info_off,
  .len = VAR_0->hdr->line_info_len,
  .min_rec_size = sizeof(struct bpf_line_info_min),
  .ext_info = &VAR_0->line_info,
  .desc = "line_info",
 };

 return FUNC_0(VAR_0, &VAR_1);
}
