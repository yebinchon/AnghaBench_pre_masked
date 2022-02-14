
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_ext {int dummy; } ;
struct btf_dump_opts {int * ctx; } ;
struct TYPE_2__ {int * ctx; } ;
struct btf_dump {int * ident_names; int * type_names; TYPE_1__ opts; int printf_fn; struct btf_ext const* btf_ext; struct btf const* btf; } ;
struct btf {int dummy; } ;
typedef int btf_dump_printf_fn_t ;


 int VAR_0 ;
 struct btf_dump* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btf_dump*) ;
 struct btf_dump* FUNC_4 (int,int) ;
 void* FUNC_5 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

struct btf_dump *FUNC_6(const struct btf *VAR_3,
          const struct btf_ext *VAR_4,
          const struct btf_dump_opts *VAR_5,
          btf_dump_printf_fn_t VAR_6)
{
 struct btf_dump *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(1, sizeof(struct btf_dump));
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->btf = VAR_3;
 VAR_7->btf_ext = VAR_4;
 VAR_7->printf_fn = VAR_6;
 VAR_7->opts.ctx = VAR_5 ? VAR_5->ctx : ((void*)0);

 VAR_7->type_names = FUNC_5(VAR_2, VAR_1, ((void*)0));
 if (FUNC_1(VAR_7->type_names)) {
  VAR_8 = FUNC_2(VAR_7->type_names);
  VAR_7->type_names = ((void*)0);
  FUNC_3(VAR_7);
  return FUNC_0(VAR_8);
 }
 VAR_7->ident_names = FUNC_5(VAR_2, VAR_1, ((void*)0));
 if (FUNC_1(VAR_7->ident_names)) {
  VAR_8 = FUNC_2(VAR_7->ident_names);
  VAR_7->ident_names = ((void*)0);
  FUNC_3(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
