
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ssize_t ;
typedef int mstime_t ;
struct TYPE_2__ {scalar_t__ aof_fsync; scalar_t__ aof_fsync_offset; scalar_t__ aof_current_size; scalar_t__ unixtime; scalar_t__ aof_last_fsync; scalar_t__ aof_flush_postponed_start; scalar_t__ aof_last_write_status; int aof_fd; scalar_t__ aof_no_fsync_on_rewrite; int aof_buf; int aof_last_write_errno; scalar_t__ aof_flush_sleep; int aof_delayed_fsync; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int) ;
 TYPE_1__ VAR_9 ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__) ;

void FUNC_19(int VAR_10) {
    ssize_t VAR_11;
    int VAR_12 = 0;
    mstime_t VAR_13;

    if (FUNC_14(VAR_9.aof_buf) == 0) {





        if (VAR_9.aof_fsync == VAR_1 &&
            VAR_9.aof_fsync_offset != VAR_9.aof_current_size &&
            VAR_9.unixtime > VAR_9.aof_last_fsync &&
            !(VAR_12 = FUNC_0())) {
            goto try_fsync;
        } else {
            return;
        }
    }

    if (VAR_9.aof_fsync == VAR_1)
        VAR_12 = FUNC_0();

    if (VAR_9.aof_fsync == VAR_1 && !VAR_10) {



        if (VAR_12) {
            if (VAR_9.aof_flush_postponed_start == 0) {


                VAR_9.aof_flush_postponed_start = VAR_9.unixtime;
                return;
            } else if (VAR_9.unixtime - VAR_9.aof_flush_postponed_start < 2) {


                return;
            }


            VAR_9.aof_delayed_fsync++;
            FUNC_16(VAR_6,"Asynchronous AOF fsync is taking too long (disk is busy?). Writing the AOF buffer without waiting for fsync to complete, this may slow down Redis.");
        }
    }






    if (VAR_9.aof_flush_sleep && FUNC_14(VAR_9.aof_buf)) {
        FUNC_18(VAR_9.aof_flush_sleep);
    }

    FUNC_8(VAR_13);
    VAR_11 = FUNC_1(VAR_9.aof_fd,VAR_9.aof_buf,FUNC_14(VAR_9.aof_buf));
    FUNC_7(VAR_13);





    if (VAR_12) {
        FUNC_6("aof-write-pending-fsync",VAR_13);
    } else if (FUNC_5()) {
        FUNC_6("aof-write-active-child",VAR_13);
    } else {
        FUNC_6("aof-write-alone",VAR_13);
    }
    FUNC_6("aof-write",VAR_13);


    VAR_9.aof_flush_postponed_start = 0;

    if (VAR_11 != (ssize_t)FUNC_14(VAR_9.aof_buf)) {
        static time_t VAR_14 = 0;
        int VAR_15 = 0;


        if ((VAR_9.unixtime - VAR_14) > VAR_2) {
            VAR_15 = 1;
            VAR_14 = VAR_9.unixtime;
        }


        if (VAR_11 == -1) {
            if (VAR_15) {
                FUNC_16(VAR_7,"Error writing to the AOF file: %s",
                    FUNC_17(VAR_8));
                VAR_9.aof_last_write_errno = VAR_8;
            }
        } else {
            if (VAR_15) {
                FUNC_16(VAR_7,"Short write while writing to "
                                       "the AOF file: (nwritten=%lld, "
                                       "expected=%lld)",
                                       (long long)VAR_11,
                                       (long long)FUNC_14(VAR_9.aof_buf));
            }

            if (FUNC_4(VAR_9.aof_fd, VAR_9.aof_current_size) == -1) {
                if (VAR_15) {
                    FUNC_16(VAR_7, "Could not remove short write "
                             "from the append-only file.  Redis may refuse "
                             "to load the AOF the next time it starts.  "
                             "ftruncate: %s", FUNC_17(VAR_8));
                }
            } else {


                VAR_11 = -1;
            }
            VAR_9.aof_last_write_errno = VAR_5;
        }


        if (VAR_9.aof_fsync == VAR_0) {




            FUNC_16(VAR_7,"Can't recover from AOF write error when the AOF fsync policy is 'always'. Exiting...");
            FUNC_3(1);
        } else {



            VAR_9.aof_last_write_status = VAR_3;



            if (VAR_11 > 0) {
                VAR_9.aof_current_size += VAR_11;
                FUNC_15(VAR_9.aof_buf,VAR_11,-1);
            }
            return;
        }
    } else {


        if (VAR_9.aof_last_write_status == VAR_3) {
            FUNC_16(VAR_7,
                "AOF write error looks solved, Redis can write again.");
            VAR_9.aof_last_write_status = VAR_4;
        }
    }
    VAR_9.aof_current_size += VAR_11;



    if ((FUNC_14(VAR_9.aof_buf)+FUNC_10(VAR_9.aof_buf)) < 4000) {
        FUNC_11(VAR_9.aof_buf);
    } else {
        FUNC_13(VAR_9.aof_buf);
        VAR_9.aof_buf = FUNC_12();
    }

try_fsync:


    if (VAR_9.aof_no_fsync_on_rewrite && FUNC_5())
        return;


    if (VAR_9.aof_fsync == VAR_0) {


        FUNC_8(VAR_13);
        FUNC_9(VAR_9.aof_fd);
        FUNC_7(VAR_13);
        FUNC_6("aof-fsync-always",VAR_13);
        VAR_9.aof_fsync_offset = VAR_9.aof_current_size;
        VAR_9.aof_last_fsync = VAR_9.unixtime;
    } else if ((VAR_9.aof_fsync == VAR_1 &&
                VAR_9.unixtime > VAR_9.aof_last_fsync)) {
        if (!VAR_12) {
            FUNC_2(VAR_9.aof_fd);
            VAR_9.aof_fsync_offset = VAR_9.aof_current_size;
        }
        VAR_9.aof_last_fsync = VAR_9.unixtime;
    }
}
