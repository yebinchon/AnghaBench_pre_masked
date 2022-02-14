
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_2__ {scalar_t__ msg_qbytes; scalar_t__ msg_cbytes; scalar_t__ msg_qnum; } ;
struct msqid_kernel {TYPE_1__ u; } ;
typedef int collected_number ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (char*,int*,struct msqid_kernel*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 struct msqid_kernel* FUNC_3 (struct msqid_kernel*,int) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(int VAR_6, usec_t VAR_7) {
    (void)VAR_7;
    static int VAR_8[3] = {0, 0, 0};
    struct ipc_msq {
        int msgmni;
        collected_number queues;
        collected_number messages;
        collected_number usedsize;
        collected_number allocsize;
    } VAR_9 = {0, 0, 0, 0, 0};

    if (FUNC_9(FUNC_0("kern.ipc.msgmni", VAR_8, VAR_9.msgmni))) {
        FUNC_2("DISABLED: system.ipc_msq_queues chart");
        FUNC_2("DISABLED: system.ipc_msq_messages chart");
        FUNC_2("DISABLED: system.ipc_msq_size chart");
        FUNC_2("DISABLED: kern.ipc.msg module");
        return 1;
    } else {
        static struct msqid_kernel *VAR_10 = ((void*)0);
        static int VAR_11 = 0;
        static int VAR_12[3] = {0, 0, 0};

        if (FUNC_9(VAR_9.msgmni != VAR_11)) {
            VAR_10 = FUNC_3(VAR_10, sizeof(struct msqid_kernel) * VAR_9.msgmni);
            VAR_11 = VAR_9.msgmni;
        }
        if (FUNC_9(
                FUNC_1("kern.ipc.msqids", VAR_12, VAR_10, sizeof(struct msqid_kernel) * VAR_9.msgmni))) {
            FUNC_2("DISABLED: system.ipc_msq_queues chart");
            FUNC_2("DISABLED: system.ipc_msq_messages chart");
            FUNC_2("DISABLED: system.ipc_msq_size chart");
            FUNC_2("DISABLED: kern.ipc.msg module");
            return 1;
        } else {
            int VAR_13;

            for (VAR_13 = 0; VAR_13 < VAR_9.msgmni; VAR_13++) {
                if (FUNC_9(VAR_10[VAR_13].u.msg_qbytes != 0)) {
                    VAR_9.queues += 1;
                    VAR_9.messages += VAR_10[VAR_13].u.msg_qnum;
                    VAR_9.usedsize += VAR_10[VAR_13].u.msg_cbytes;
                    VAR_9.allocsize += VAR_10[VAR_13].u.msg_qbytes;
                }
            }



            static RRDSET *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
            static RRDDIM *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);

            if (FUNC_9(!VAR_14)) {
                VAR_14 = FUNC_6(
                        "system",
                        "ipc_msq_queues",
                        ((void*)0),
                        "ipc message queues",
                        ((void*)0),
                        "Number of IPC Message Queues",
                        "queues",
                        "freebsd.plugin",
                        "kern.ipc.msq",
                        VAR_1,
                        VAR_6,
                        VAR_3
                );

                VAR_17 = FUNC_4(VAR_14, "queues", ((void*)0), 1, 1, VAR_5);
            }
            else FUNC_8(VAR_14);

            FUNC_5(VAR_14, VAR_17, VAR_9.queues);
            FUNC_7(VAR_14);



            if (FUNC_9(!VAR_15)) {
                VAR_15 = FUNC_6(
                        "system",
                        "ipc_msq_messages",
                        ((void*)0),
                        "ipc message queues",
                        ((void*)0),
                        "Number of Messages in IPC Message Queues",
                        "messages",
                        "freebsd.plugin",
                        "kern.ipc.msq",
                        VAR_0,
                        VAR_6,
                        VAR_3
                );

                VAR_18 = FUNC_4(VAR_15, "messages", ((void*)0), 1, 1, VAR_5);
            }
            else FUNC_8(VAR_15);

            FUNC_5(VAR_15, VAR_18, VAR_9.messages);
            FUNC_7(VAR_15);



            if (FUNC_9(!VAR_16)) {
                VAR_16 = FUNC_6(
                        "system",
                        "ipc_msq_size",
                        ((void*)0),
                        "ipc message queues",
                        ((void*)0),
                        "Size of IPC Message Queues",
                        "bytes",
                        "freebsd.plugin",
                        "kern.ipc.msq",
                        VAR_2,
                        VAR_6,
                        VAR_4
                );

                VAR_19 = FUNC_4(VAR_16, "allocated", ((void*)0), 1, 1, VAR_5);
                VAR_20 = FUNC_4(VAR_16, "used", ((void*)0), 1, 1, VAR_5);
            }
            else FUNC_8(VAR_16);

            FUNC_5(VAR_16, VAR_19, VAR_9.allocsize);
            FUNC_5(VAR_16, VAR_20, VAR_9.usedsize);
            FUNC_7(VAR_16);
        }
    }

    return 0;
}
