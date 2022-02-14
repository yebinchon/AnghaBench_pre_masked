
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_stat {int status_vmsize; int status_vmrss; scalar_t__ status_rssshmem; scalar_t__ status_rssfile; scalar_t__ status_vmshared; scalar_t__ status_arl; int status_filename; int pid; int gid; int uid; scalar_t__ status_vmswap; } ;
struct kinfo_proc {int ki_size; int ki_rssize; int * ki_groups; int ki_uid; } ;
struct arl_callback_ptr {size_t line; int * ff; struct pid_stat* p; } ;
typedef int procfile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;
 int FUNC_3 (scalar_t__,char*,int ,struct arl_callback_ptr*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t,int) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,char*,int ) ;
 int FUNC_8 (char*,int ,char*,int ,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static inline int FUNC_11(struct pid_stat *VAR_12, void *VAR_13) {
    VAR_12->status_vmsize = 0;
    VAR_12->status_vmrss = 0;
    VAR_12->status_vmshared = 0;
    VAR_12->status_rssfile = 0;
    VAR_12->status_rssshmem = 0;
    VAR_12->status_vmswap = 0;
    (void)VAR_13;

    static struct arl_callback_ptr VAR_14;
    static procfile *VAR_15 = ((void*)0);

    if(FUNC_10(!VAR_12->status_arl)) {
        VAR_12->status_arl = FUNC_2("/proc/pid/status", ((void*)0), 60);
        FUNC_3(VAR_12->status_arl, "Uid", VAR_5, &VAR_14);
        FUNC_3(VAR_12->status_arl, "Gid", VAR_2, &VAR_14);
        FUNC_3(VAR_12->status_arl, "VmSize", VAR_7, &VAR_14);
        FUNC_3(VAR_12->status_arl, "VmRSS", VAR_6, &VAR_14);
        FUNC_3(VAR_12->status_arl, "RssFile", VAR_3, &VAR_14);
        FUNC_3(VAR_12->status_arl, "RssShmem", VAR_4, &VAR_14);
        FUNC_3(VAR_12->status_arl, "VmSwap", VAR_8, &VAR_14);
    }

    if(FUNC_10(!VAR_12->status_filename)) {
        char VAR_16[VAR_0 + 1];
        FUNC_8(VAR_16, VAR_0, "%s/proc/%d/status", VAR_10, VAR_12->pid);
        VAR_12->status_filename = FUNC_9(VAR_16);
    }

    VAR_15 = FUNC_7(VAR_15, VAR_12->status_filename, (!VAR_15)?" \t:,-()/":((void*)0), VAR_1);
    if(FUNC_10(!VAR_15)) return 0;

    VAR_15 = FUNC_6(VAR_15);
    if(FUNC_10(!VAR_15)) return 0;

    VAR_9++;


    VAR_14.p = VAR_12;
    VAR_14.ff = VAR_15;

    size_t VAR_17 = FUNC_4(VAR_15), VAR_18;
    FUNC_0(VAR_12->status_arl);

    for(VAR_18 = 0; VAR_18 < VAR_17 ;VAR_18++) {

        VAR_14.line = VAR_18;
        if(FUNC_10(FUNC_1(VAR_12->status_arl,
                FUNC_5(VAR_15, VAR_18, 0),
                FUNC_5(VAR_15, VAR_18, 1)))) break;
    }

    VAR_12->status_vmshared = VAR_12->status_rssfile + VAR_12->status_rssshmem;



    return 1;

}
