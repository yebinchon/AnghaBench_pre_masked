
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int message_type; size_t message_size; } ;
struct TYPE_14__ {int flags; TYPE_3__ tmp; } ;
struct TYPE_12__ {scalar_t__ hand_state; } ;
struct TYPE_16__ {size_t init_num; TYPE_5__* init_buf; scalar_t__ init_msg; TYPE_4__ s3; int rlayer; int msg_callback_arg; int version; int (* msg_callback ) (int ,int ,int,unsigned char*,size_t,TYPE_6__*,int ) ;TYPE_2__ statem; int server; int rwstate; TYPE_1__* method; } ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_11__ {int (* ssl_read_bytes ) (TYPE_6__*,int,int*,unsigned char*,size_t,int ,size_t*) ;} ;
typedef TYPE_6__ SSL ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (unsigned char*,size_t) ;
 int FUNC_4 (TYPE_6__*,int,int*,unsigned char*,size_t,int ,size_t*) ;
 int FUNC_5 (int ,int ,int,unsigned char*,size_t,TYPE_6__*,int ) ;

int FUNC_6(SSL *VAR_17, int *VAR_18)
{

    int VAR_19, VAR_20, VAR_21;
    unsigned char *VAR_22;
    size_t VAR_23, VAR_24;

    VAR_22 = (unsigned char *)VAR_17->init_buf->data;

    do {
        while (VAR_17->init_num < VAR_1) {
            VAR_20 = VAR_17->method->ssl_read_bytes(VAR_17, VAR_6, &VAR_21,
                                          &VAR_22[VAR_17->init_num],
                                          VAR_1 - VAR_17->init_num,
                                          0, &VAR_24);
            if (VAR_20 <= 0) {
                VAR_17->rwstate = VAR_10;
                return 0;
            }
            if (VAR_21 == VAR_5) {




                if (VAR_17->init_num != 0 || VAR_24 != 1 || VAR_22[0] != VAR_2) {
                    FUNC_2(VAR_17, VAR_8,
                             VAR_9,
                             VAR_11);
                    return 0;
                }
                if (VAR_17->statem.hand_state == VAR_15
                        && (VAR_17->s3.flags & VAR_14) != 0) {







                    return 0;
                }
                VAR_17->s3.tmp.message_type = *VAR_18 = VAR_3;
                VAR_17->init_num = VAR_24 - 1;
                VAR_17->init_msg = VAR_17->init_buf->data;
                VAR_17->s3.tmp.message_size = VAR_24;
                return 1;
            } else if (VAR_21 != VAR_6) {
                FUNC_2(VAR_17, VAR_8,
                         VAR_9,
                         VAR_12);
                return 0;
            }
            VAR_17->init_num += VAR_24;
        }

        VAR_19 = 0;
        if (!VAR_17->server)
            if (VAR_17->statem.hand_state != VAR_16
                    && VAR_22[0] == VAR_4)






                if (VAR_22[1] == 0 && VAR_22[2] == 0 && VAR_22[3] == 0) {
                    VAR_17->init_num = 0;
                    VAR_19 = 1;

                    if (VAR_17->msg_callback)
                        VAR_17->msg_callback(0, VAR_17->version, VAR_6,
                                        VAR_22, VAR_1, VAR_17,
                                        VAR_17->msg_callback_arg);
                }
    } while (VAR_19);


    *VAR_18 = *VAR_22;
    VAR_17->s3.tmp.message_type = *(VAR_22++);

    if (FUNC_1(&VAR_17->rlayer)) {







        VAR_23 = FUNC_0(&VAR_17->rlayer)
            + VAR_1;
        VAR_17->s3.tmp.message_size = VAR_23;

        VAR_17->init_msg = VAR_17->init_buf->data;
        VAR_17->init_num = VAR_1;
    } else {
        FUNC_3(VAR_22, VAR_23);

        if (VAR_23 > (VAR_0 - VAR_1)) {
            FUNC_2(VAR_17, VAR_7, VAR_9,
                     VAR_13);
            return 0;
        }
        VAR_17->s3.tmp.message_size = VAR_23;

        VAR_17->init_msg = VAR_17->init_buf->data + VAR_1;
        VAR_17->init_num = 0;
    }

    return 1;
}
