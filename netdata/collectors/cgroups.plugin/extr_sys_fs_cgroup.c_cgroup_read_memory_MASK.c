
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memory {scalar_t__ enabled_detailed; scalar_t__ delay_counter_detailed; int updated_detailed; int detailed_has_dirty; int detailed_has_swap; int updated_usage_in_bytes; scalar_t__ enabled_usage_in_bytes; int updated_msw_usage_in_bytes; scalar_t__ enabled_msw_usage_in_bytes; scalar_t__ enabled_failcnt; scalar_t__ delay_counter_failcnt; int updated_failcnt; scalar_t__ failcnt; int filename_failcnt; scalar_t__ msw_usage_in_bytes; int filename_msw_usage_in_bytes; scalar_t__ usage_in_bytes; int filename_usage_in_bytes; scalar_t__ total_pgmajfault; scalar_t__ total_pgfault; scalar_t__ anon_thp; scalar_t__ total_writeback; scalar_t__ sock; scalar_t__ slab; scalar_t__ kernel_stack; scalar_t__ total_dirty; scalar_t__ anon; scalar_t__ total_pgpgout; scalar_t__ total_pgpgin; scalar_t__ total_swap; scalar_t__ total_mapped_file; scalar_t__ total_rss_huge; scalar_t__ total_rss; scalar_t__ total_cache; TYPE_2__* arl_swap; TYPE_1__* arl_dirty; void* arl_base; int filename_detailed; } ;
typedef int procfile ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (char*,int *,int) ;
 void* FUNC_3 (void*,char*,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long,int) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ,int *,int ) ;
 int FUNC_10 (int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static inline void FUNC_12(struct memory *VAR_8, char VAR_9) {
    static procfile *VAR_10 = ((void*)0);


    if(FUNC_5(VAR_8->filename_detailed)) {
        if(FUNC_11(VAR_8->enabled_detailed == VAR_1 && VAR_8->delay_counter_detailed > 0)) {
            VAR_8->delay_counter_detailed--;
            goto memory_next;
        }

        VAR_10 = FUNC_9(VAR_10, VAR_8->filename_detailed, ((void*)0), VAR_3);
        if(FUNC_11(!VAR_10)) {
            VAR_8->updated_detailed = 0;
            VAR_6 = 1;
            goto memory_next;
        }

        VAR_10 = FUNC_8(VAR_10);
        if(FUNC_11(!VAR_10)) {
            VAR_8->updated_detailed = 0;
            VAR_6 = 1;
            goto memory_next;
        }

        unsigned long VAR_11, VAR_12 = FUNC_6(VAR_10);

        if(FUNC_11(VAR_12 < 1)) {
            FUNC_4("CGROUP: file '%s' should have 1+ lines.", VAR_8->filename_detailed);
            VAR_8->updated_detailed = 0;
            goto memory_next;
        }


        if(FUNC_11(!VAR_8->arl_base)) {
            if(VAR_9 == 0){
                VAR_8->arl_base = FUNC_2("cgroup/memory", ((void*)0), 60);

                FUNC_3(VAR_8->arl_base, "total_cache", &VAR_8->total_cache);
                FUNC_3(VAR_8->arl_base, "total_rss", &VAR_8->total_rss);
                FUNC_3(VAR_8->arl_base, "total_rss_huge", &VAR_8->total_rss_huge);
                FUNC_3(VAR_8->arl_base, "total_mapped_file", &VAR_8->total_mapped_file);
                FUNC_3(VAR_8->arl_base, "total_writeback", &VAR_8->total_writeback);
                VAR_8->arl_dirty = FUNC_3(VAR_8->arl_base, "total_dirty", &VAR_8->total_dirty);
                VAR_8->arl_swap = FUNC_3(VAR_8->arl_base, "total_swap", &VAR_8->total_swap);
                FUNC_3(VAR_8->arl_base, "total_pgpgin", &VAR_8->total_pgpgin);
                FUNC_3(VAR_8->arl_base, "total_pgpgout", &VAR_8->total_pgpgout);
                FUNC_3(VAR_8->arl_base, "total_pgfault", &VAR_8->total_pgfault);
                FUNC_3(VAR_8->arl_base, "total_pgmajfault", &VAR_8->total_pgmajfault);
            } else {
                VAR_8->arl_base = FUNC_2("cgroup/memory", ((void*)0), 60);

                FUNC_3(VAR_8->arl_base, "anon", &VAR_8->anon);
                FUNC_3(VAR_8->arl_base, "kernel_stack", &VAR_8->kernel_stack);
                FUNC_3(VAR_8->arl_base, "slab", &VAR_8->slab);
                FUNC_3(VAR_8->arl_base, "sock", &VAR_8->sock);
                FUNC_3(VAR_8->arl_base, "anon_thp", &VAR_8->anon_thp);
                FUNC_3(VAR_8->arl_base, "file", &VAR_8->total_mapped_file);
                FUNC_3(VAR_8->arl_base, "file_writeback", &VAR_8->total_writeback);
                VAR_8->arl_dirty = FUNC_3(VAR_8->arl_base, "file_dirty", &VAR_8->total_dirty);
                FUNC_3(VAR_8->arl_base, "pgfault", &VAR_8->total_pgfault);
                FUNC_3(VAR_8->arl_base, "pgmajfault", &VAR_8->total_pgmajfault);
            }
        }

        FUNC_0(VAR_8->arl_base);

        for(VAR_11 = 0; VAR_11 < VAR_12 ; VAR_11++) {
            if(FUNC_1(VAR_8->arl_base,
                    FUNC_7(VAR_10, VAR_11, 0),
                    FUNC_7(VAR_10, VAR_11, 1))) break;
        }

        if(FUNC_11(VAR_8->arl_dirty->flags & VAR_0))
            VAR_8->detailed_has_dirty = 1;

        if(FUNC_11(VAR_9 == 0 && VAR_8->arl_swap->flags & VAR_0))
            VAR_8->detailed_has_swap = 1;



        VAR_8->updated_detailed = 1;

        if(FUNC_11(VAR_8->enabled_detailed == VAR_1)) {
            if(( (!VAR_9) && ( VAR_8->total_cache || VAR_8->total_dirty || VAR_8->total_rss || VAR_8->total_rss_huge || VAR_8->total_mapped_file || VAR_8->total_writeback
                    || VAR_8->total_swap || VAR_8->total_pgpgin || VAR_8->total_pgpgout || VAR_8->total_pgfault || VAR_8->total_pgmajfault))
               || (VAR_9 && ( VAR_8->anon || VAR_8->total_dirty || VAR_8->kernel_stack || VAR_8->slab || VAR_8->sock || VAR_8->total_writeback
                    || VAR_8->anon_thp || VAR_8->total_pgfault || VAR_8->total_pgmajfault))
               || VAR_7 == VAR_2)
                VAR_8->enabled_detailed = VAR_2;
            else
                VAR_8->delay_counter_detailed = VAR_4;
        }
    }

memory_next:


    if(FUNC_5(VAR_8->filename_usage_in_bytes)) {
        VAR_8->updated_usage_in_bytes = !FUNC_10(VAR_8->filename_usage_in_bytes, &VAR_8->usage_in_bytes);
        if(FUNC_11(VAR_8->updated_usage_in_bytes && VAR_8->enabled_usage_in_bytes == VAR_1 &&
                    (VAR_8->usage_in_bytes || VAR_7 == VAR_2)))
            VAR_8->enabled_usage_in_bytes = VAR_2;
    }


    if(FUNC_5(VAR_8->filename_msw_usage_in_bytes)) {
        VAR_8->updated_msw_usage_in_bytes = !FUNC_10(VAR_8->filename_msw_usage_in_bytes, &VAR_8->msw_usage_in_bytes);
        if(FUNC_11(VAR_8->updated_msw_usage_in_bytes && VAR_8->enabled_msw_usage_in_bytes == VAR_1 &&
                    (VAR_8->msw_usage_in_bytes || VAR_7 == VAR_2)))
            VAR_8->enabled_msw_usage_in_bytes = VAR_2;
    }


    if(FUNC_5(VAR_8->filename_failcnt)) {
        if(FUNC_11(VAR_8->enabled_failcnt == VAR_1 && VAR_8->delay_counter_failcnt > 0)) {
            VAR_8->updated_failcnt = 0;
            VAR_8->delay_counter_failcnt--;
        }
        else {
            VAR_8->updated_failcnt = !FUNC_10(VAR_8->filename_failcnt, &VAR_8->failcnt);
            if(FUNC_11(VAR_8->updated_failcnt && VAR_8->enabled_failcnt == VAR_1)) {
                if(FUNC_11(VAR_8->failcnt || VAR_7 == VAR_2))
                    VAR_8->enabled_failcnt = VAR_2;
                else
                    VAR_8->delay_counter_failcnt = VAR_5;
            }
        }
    }
}
