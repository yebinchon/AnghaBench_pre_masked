
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* rodata; TYPE_2__* bss; TYPE_1__* data; } ;
struct bpf_object {TYPE_4__ efile; } ;
typedef size_t __u32 ;
struct TYPE_7__ {size_t d_size; } ;
struct TYPE_6__ {size_t d_size; } ;
struct TYPE_5__ {size_t d_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_object const*,char const*,size_t*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const struct bpf_object *VAR_2, const char *VAR_3,
        __u32 *VAR_4)
{
 int VAR_5 = -VAR_1;
 size_t VAR_6;

 *VAR_4 = 0;
 if (!VAR_3) {
  return -VAR_0;
 } else if (!FUNC_1(VAR_3, ".data")) {
  if (VAR_2->efile.data)
   *VAR_4 = VAR_2->efile.data->d_size;
 } else if (!FUNC_1(VAR_3, ".bss")) {
  if (VAR_2->efile.bss)
   *VAR_4 = VAR_2->efile.bss->d_size;
 } else if (!FUNC_1(VAR_3, ".rodata")) {
  if (VAR_2->efile.rodata)
   *VAR_4 = VAR_2->efile.rodata->d_size;
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_6);
  if (!VAR_5)
   *VAR_4 = VAR_6;
 }

 return *VAR_4 ? 0 : VAR_5;
}
