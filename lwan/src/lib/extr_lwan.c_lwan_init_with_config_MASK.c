
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lwan_config {int dummy; } ;
struct TYPE_3__ {int count; unsigned int max_fd; } ;
struct TYPE_4__ {int n_threads; void* config_file_path; void* listener; } ;
struct lwan {int n_cpus; TYPE_1__ thread; TYPE_2__ config; } ;
typedef scalar_t__ rlim_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lwan*,size_t) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct lwan*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct lwan*) ;
 int FUNC_8 (struct lwan*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,unsigned int) ;
 int FUNC_11 (struct lwan*) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 () ;
 int FUNC_14 (struct lwan*) ;
 int FUNC_15 (TYPE_2__*,struct lwan_config const*,int) ;
 int FUNC_16 (struct lwan*,int ,int) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct lwan*,struct lwan_config const*) ;

void FUNC_20(struct lwan *VAR_2, const struct lwan_config *VAR_3)
{

    FUNC_16(VAR_2, 0, sizeof(*VAR_2));
    FUNC_15(&VAR_2->config, VAR_3, sizeof(*VAR_3));
    VAR_2->config.listener = FUNC_1(VAR_2->config.listener);
    VAR_2->config.config_file_path = FUNC_1(VAR_2->config.config_file_path);



    FUNC_11(VAR_2);




    FUNC_5();
    FUNC_13();

    FUNC_19(VAR_2, VAR_3);

    FUNC_7(VAR_2);


    FUNC_9("Initializing lwan web server");

    VAR_2->n_cpus = FUNC_2();
    if (!VAR_2->config.n_threads) {
        VAR_2->thread.count = VAR_2->n_cpus;
        if (VAR_2->thread.count == 1)
            VAR_2->thread.count = 2;
    } else if (VAR_2->config.n_threads > 3 * VAR_2->n_cpus) {
        VAR_2->thread.count = (short unsigned int)(VAR_2->n_cpus * 3);

        FUNC_12("%d threads requested, but only %d online CPUs; "
                            "capping to %d threads",
                            VAR_2->config.n_threads, VAR_2->n_cpus, 3 * VAR_2->n_cpus);
    } else if (VAR_2->config.n_threads > 255) {
        VAR_2->thread.count = 256;

        FUNC_12("%d threads requested, but max 256 supported",
            VAR_2->config.n_threads);
    } else {
        VAR_2->thread.count = VAR_2->config.n_threads;
    }

    rlim_t VAR_4 = FUNC_17();
    FUNC_0(VAR_2, (size_t)VAR_4);

    VAR_2->thread.max_fd = (unsigned)VAR_4 / (unsigned)VAR_2->thread.count;
    FUNC_10("Using %d threads, maximum %d sockets per thread",
                     VAR_2->thread.count, VAR_2->thread.max_fd);

    FUNC_18(VAR_0, VAR_1);

    FUNC_6();
    FUNC_14(VAR_2);
    FUNC_8(VAR_2);
    FUNC_4();
    FUNC_3(VAR_2);
}
