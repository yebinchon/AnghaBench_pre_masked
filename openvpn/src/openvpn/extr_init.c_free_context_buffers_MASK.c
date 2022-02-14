
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_buffers {int decrypt_buf; int encrypt_buf; int decompress_buf; int compress_buf; int aux_buf; int read_tun_buf; int read_link_buf; } ;


 int FUNC_0 (struct context_buffers*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct context_buffers *VAR_0)
{
    if (VAR_0)
    {
        FUNC_1(&VAR_0->read_link_buf);
        FUNC_1(&VAR_0->read_tun_buf);
        FUNC_1(&VAR_0->aux_buf);






        FUNC_1(&VAR_0->encrypt_buf);
        FUNC_1(&VAR_0->decrypt_buf);

        FUNC_0(VAR_0);
    }
}
