
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {void const* data; int data_size; } ;
typedef int __u32 ;



const void *FUNC_0(const struct btf *VAR_0, __u32 *VAR_1)
{
 *VAR_1 = VAR_0->data_size;
 return VAR_0->data;
}
