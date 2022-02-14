
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {char const* path; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;

const char *FUNC_1(const struct bpf_object *VAR_1)
{
 return VAR_1 ? VAR_1->path : FUNC_0(-VAR_0);
}
