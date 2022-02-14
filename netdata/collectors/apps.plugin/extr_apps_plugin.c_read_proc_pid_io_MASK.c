
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_stat {scalar_t__ io_storage_bytes_written; scalar_t__ io_storage_bytes_read; scalar_t__ io_logical_bytes_written; scalar_t__ io_logical_bytes_read; int io_collected_usec; int last_io_collected_usec; int io_filename; int pid; } ;
struct TYPE_2__ {int ru_oublock; int ru_inblock; } ;
struct kinfo_proc {TYPE_1__ ki_rusage; } ;
typedef int procfile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (char*,int ,char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline int FUNC_9(struct pid_stat *VAR_6, void *VAR_7) {
    (void)VAR_7;



    static procfile *VAR_8 = ((void*)0);

    if(FUNC_8(!VAR_6->io_filename)) {
        char VAR_9[VAR_0 + 1];
        FUNC_5(VAR_9, VAR_0, "%s/proc/%d/io", VAR_5, VAR_6->pid);
        VAR_6->io_filename = FUNC_7(VAR_9);
    }


    VAR_8 = FUNC_4(VAR_8, VAR_6->io_filename, ((void*)0), VAR_1);
    if(FUNC_8(!VAR_8)) goto cleanup;

    VAR_8 = FUNC_3(VAR_8);
    if(FUNC_8(!VAR_8)) goto cleanup;


    VAR_2++;

    VAR_6->last_io_collected_usec = VAR_6->io_collected_usec;
    VAR_6->io_collected_usec = FUNC_0();





    FUNC_1(VAR_4, VAR_6->io_logical_bytes_read, FUNC_6(FUNC_2(VAR_8, 0, 1)));
    FUNC_1(VAR_4, VAR_6->io_logical_bytes_written, FUNC_6(FUNC_2(VAR_8, 1, 1)));


    FUNC_1(VAR_4, VAR_6->io_storage_bytes_read, FUNC_6(FUNC_2(VAR_8, 4, 1)));
    FUNC_1(VAR_4, VAR_6->io_storage_bytes_written, FUNC_6(FUNC_2(VAR_8, 5, 1)));



    if(FUNC_8(VAR_3 == 1)) {
        VAR_6->io_logical_bytes_read = 0;
        VAR_6->io_logical_bytes_written = 0;


        VAR_6->io_storage_bytes_read = 0;
        VAR_6->io_storage_bytes_written = 0;

    }

    return 1;


cleanup:
    VAR_6->io_logical_bytes_read = 0;
    VAR_6->io_logical_bytes_written = 0;


    VAR_6->io_storage_bytes_read = 0;
    VAR_6->io_storage_bytes_written = 0;

    return 0;

}
