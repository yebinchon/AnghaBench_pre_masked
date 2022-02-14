
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__* aamix_out_paths; } ;



__attribute__((used)) static inline bool FUNC_0(struct hda_gen_spec *VAR_0)
{
 return VAR_0->aamix_out_paths[0] || VAR_0->aamix_out_paths[1] ||
  VAR_0->aamix_out_paths[2];
}
