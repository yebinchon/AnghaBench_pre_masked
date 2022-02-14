
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef int uint32_t ;
typedef int timer ;
struct nn_msghdr {int msg_iovlen; void** msg_control; struct nn_iovec* msg_iov; void* msg_controllen; } ;
struct nn_iovec {void** iov_base; void* iov_len; } ;
typedef int hdr ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct nn_msghdr*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,struct nn_msghdr*,int ) ;
 int FUNC_7 (int,struct nn_msghdr*,int ) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_2 ;

void *FUNC_11 (void *VAR_3)
{
    int VAR_4 = (intptr_t)VAR_3;



    for (;;) {
        uint32_t VAR_5;
        int VAR_6;
        int VAR_7;
        uint8_t *VAR_8;
        void *VAR_9;
        struct nn_iovec VAR_10;
        struct nn_msghdr VAR_11;

        FUNC_2 (&VAR_11, 0, sizeof (VAR_11));
        VAR_9 = ((void*)0);
        VAR_10.iov_base = &VAR_8;
        VAR_10.iov_len = VAR_1;
        VAR_11.msg_iov = &VAR_10;
        VAR_11.msg_iovlen = 1;
        VAR_11.msg_control = &VAR_9;
        VAR_11.msg_controllen = VAR_1;

        VAR_6 = FUNC_6 (VAR_4, &VAR_11, 0);
        if (VAR_6 < 0) {
            if (FUNC_4 () == VAR_0) {
                return (((void*)0));
            }

            FUNC_0 (VAR_2, "nn_recv: %s\n", FUNC_8 (FUNC_4 ()));
            break;
        }

        if (VAR_6 != sizeof (uint32_t)) {
            FUNC_0 (VAR_2, "nn_recv: wanted %d, but got %d\n",
                (int) sizeof (uint32_t), VAR_6);
            FUNC_5 (VAR_8);
            FUNC_5 (VAR_9);
            continue;
        }

        FUNC_1 (&VAR_5, VAR_8, sizeof (VAR_5));
        FUNC_5 (VAR_8);


        FUNC_10 (((void*)0), 0, FUNC_9 (VAR_5));

        VAR_11.msg_iov = ((void*)0);
        VAR_11.msg_iovlen = 0;

        VAR_6 = FUNC_7 (VAR_4, &VAR_11, 0);
        if (VAR_6 < 0) {
            FUNC_0 (VAR_2, "nn_send: %s\n", FUNC_8 (FUNC_4 ()));
            FUNC_5 (VAR_9);
        }
    }




    FUNC_3 (VAR_4);
    return (((void*)0));
}
