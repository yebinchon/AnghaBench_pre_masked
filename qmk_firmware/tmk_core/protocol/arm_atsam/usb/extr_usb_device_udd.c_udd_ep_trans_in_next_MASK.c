
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int ep_size; int nb_trans; int buf_size; int b_shortpacket; int busy; int (* call_trans ) (int ,size_t,int) ;int * buf; } ;
typedef TYPE_1__ udd_ep_job_t ;
typedef int udd_ep_id_t ;
struct usb_endpoint_callback_parameter {int endpoint_address; int sent_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int *,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_4) {
    struct usb_endpoint_callback_parameter *VAR_5 = (struct usb_endpoint_callback_parameter *)VAR_4;
    udd_ep_id_t VAR_6 = VAR_5->endpoint_address;
    uint16_t VAR_7, VAR_8;
    uint16_t VAR_9;
    udd_ep_id_t VAR_10;
    udd_ep_job_t * VAR_11;

    VAR_11 = FUNC_1(VAR_6);
    VAR_10 = VAR_6 & VAR_2;

    VAR_7 = VAR_11->ep_size;

    VAR_8 = VAR_5->sent_bytes;
    VAR_11->nb_trans += VAR_8;


    if (VAR_11->nb_trans != VAR_11->buf_size) {
        VAR_9 = VAR_11->buf_size - VAR_11->nb_trans;
        if (VAR_0 < VAR_9) {


            VAR_9 = VAR_0 - (VAR_0 % VAR_7);
        }

        VAR_11->b_shortpacket = VAR_11->b_shortpacket && (0 == (VAR_9 % VAR_7));
        FUNC_2(&VAR_3, VAR_10, &VAR_11->buf[VAR_11->nb_trans], VAR_9);
        return;
    }


    if (VAR_11->b_shortpacket) {
        VAR_11->b_shortpacket = 0;

        FUNC_2(&VAR_3, VAR_10, &VAR_11->buf[VAR_11->nb_trans], 0);
        return;
    }


    VAR_11->busy = 0;
    if (((void*)0) != VAR_11->call_trans) {
        VAR_11->call_trans(VAR_1, VAR_11->nb_trans, VAR_6);
    }
}
