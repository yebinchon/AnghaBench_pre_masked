
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ ep_size; int b_use_out_cache_buffer; size_t nb_trans; scalar_t__ buf_size; int busy; int (* call_trans ) (int ,size_t,int) ;int * buf; } ;
typedef TYPE_1__ udd_ep_job_t ;
typedef int udd_ep_id_t ;
struct usb_endpoint_callback_parameter {int endpoint_address; scalar_t__ received_bytes; scalar_t__ out_buffer_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int ,size_t,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int ** VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_5) {
    struct usb_endpoint_callback_parameter *VAR_6 = (struct usb_endpoint_callback_parameter *)VAR_5;
    udd_ep_id_t VAR_7 = VAR_6->endpoint_address;
    uint16_t VAR_8, VAR_9;
    uint16_t VAR_10;
    udd_ep_id_t VAR_11;
    udd_ep_job_t * VAR_12;

    VAR_12 = FUNC_2(VAR_7);
    VAR_11 = VAR_7 & VAR_2;

    VAR_8 = VAR_12->ep_size;

    VAR_9 = VAR_6->received_bytes;


    if (VAR_12->b_use_out_cache_buffer) {
        FUNC_0(&VAR_12->buf[VAR_12->nb_trans], VAR_3[VAR_11 - 1], VAR_12->buf_size % VAR_8);
    }


    VAR_12->nb_trans += VAR_9;
    if (VAR_12->nb_trans > VAR_12->buf_size) {
        VAR_12->nb_trans = VAR_12->buf_size;
    }



    if ((VAR_9 == VAR_6->out_buffer_size) && (VAR_12->nb_trans != VAR_12->buf_size)) {
        VAR_10 = VAR_12->buf_size - VAR_12->nb_trans;
        if (VAR_0 < VAR_10) {


            VAR_10 = VAR_0 - (VAR_0 % VAR_8);
        } else {
            VAR_10 -= VAR_10 % VAR_8;
        }

        if (VAR_10 < VAR_8) {

            VAR_12->b_use_out_cache_buffer = 1;
            FUNC_3(&VAR_4, VAR_11, VAR_3[VAR_11 - 1], VAR_8);
        } else {
            FUNC_3(&VAR_4, VAR_11, &VAR_12->buf[VAR_12->nb_trans], VAR_10);
        }
        return;
    }


    VAR_12->busy = 0;
    if (((void*)0) != VAR_12->call_trans) {
        VAR_12->call_trans(VAR_1, VAR_12->nb_trans, VAR_7);
    }
}
