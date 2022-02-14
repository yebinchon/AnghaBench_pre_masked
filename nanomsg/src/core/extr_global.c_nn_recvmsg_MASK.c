
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nn_sock {int dummy; } ;
struct nn_msghdr {int msg_iovlen; scalar_t__ msg_controllen; void* msg_control; struct nn_iovec* msg_iov; } ;
struct nn_msg {int hdrs; int sphdr; int body; } ;
struct nn_iovec {scalar_t__ iov_len; char* iov_base; } ;
struct nn_cmsghdr {size_t cmsg_len; int cmsg_type; int cmsg_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int *,size_t) ;
 int FUNC_3 (size_t,int ,void**) ;
 size_t FUNC_4 (void*) ;
 int * FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (struct nn_sock**,int) ;
 int FUNC_9 (struct nn_sock*) ;
 int FUNC_10 (struct nn_msg*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct nn_sock*,struct nn_msg*,int) ;
 int FUNC_13 (struct nn_sock*,int ,size_t) ;

int FUNC_14 (int VAR_8, struct nn_msghdr *VAR_9, int VAR_10)
{
    int VAR_11;
    struct nn_msg VAR_12;
    uint8_t *VAR_13;
    size_t VAR_14;
    int VAR_15;
    struct nn_iovec *VAR_16;
    void *VAR_17;
    size_t VAR_18;
    void *VAR_19;
    size_t VAR_20;
    size_t VAR_21;
    size_t VAR_22;
    struct nn_cmsghdr *VAR_23;
    struct nn_sock *VAR_24;

    VAR_11 = FUNC_8 (&VAR_24, VAR_8);
    if (FUNC_11 (VAR_11 < 0)) {
        VAR_7 = -VAR_11;
        return -1;
    }

    if (FUNC_11 (!VAR_9)) {
        VAR_11 = -VAR_0;
        goto fail;
    }

    if (FUNC_11 (VAR_9->msg_iovlen < 0)) {
        VAR_11 = -VAR_1;
        goto fail;
    }


    VAR_11 = FUNC_12 (VAR_24, &VAR_12, VAR_10);
    if (FUNC_11 (VAR_11 < 0)) {
        goto fail;
    }

    if (VAR_9->msg_iovlen == 1 && VAR_9->msg_iov [0].iov_len == VAR_2) {
        VAR_17 = FUNC_6 (&VAR_12.body);
        *(void**) (VAR_9->msg_iov [0].iov_base) = VAR_17;
        VAR_14 = FUNC_4 (VAR_17);
    }
    else {


        VAR_13 = FUNC_5 (&VAR_12.body);
        VAR_14 = FUNC_7 (&VAR_12.body);
        for (VAR_15 = 0; VAR_15 != VAR_9->msg_iovlen; ++VAR_15) {
            VAR_16 = &VAR_9->msg_iov [VAR_15];
            if (FUNC_11 (VAR_16->iov_len == VAR_2)) {
                FUNC_10 (&VAR_12);
                VAR_11 = -VAR_0;
                goto fail;
            }
            if (VAR_16->iov_len > VAR_14) {
                FUNC_2 (VAR_16->iov_base, VAR_13, VAR_14);
                break;
            }
            FUNC_2 (VAR_16->iov_base, VAR_13, VAR_16->iov_len);
            VAR_13 += VAR_16->iov_len;
            VAR_14 -= VAR_16->iov_len;
        }
        VAR_14 = FUNC_7 (&VAR_12.body);
    }


    if (VAR_9->msg_control) {

        VAR_21 = FUNC_7 (&VAR_12.sphdr);
        VAR_22 = FUNC_0 (VAR_21+sizeof (size_t));
        VAR_20 = VAR_22 + FUNC_7 (&VAR_12.hdrs);

        if (VAR_9->msg_controllen == VAR_2) {


            VAR_11 = FUNC_3 (VAR_20, 0, &VAR_19);
            FUNC_1 (VAR_11 == 0, -VAR_11);


            *((void**) VAR_9->msg_control) = VAR_19;
        }
        else {


            VAR_19 = VAR_9->msg_control;
            VAR_20 = VAR_9->msg_controllen;
        }



        if (VAR_20 >= VAR_22) {
            char *VAR_25;


            VAR_23 = (struct nn_cmsghdr*) VAR_19;
            VAR_23->cmsg_len = VAR_22;
            VAR_23->cmsg_level = VAR_5;
            VAR_23->cmsg_type = VAR_6;
            VAR_25 = (void *)VAR_23;
            VAR_25 += sizeof (*VAR_23);
            *(size_t *)(void *)VAR_25 = VAR_21;
            VAR_25 += sizeof (size_t);
            FUNC_2 (VAR_25, FUNC_5 (&VAR_12.sphdr), VAR_21);



            VAR_18 = FUNC_7 (&VAR_12.hdrs);
            if (VAR_18 > VAR_20 - VAR_22)
                VAR_18 = VAR_20 - VAR_22;
            FUNC_2 (((char*) VAR_19) + VAR_22,
                FUNC_5 (&VAR_12.hdrs), VAR_18);
        }
    }

    FUNC_10 (&VAR_12);


    FUNC_13 (VAR_24, VAR_4, 1);
    FUNC_13 (VAR_24, VAR_3, VAR_14);

    FUNC_9 (VAR_24);

    return (int) VAR_14;

fail:
    FUNC_9 (VAR_24);

    VAR_7 = -VAR_11;
    return -1;
}
