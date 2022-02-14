
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* runtime_mem; int mem_size; struct TYPE_5__* write_mem; struct TYPE_5__* os; struct TYPE_5__* arch; int nb_target_deps; int target_deps; int nb_files; int files; struct TYPE_5__* deps_outfile; struct TYPE_5__* outfile; struct TYPE_5__* fini_symbol; struct TYPE_5__* init_symbol; struct TYPE_5__* rpath; struct TYPE_5__* soname; struct TYPE_5__* tcc_lib_path; int nb_sysinclude_paths; int sysinclude_paths; int nb_include_paths; int include_paths; int nb_cached_includes; int cached_includes; int nb_crt_paths; int crt_paths; int nb_library_paths; int library_paths; } ;
typedef TYPE_1__ TCCState ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;

void FUNC_4(TCCState *VAR_0)
{
 FUNC_3 ();


 FUNC_0 (&VAR_0->library_paths, &VAR_0->nb_library_paths);
 FUNC_0 (&VAR_0->crt_paths, &VAR_0->nb_crt_paths);


 FUNC_0 (&VAR_0->cached_includes, &VAR_0->nb_cached_includes);
 FUNC_0 (&VAR_0->include_paths, &VAR_0->nb_include_paths);
 FUNC_0 (&VAR_0->sysinclude_paths, &VAR_0->nb_sysinclude_paths);

 FUNC_1 (VAR_0->tcc_lib_path);
 FUNC_1 (VAR_0->soname);
 FUNC_1 (VAR_0->rpath);
 FUNC_1 (VAR_0->init_symbol);
 FUNC_1 (VAR_0->fini_symbol);
 FUNC_1 (VAR_0->outfile);
 FUNC_1 (VAR_0->deps_outfile);
 FUNC_0 (&VAR_0->files, &VAR_0->nb_files);
 FUNC_0 (&VAR_0->target_deps, &VAR_0->nb_target_deps);


 FUNC_1 (VAR_0->arch);
 FUNC_1 (VAR_0->os);
 FUNC_1 (VAR_0);
}
