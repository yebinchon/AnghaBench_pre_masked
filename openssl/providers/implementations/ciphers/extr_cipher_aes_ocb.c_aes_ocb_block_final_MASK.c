
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ enc; } ;
struct TYPE_9__ {size_t data_buf_len; scalar_t__ aad_buf_len; scalar_t__ taglen; int iv_state; int tag; TYPE_1__ base; int aad_buf; int data_buf; int key_set; } ;
typedef TYPE_2__ PROV_AES_OCB_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, unsigned char *VAR_2, size_t *VAR_3,
                               size_t VAR_4)
{
    PROV_AES_OCB_CTX *VAR_5 = (PROV_AES_OCB_CTX *)VAR_1;


    if (!VAR_5->key_set || !FUNC_4(VAR_5))
        return 0;





    *VAR_3 = 0;
    if (VAR_5->data_buf_len > 0) {
        if (!FUNC_0(VAR_5, VAR_5->data_buf, VAR_2, VAR_5->data_buf_len))
            return 0;
        *VAR_3 = VAR_5->data_buf_len;
        VAR_5->data_buf_len = 0;
    }
    if (VAR_5->aad_buf_len > 0) {
        if (!FUNC_3(VAR_5, VAR_5->aad_buf, VAR_5->aad_buf_len))
            return 0;
        VAR_5->aad_buf_len = 0;
    }
    if (VAR_5->base.enc) {

        if (!FUNC_2(VAR_5, VAR_5->tag, VAR_5->taglen))
            return 0;
    } else {

        if (VAR_5->taglen == 0)
            return 0;
        if (!FUNC_1(VAR_5))
            return 0;
    }

    VAR_5->iv_state = VAR_0;
    return 1;
}
