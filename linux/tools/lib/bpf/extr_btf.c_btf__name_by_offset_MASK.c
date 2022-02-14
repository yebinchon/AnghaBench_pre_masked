
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf {char const* strings; TYPE_1__* hdr; } ;
typedef size_t __u32 ;
struct TYPE_2__ {size_t str_len; } ;



const char *FUNC_0(const struct btf *VAR_0, __u32 VAR_1)
{
 if (VAR_1 < VAR_0->hdr->str_len)
  return &VAR_0->strings[VAR_1];
 else
  return ((void*)0);
}
