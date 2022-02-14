
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct r_bin_mdmp_obj* misc_info_1; } ;
struct TYPE_4__ {int memories; } ;
struct TYPE_6__ {TYPE_2__ misc_info; struct r_bin_mdmp_obj* function_table; struct r_bin_mdmp_obj* handle_data; struct r_bin_mdmp_obj* comments_w; struct r_bin_mdmp_obj* comments_a; struct r_bin_mdmp_obj* system_info; struct r_bin_mdmp_obj* exception; int unloaded_modules; int token_infos; int threads; int thread_infos; int operations; int modules; int memory_infos; TYPE_1__ memories64; int memories; int ex_threads; } ;
struct r_bin_mdmp_obj {int * b; struct r_bin_mdmp_obj* hdr; int pe64_bins; int pe32_bins; TYPE_3__ streams; } ;


 int FUNC_0 (struct r_bin_mdmp_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct r_bin_mdmp_obj *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_2 (VAR_0->streams.ex_threads);
 FUNC_2 (VAR_0->streams.memories);
 FUNC_2 (VAR_0->streams.memories64.memories);
 FUNC_2 (VAR_0->streams.memory_infos);
 FUNC_2 (VAR_0->streams.modules);
 FUNC_2 (VAR_0->streams.operations);
 FUNC_2 (VAR_0->streams.thread_infos);
 FUNC_2 (VAR_0->streams.threads);
 FUNC_2 (VAR_0->streams.token_infos);
 FUNC_2 (VAR_0->streams.unloaded_modules);
 FUNC_0 (VAR_0->streams.exception);
 FUNC_0 (VAR_0->streams.system_info);
 FUNC_0 (VAR_0->streams.comments_a);
 FUNC_0 (VAR_0->streams.comments_w);
 FUNC_0 (VAR_0->streams.handle_data);
 FUNC_0 (VAR_0->streams.function_table);
 FUNC_0 (VAR_0->streams.misc_info.misc_info_1);

 FUNC_2 (VAR_0->pe32_bins);
 FUNC_2 (VAR_0->pe64_bins);

 FUNC_1 (VAR_0->b);
 FUNC_0 (VAR_0->hdr);
 VAR_0->b = ((void*)0);
 FUNC_0 (VAR_0);

 return;
}
