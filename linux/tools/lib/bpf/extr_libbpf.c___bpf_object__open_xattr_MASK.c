
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object_open_attr {int prog_type; int file; } ;
struct bpf_object {int dummy; } ;


 struct bpf_object* FUNC_0 (int ,int *,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

struct bpf_object *FUNC_3(struct bpf_object_open_attr *VAR_0,
         int VAR_1)
{

 if (!VAR_0->file)
  return ((void*)0);

 FUNC_2("loading %s\n", VAR_0->file);

 return FUNC_0(VAR_0->file, ((void*)0), 0,
      FUNC_1(VAR_0->prog_type),
      VAR_1);
}
