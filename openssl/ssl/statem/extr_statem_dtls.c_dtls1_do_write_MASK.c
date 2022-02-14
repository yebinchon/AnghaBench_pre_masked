
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct hm_header_st {size_t msg_len; size_t frag_off; int seq; int type; } ;
struct TYPE_16__ {size_t init_off; size_t init_num; size_t max_send_fragment; scalar_t__ version; int msg_callback_arg; TYPE_1__* init_buf; int (* msg_callback ) (int,scalar_t__,int,int *,size_t,TYPE_3__*,int ) ;TYPE_2__* d1; int rwstate; int wbio; scalar_t__ enc_write_ctx; scalar_t__ write_hash; } ;
struct TYPE_15__ {size_t mtu; struct hm_header_st w_msg_hdr; int retransmitting; } ;
struct TYPE_14__ {int * data; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t FUNC_7 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,size_t,size_t) ;
 size_t FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int,int *,size_t,size_t*) ;
 int FUNC_14 (TYPE_3__*,unsigned char*) ;
 int FUNC_15 (size_t,unsigned char*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,unsigned char*) ;
 int FUNC_18 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_19 (int,scalar_t__,int,int *,size_t,TYPE_3__*,int ) ;

int FUNC_20(SSL *VAR_10, int VAR_11)
{
    int VAR_12;
    size_t VAR_13;
    size_t VAR_14;
    int VAR_15 = 1;
    size_t VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

    if (!FUNC_12(VAR_10))
        return -1;

    if (VAR_10->d1->mtu < FUNC_11(VAR_10))

        return -1;

    if (VAR_10->init_off == 0 && VAR_11 == VAR_6) {
        if (!FUNC_16(VAR_10->init_num ==
                         VAR_10->d1->w_msg_hdr.msg_len + VAR_2))
            return -1;
    }

    if (VAR_10->write_hash) {
        if (VAR_10->enc_write_ctx
            && (FUNC_6(FUNC_4(VAR_10->enc_write_ctx)) &
                VAR_5) != 0)
            VAR_18 = 0;
        else
            VAR_18 = FUNC_7(VAR_10->write_hash);
    } else
        VAR_18 = 0;

    if (VAR_10->enc_write_ctx &&
        (FUNC_5(VAR_10->enc_write_ctx) == VAR_4))
        VAR_19 = 2 * FUNC_3(VAR_10->enc_write_ctx);
    else
        VAR_19 = 0;

    VAR_17 = 0;
    VAR_10->rwstate = VAR_7;


    while (VAR_10->init_num > 0) {
        if (VAR_11 == VAR_6 && VAR_10->init_off != 0) {


            if (VAR_17 > 0) {


                if (VAR_10->init_off <= VAR_2) {







                    return -1;
                }





                VAR_10->init_off -= VAR_2;
                VAR_10->init_num += VAR_2;
            } else {






                VAR_17 = VAR_10->d1->w_msg_hdr.frag_off;
            }
        }

        VAR_20 = FUNC_2(VAR_10->wbio) + VAR_3
            + VAR_18 + VAR_19;
        if (VAR_10->d1->mtu > VAR_20)
            VAR_14 = VAR_10->d1->mtu - VAR_20;
        else
            VAR_14 = 0;

        if (VAR_14 <= VAR_2) {



            VAR_12 = FUNC_1(VAR_10->wbio);
            if (VAR_12 <= 0) {
                VAR_10->rwstate = VAR_9;
                return VAR_12;
            }
            VAR_20 = VAR_3 + VAR_18 + VAR_19;
            if (VAR_10->d1->mtu > VAR_20 + VAR_2) {
                VAR_14 = VAR_10->d1->mtu - VAR_20;
            } else {

                return -1;
            }
        }




        if (((unsigned int)VAR_10->init_num) > VAR_14)
            VAR_16 = VAR_14;
        else
            VAR_16 = VAR_10->init_num;

        if (VAR_16 > VAR_10->max_send_fragment)
            VAR_16 = VAR_10->max_send_fragment;




        if (VAR_11 == VAR_6) {
            if (VAR_16 < VAR_2) {




                return -1;
            }
            FUNC_10(VAR_10, VAR_17, VAR_16 - VAR_2);

            FUNC_14(VAR_10,
                                       (unsigned char *)&VAR_10->init_buf->
                                       data[VAR_10->init_off]);
        }

        VAR_12 = FUNC_13(VAR_10, VAR_11, &VAR_10->init_buf->data[VAR_10->init_off], VAR_16,
                                &VAR_13);
        if (VAR_12 < 0) {






            if (VAR_15 && FUNC_0(FUNC_9(VAR_10),
                                  VAR_0, 0, ((void*)0)) > 0) {
                if (!(FUNC_8(VAR_10) & VAR_8)) {
                    if (!FUNC_12(VAR_10))
                        return -1;

                    VAR_15 = 0;
                } else
                    return -1;
            } else {
                return -1;
            }
        } else {





            if (!FUNC_16(VAR_16 == VAR_13))
                return -1;

            if (VAR_11 == VAR_6 && !VAR_10->d1->retransmitting) {




                unsigned char *VAR_21 =
                    (unsigned char *)&VAR_10->init_buf->data[VAR_10->init_off];
                const struct hm_header_st *VAR_22 = &VAR_10->d1->w_msg_hdr;
                size_t VAR_23;

                if (VAR_17 == 0 && VAR_10->version != VAR_1) {




                    *VAR_21++ = VAR_22->type;
                    FUNC_15(VAR_22->msg_len, VAR_21);
                    FUNC_17(VAR_22->seq, VAR_21);
                    FUNC_15(0, VAR_21);
                    FUNC_15(VAR_22->msg_len, VAR_21);
                    VAR_21 -= VAR_2;
                    VAR_23 = VAR_13;
                } else {
                    VAR_21 += VAR_2;
                    VAR_23 = VAR_13 - VAR_2;
                }

                if (!FUNC_18(VAR_10, VAR_21, VAR_23))
                    return -1;
            }

            if (VAR_13 == VAR_10->init_num) {
                if (VAR_10->msg_callback)
                    VAR_10->msg_callback(1, VAR_10->version, VAR_11, VAR_10->init_buf->data,
                                    (size_t)(VAR_10->init_off + VAR_10->init_num), VAR_10,
                                    VAR_10->msg_callback_arg);

                VAR_10->init_off = 0;
                VAR_10->init_num = 0;

                return 1;
            }
            VAR_10->init_off += VAR_13;
            VAR_10->init_num -= VAR_13;
            VAR_13 -= VAR_2;
            VAR_17 += VAR_13;







            FUNC_10(VAR_10, VAR_17, 0);
        }
    }
    return 0;
}
