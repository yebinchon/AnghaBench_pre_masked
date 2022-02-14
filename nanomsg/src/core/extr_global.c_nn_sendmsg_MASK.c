
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nn_sock {int dummy; } ;
struct nn_msghdr {int msg_iovlen; unsigned char* msg_control; scalar_t__ msg_controllen; struct nn_iovec* msg_iov; } ;
struct nn_msg {int body; int sphdr; int hdrs; } ;
struct nn_iovec {scalar_t__ iov_len; unsigned char* iov_base; } ;
struct nn_cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; size_t cmsg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (struct nn_cmsghdr*) ;
 struct nn_cmsghdr* FUNC_1 (struct nn_msghdr const*) ;
 struct nn_cmsghdr* FUNC_2 (struct nn_msghdr const*,struct nn_cmsghdr*) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 size_t FUNC_5 (void*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nn_sock**,int) ;
 int FUNC_11 (struct nn_sock*) ;
 int FUNC_12 (struct nn_msg*,size_t) ;
 int FUNC_13 (struct nn_msg*,void*) ;
 int FUNC_14 (struct nn_msg*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct nn_sock*,struct nn_msg*,int) ;
 int FUNC_17 (struct nn_sock*,int ,size_t) ;

int FUNC_18 (int VAR_9, const struct nn_msghdr *VAR_10, int VAR_11)
{
    int VAR_12;
    size_t VAR_13;
    size_t VAR_14;
    int VAR_15;
    struct nn_iovec *VAR_16;
    struct nn_msg VAR_17;
    void *VAR_18;
    int VAR_19;
    struct nn_cmsghdr *VAR_20;
    struct nn_sock *VAR_21;

    VAR_12 = FUNC_10 (&VAR_21, VAR_9);
    if (FUNC_15 (VAR_12 < 0)) {
        VAR_8 = -VAR_12;
        return -1;
    }

    if (FUNC_15 (!VAR_10)) {
        VAR_12 = -VAR_1;
        goto fail;
    }

    if (FUNC_15 (VAR_10->msg_iovlen < 0)) {
        VAR_12 = -VAR_2;
        goto fail;
    }

    if (VAR_10->msg_iovlen == 1 && VAR_10->msg_iov [0].iov_len == VAR_3) {
        VAR_18 = *(void**) VAR_10->msg_iov [0].iov_base;
        if (FUNC_15 (VAR_18 == ((void*)0))) {
            VAR_12 = -VAR_0;
            goto fail;
        }
        VAR_13 = FUNC_5 (VAR_18);
        FUNC_13 (&VAR_17, VAR_18);
        VAR_19 = 1;
    }
    else {


        VAR_13 = 0;
        for (VAR_15 = 0; VAR_15 != VAR_10->msg_iovlen; ++VAR_15) {
            VAR_16 = &VAR_10->msg_iov [VAR_15];
            if (FUNC_15 (VAR_16->iov_len == VAR_3)) {
               VAR_12 = -VAR_1;
               goto fail;
            }
            if (FUNC_15 (!VAR_16->iov_base && VAR_16->iov_len)) {
                VAR_12 = -VAR_0;
                goto fail;
            }
            if (FUNC_15 (VAR_13 + VAR_16->iov_len < VAR_13)) {
                VAR_12 = -VAR_1;
                goto fail;
            }
            VAR_13 += VAR_16->iov_len;
        }


        FUNC_12 (&VAR_17, VAR_13);
        VAR_13 = 0;
        for (VAR_15 = 0; VAR_15 != VAR_10->msg_iovlen; ++VAR_15) {
            VAR_16 = &VAR_10->msg_iov [VAR_15];
            FUNC_4 (((uint8_t*) FUNC_6 (&VAR_17.body)) + VAR_13,
                VAR_16->iov_base, VAR_16->iov_len);
            VAR_13 += VAR_16->iov_len;
        }

        VAR_19 = 0;
    }


    if (VAR_10->msg_control) {



        if (VAR_10->msg_controllen == VAR_3) {
            VAR_18 = *((void**) VAR_10->msg_control);
            FUNC_9 (&VAR_17.hdrs);
            FUNC_8 (&VAR_17.hdrs, VAR_18);
        }
        else {
            FUNC_9 (&VAR_17.hdrs);
            FUNC_7 (&VAR_17.hdrs, VAR_10->msg_controllen);
            FUNC_4 (FUNC_6 (&VAR_17.hdrs),
                VAR_10->msg_control, VAR_10->msg_controllen);
        }


        VAR_20 = FUNC_1 (VAR_10);
        while (VAR_20) {
            if (VAR_20->cmsg_level == VAR_6 && VAR_20->cmsg_type == VAR_7) {
                unsigned char *VAR_22 = FUNC_0 (VAR_20);
                size_t VAR_23 = VAR_20->cmsg_len - FUNC_3 (0);
                if (VAR_23 > sizeof (size_t)) {
                    VAR_14 = *(size_t *)(void *)VAR_22;
                    if (VAR_14 <= (VAR_23 - sizeof (size_t))) {

                        FUNC_9 (&VAR_17.sphdr);
                        FUNC_7 (&VAR_17.sphdr, VAR_14);
                         FUNC_4 (FUNC_6 (&VAR_17.sphdr),
                             VAR_22 + sizeof (size_t), VAR_14);
                    }
                }
                break;
            }
            VAR_20 = FUNC_2 (VAR_10, VAR_20);
        }
    }


    VAR_12 = FUNC_16 (VAR_21, &VAR_17, VAR_11);
    if (FUNC_15 (VAR_12 < 0)) {



        if (VAR_19)
            FUNC_7 (&VAR_17.body, 0);

        FUNC_14 (&VAR_17);
        goto fail;
    }


    FUNC_17 (VAR_21, VAR_5, 1);
    FUNC_17 (VAR_21, VAR_4, VAR_13);

    FUNC_11 (VAR_21);

    return (int) VAR_13;

fail:
    FUNC_11 (VAR_21);

    VAR_8 = -VAR_12;
    return -1;
}
